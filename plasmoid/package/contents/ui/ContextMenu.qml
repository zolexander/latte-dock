/*
    SPDX-FileCopyrightText: 2016 Smith AR <audoban@openmailbox.org>
    SPDX-FileCopyrightText: 2016 Michail Vourlakos <mvourlakos@gmail.com>
    SPDX-License-Identifier: GPL-2.0-or-later
*/

import QtQuick 2.0

import org.kde.plasma.plasmoid 2.0

import org.kde.plasma.core 2.0 as PlasmaCore
import org.kde.plasma.components 3.0 as PlasmaComponents
import org.kde.activities 0.1 as Activities
import org.kde.taskmanager 0.1 as TaskManager

import org.kde.latte.core 0.2 as LatteCore
import org.kde.latte.private.tasks 0.1 as LatteTasks

import "../code/activitiesTools.js" as ActivitiesTools

PlasmaComponents.Menu {
    id: menu

    // index in tasksModel for the clicked task
    property var modelIndex
    property var visualParent
    property var mpris2Source
    property var backend
    property bool showAllPlaces: false
    // Position the menu relative to the dock edge
    /*placement: {
        if (root.location === PlasmaCore.Types.LeftEdge) {
            return PlasmaCore.Types.RightPosedTopAlignedPopup;
        } else if (root.location === PlasmaCore.Types.TopEdge) {
            return PlasmaCore.Types.BottomPosedLeftAlignedPopup;
        } else if (root.location === PlasmaCore.Types.RightEdge) {
            return PlasmaCore.Types.LeftPosedTopAlignedPopup;
        } else {
            return PlasmaCore.Types.TopPosedLeftAlignedPopup;
        }
    }*/




    function show() {
        open();
    }

    // Helper to safely access tasksModel
    function hasTasksModel() {
        return typeof tasksModel !== "undefined" && tasksModel !== null;
    }

    // --- Basic actions ---

    // Start New Instance (for window tasks)
    PlasmaComponents.MenuItem {
        visible: menu.hasTasksModel()
                 && visualParent
                 && visualParent.m
                 && visualParent.m.IsLauncher !== true
                 && visualParent.m.IsStartup !== true

        enabled: visible
        text: i18n("Start New Instance")

        onClicked: {
            if (menu.hasTasksModel()) {
                tasksModel.requestNewInstance(menu.modelIndex);
            }
        }
    }

    // Close window
    PlasmaComponents.MenuItem {
        visible: menu.hasTasksModel()
                 && visualParent
                 && visualParent.m
                 && visualParent.m.IsWindow === true

        enabled: visible
        text: i18n("Close")

        onClicked: {
            if (menu.hasTasksModel()) {
                tasksModel.requestClose(menu.modelIndex);
            }
        }
    }

    // --- Extended window actions (inspired by original Latte menu) ---

    PlasmaComponents.MenuItem {
        visible: menu.hasTasksModel()
                 && visualParent && visualParent.m
                 && visualParent.m.IsWindow === true
                 && visualParent.m.IsMovable === true

        enabled: visible
        text: i18n("&Move")

        onClicked: tasksModel.requestMove(menu.modelIndex)
    }

    PlasmaComponents.MenuItem {
        visible: menu.hasTasksModel()
                 && visualParent && visualParent.m
                 && visualParent.m.IsWindow === true
                 && visualParent.m.IsResizable === true

        enabled: visible
        text: i18n("Re&size")

        onClicked: tasksModel.requestResize(menu.modelIndex)
    }

    PlasmaComponents.MenuItem {
        visible: menu.hasTasksModel()
                 && visualParent && visualParent.m
                 && visualParent.m.IsWindow === true
                 && visualParent.m.IsMaximizable === true

        enabled: visible
        checkable: true
        checked: visualParent && visualParent.m && visualParent.m.IsMaximized === true

        text: i18n("Ma&ximize")

        onClicked: tasksModel.requestToggleMaximized(menu.modelIndex)
    }

    PlasmaComponents.MenuItem {
        visible: menu.hasTasksModel()
                 && visualParent && visualParent.m
                 && visualParent.m.IsWindow === true
                 && visualParent.m.IsMinimizable === true

        enabled: visible
        checkable: true
        checked: visualParent && visualParent.m && visualParent.m.IsMinimized === true

        text: i18n("Mi&nimize")

        onClicked: tasksModel.requestToggleMinimized(menu.modelIndex)
    }

    PlasmaComponents.MenuItem {
        visible: menu.hasTasksModel()
                 && visualParent && visualParent.m

        enabled: visible
        checkable: true
        checked: visualParent && visualParent.m && visualParent.m.IsKeepAbove === true

        text: i18n("Keep &Above Others")

        onClicked: tasksModel.requestToggleKeepAbove(menu.modelIndex)
    }

    PlasmaComponents.MenuItem {
        visible: menu.hasTasksModel()
                 && visualParent && visualParent.m

        enabled: visible
        checkable: true
        checked: visualParent && visualParent.m && visualParent.m.IsKeepBelow === true

        text: i18n("Keep &Below Others")

        onClicked: tasksModel.requestToggleKeepBelow(menu.modelIndex)
    }

    PlasmaComponents.MenuItem {
        visible: menu.hasTasksModel()
                 && visualParent && visualParent.m
                 && visualParent.m.IsWindow === true
                 && visualParent.m.IsFullScreenable === true

        enabled: visible
        checkable: true
        checked: visualParent && visualParent.m && visualParent.m.IsFullScreen === true

        text: i18n("&Fullscreen")

        onClicked: tasksModel.requestToggleFullScreen(menu.modelIndex)
    }

    PlasmaComponents.MenuItem {
        visible: menu.hasTasksModel()
                 && visualParent && visualParent.m
                 && visualParent.m.IsWindow === true
                 && visualParent.m.IsShadeable === true

        enabled: visible
        checkable: true
        checked: visualParent && visualParent.m && visualParent.m.IsShaded === true

        text: i18n("&Shade")

        onClicked: tasksModel.requestToggleShaded(menu.modelIndex)
    }

    // --- Virtual desktop actions (simplified) ---

    PlasmaComponents.MenuItem {
        // Move window to the current desktop
        visible: typeof virtualDesktopInfo !== "undefined"
                 && virtualDesktopInfo.numberOfDesktops > 1
                 && menu.hasTasksModel()
                 && visualParent && visualParent.m
                 && visualParent.m.IsWindow === true

        enabled: visible
        text: i18n("Move To Current Desktop")

        onClicked: {
            if (!menu.hasTasksModel()) {
                return;
            }
            tasksModel.requestVirtualDesktops(menu.modelIndex, [virtualDesktopInfo.currentDesktop]);
        }
    }

    PlasmaComponents.MenuItem {
        // Show window on all virtual desktops
        visible: typeof virtualDesktopInfo !== "undefined"
                 && virtualDesktopInfo.numberOfDesktops > 1
                 && menu.hasTasksModel()
                 && visualParent && visualParent.m
                 && visualParent.m.IsWindow === true

        enabled: visible
        checkable: true
        checked: visualParent && visualParent.m && visualParent.m.IsOnAllVirtualDesktops === true

        text: i18n("All Desktops")

        onClicked: {
            if (!menu.hasTasksModel() || !visualParent || !visualParent.m) {
                return;
            }

            if (visualParent.m.IsOnAllVirtualDesktops) {
                // Move only to current desktop
                tasksModel.requestVirtualDesktops(menu.modelIndex, [virtualDesktopInfo.currentDesktop]);
            } else {
                // Show on all desktops (empty list means all)
                tasksModel.requestVirtualDesktops(menu.modelIndex, []);
            }
        }
    }

    PlasmaComponents.MenuItem {
        // Create a new desktop and move the window there
        visible: typeof virtualDesktopInfo !== "undefined"
                 && menu.hasTasksModel()
                 && visualParent && visualParent.m
                 && visualParent.m.IsWindow === true

        enabled: visible
        text: i18n("New Desktop")

        onClicked: {
            if (!menu.hasTasksModel()) {
                return;
            }
            tasksModel.requestNewVirtualDesktop(menu.modelIndex);
        }
    }

    // --- Activity actions (simplified) ---

    PlasmaComponents.MenuItem {
        // Add window to current activity (if not already there)
        visible: typeof activityInfo !== "undefined"
                 && activityInfo.numberOfRunningActivities > 1
                 && menu.hasTasksModel()
                 && visualParent && visualParent.m
                 && visualParent.m.IsWindow === true

        enabled: visible && visualParent.m.Activities.length > 0
                  && visualParent.m.Activities.indexOf(activityInfo.currentActivity) < 0

        text: i18n("Add To Current Activity")

        onClicked: {
            if (!menu.hasTasksModel() || !visualParent || !visualParent.m) {
                return;
            }

            var currentActivities = visualParent.m.Activities;
            // wenn leer, bedeutet das "alle Activities" → hier fügen wir explizit aktuelle hinzu
            if (!currentActivities || currentActivities.length === 0) {
                currentActivities = [];
            }

            if (currentActivities.indexOf(activityInfo.currentActivity) < 0) {
                currentActivities = currentActivities.concat(activityInfo.currentActivity);
                tasksModel.requestActivities(menu.modelIndex, currentActivities);
            }
        }
    }

    PlasmaComponents.MenuItem {
        // Show window on all activities (or restrict to current)
        visible: typeof activityInfo !== "undefined"
                 && activityInfo.numberOfRunningActivities > 1
                 && menu.hasTasksModel()
                 && visualParent && visualParent.m
                 && visualParent.m.IsWindow === true

        enabled: visible
        checkable: true
        // leer oder undefined bedeutet "alle Activities"
        checked: !visualParent.m.Activities || visualParent.m.Activities.length === 0

        text: i18n("All Activities")

        onClicked: {
            if (!menu.hasTasksModel() || !visualParent || !visualParent.m) {
                return;
            }

            if (!visualParent.m.Activities || visualParent.m.Activities.length === 0) {
                // aktuell auf allen → auf aktuelle Activity einschränken
                tasksModel.requestActivities(menu.modelIndex, [activityInfo.currentActivity]);
            } else {
                // auf alle Activities ausweiten (leere Liste)
                tasksModel.requestActivities(menu.modelIndex, []);
            }
        }
    }

    // Pin / Unpin launcher
    PlasmaComponents.MenuItem {
        visible: typeof appletAbilities !== "undefined"
                 && appletAbilities.launchers
                 && visualParent
                 && visualParent.m
                 && visualParent.m.LauncherUrlWithoutIcon !== ""

        checkable: true
        checked: menu.hasTasksModel() && visualParent && visualParent.m
                 && tasksModel.launcherPosition(visualParent.m.LauncherUrlWithoutIcon) !== -1

        text: checked ? i18n("Unpin Launcher") : i18n("Pin Launcher")

        onClicked: {
            if (!menu.hasTasksModel() || typeof appletAbilities === "undefined" || !visualParent || !visualParent.m) {
                return;
            }

            var url = visualParent.m.LauncherUrlWithoutIcon;
            if (tasksModel.launcherPosition(url) !== -1) {
                appletAbilities.launchers.removeLauncher(url);
            } else {
                appletAbilities.launchers.addLauncher(url);
            }
        }
    }
}
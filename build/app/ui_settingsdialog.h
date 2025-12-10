#include <klocalizedstring.h>

/********************************************************************************
** Form generated from reading UI file 'settingsdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGSDIALOG_H
#define UI_SETTINGSDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "settings/settingsdialog/layoutstableview.h"

QT_BEGIN_NAMESPACE

class Ui_SettingsDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QTabWidget *tabWidget;
    QWidget *layoutsTab;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer;
    QToolButton *singleToolBtn;
    QHBoxLayout *horizontalLayout_6;
    QToolButton *multipleToolBtn;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    Latte::Settings::View::LayoutsTableView *layoutsView;
    QWidget *buttonsColumn;
    QVBoxLayout *verticalLayout;
    QPushButton *switchButton;
    QPushButton *activitiesButton;
    QSpacerItem *verticalSpacer_5;
    QFrame *line_2;
    QSpacerItem *verticalSpacer_4;
    QPushButton *newButton;
    QPushButton *duplicateButton;
    QPushButton *removeButton;
    QSpacerItem *verticalSpacer_10;
    QPushButton *enabledButton;
    QPushButton *readOnlyButton;
    QSpacerItem *verticalSpacer_12;
    QSpacerItem *verticalSpacer_13;
    QPushButton *detailsButton;
    QPushButton *viewsBtn;
    QSpacerItem *verticalSpacer_2;
    QFrame *line;
    QSpacerItem *verticalSpacer_3;
    QPushButton *importButton;
    QPushButton *exportButton;
    QSpacerItem *verticalSpacer;
    QWidget *preferencesTab;
    QHBoxLayout *horizontalLayout_4;
    QScrollArea *preferencesScrollArea;
    QWidget *preferencesScrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_4;
    QGridLayout *preferencesGridLayout;
    QCheckBox *infoWindowChkBox;
    QHBoxLayout *parabolicHeaderRowLayout;
    QSpacerItem *horizontalSpacer_7;
    QLabel *parabolicEffectLbl;
    QHBoxLayout *horizontalLayout_8;
    QToolButton *smallParabolicBtn;
    QToolButton *mediumParabolicBtn;
    QToolButton *largeParabolicBtn;
    QLabel *parabolicSpreadLbl;
    QSpacerItem *horizontalSpacer_12;
    QHBoxLayout *plasmaThemeHeaderRowLayout;
    QSpacerItem *verticalSpacer_7;
    QSpacerItem *verticalSpacer_9;
    QCheckBox *autostartChkBox;
    QSpacerItem *verticalSpacer_14;
    QCheckBox *metaPressHoldChkBox;
    QCheckBox *badges3DStyleChkBox;
    QHBoxLayout *marginInfluenceRowLayout;
    QPushButton *noMarginInfluenceBtn;
    QPushButton *halfMarginInfluenceBtn;
    QPushButton *fullMarginInfluenceBtn;
    QLabel *marginInfluenceLbl;
    QSpacerItem *horizontalSpacer_13;
    QCheckBox *broadcastGeomChkBox;
    QHBoxLayout *behaviorHeaderRowLayout;
    QSpacerItem *horizontalSpacer_5;
    QLabel *behaviorLbl;
    QSpacerItem *verticalSpacer_6;
    QHBoxLayout *contextMenuRowLayout;
    QSpacerItem *horizontalSpacer_10;
    QLabel *contextMenuLbl;
    QHBoxLayout *actionsHeaderRowLayout;
    QSpacerItem *horizontalSpacer_6;
    QLabel *actionsLbl;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *contextMenuActionsBtn;
    QSpacerItem *horizontalSpacer_11;
    QHBoxLayout *screensHeaderRowLayout;
    QSpacerItem *horizontalSpacer_8;
    QLabel *screensLbl;
    QHBoxLayout *screenDelayRowLayout;
    QSpinBox *screenTrackerSpinBox;
    QLabel *trackScreensDelayLbl;
    QSpacerItem *horizontalSpacer_9;
    QCheckBox *noBordersForMaximizedChkBox;
    QHBoxLayout *apperanceHeaderRowLayout;
    QSpacerItem *horizontalSpacer_4;
    QLabel *appearanceLbl;
    QSpacerItem *verticalSpacer_8;
    QHBoxLayout *plasmaThemeRowLayout;
    QSpacerItem *verticalSpacer_11;
    QCheckBox *metaPressChkBox;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *SettingsDialog)
    {
        if (SettingsDialog->objectName().isEmpty())
            SettingsDialog->setObjectName("SettingsDialog");
        SettingsDialog->resize(1100, 750);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(SettingsDialog->sizePolicy().hasHeightForWidth());
        SettingsDialog->setSizePolicy(sizePolicy);
        SettingsDialog->setMinimumSize(QSize(500, 0));
        verticalLayout_2 = new QVBoxLayout(SettingsDialog);
        verticalLayout_2->setObjectName("verticalLayout_2");
        tabWidget = new QTabWidget(SettingsDialog);
        tabWidget->setObjectName("tabWidget");
        layoutsTab = new QWidget();
        layoutsTab->setObjectName("layoutsTab");
        horizontalLayout = new QHBoxLayout(layoutsTab);
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);

        singleToolBtn = new QToolButton(layoutsTab);
        singleToolBtn->setObjectName("singleToolBtn");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(singleToolBtn->sizePolicy().hasHeightForWidth());
        singleToolBtn->setSizePolicy(sizePolicy1);
        singleToolBtn->setCheckable(true);

        horizontalLayout_5->addWidget(singleToolBtn);


        horizontalLayout_3->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        multipleToolBtn = new QToolButton(layoutsTab);
        multipleToolBtn->setObjectName("multipleToolBtn");
        multipleToolBtn->setCheckable(true);
        multipleToolBtn->setChecked(false);

        horizontalLayout_6->addWidget(multipleToolBtn);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_2);


        horizontalLayout_3->addLayout(horizontalLayout_6);


        verticalLayout_3->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        layoutsView = new Latte::Settings::View::LayoutsTableView(layoutsTab);
        layoutsView->setObjectName("layoutsView");
        layoutsView->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        layoutsView->setProperty("showDropIndicator", QVariant(true));
        layoutsView->setAlternatingRowColors(true);
        layoutsView->setSelectionMode(QAbstractItemView::SingleSelection);
        layoutsView->setSelectionBehavior(QAbstractItemView::SelectRows);
        layoutsView->setShowGrid(false);
        layoutsView->setSortingEnabled(true);
        layoutsView->horizontalHeader()->setVisible(false);
        layoutsView->horizontalHeader()->setCascadingSectionResizes(true);
        layoutsView->horizontalHeader()->setHighlightSections(false);
        layoutsView->horizontalHeader()->setProperty("showSortIndicator", QVariant(true));
        layoutsView->verticalHeader()->setVisible(false);
        layoutsView->verticalHeader()->setHighlightSections(false);

        horizontalLayout_2->addWidget(layoutsView);

        buttonsColumn = new QWidget(layoutsTab);
        buttonsColumn->setObjectName("buttonsColumn");
        verticalLayout = new QVBoxLayout(buttonsColumn);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        switchButton = new QPushButton(buttonsColumn);
        switchButton->setObjectName("switchButton");
        QIcon icon;
        QString iconThemeName = QString::fromUtf8("user-identity");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon = QIcon::fromTheme(iconThemeName);
        } else {
            icon.addFile(QString::fromUtf8("."), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        }
        switchButton->setIcon(icon);
        switchButton->setAutoDefault(false);

        verticalLayout->addWidget(switchButton);

        activitiesButton = new QPushButton(buttonsColumn);
        activitiesButton->setObjectName("activitiesButton");
        QIcon icon1;
        iconThemeName = QString::fromUtf8("activities");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon1 = QIcon::fromTheme(iconThemeName);
        } else {
            icon1.addFile(QString::fromUtf8("."), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        }
        activitiesButton->setIcon(icon1);

        verticalLayout->addWidget(activitiesButton);

        verticalSpacer_5 = new QSpacerItem(20, 15, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);

        verticalLayout->addItem(verticalSpacer_5);

        line_2 = new QFrame(buttonsColumn);
        line_2->setObjectName("line_2");
        line_2->setMinimumSize(QSize(0, 0));
        line_2->setFrameShape(QFrame::Shape::HLine);
        line_2->setFrameShadow(QFrame::Shadow::Sunken);

        verticalLayout->addWidget(line_2);

        verticalSpacer_4 = new QSpacerItem(20, 15, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);

        verticalLayout->addItem(verticalSpacer_4);

        newButton = new QPushButton(buttonsColumn);
        newButton->setObjectName("newButton");
        QIcon icon2;
        iconThemeName = QString::fromUtf8("add");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon2 = QIcon::fromTheme(iconThemeName);
        } else {
            icon2.addFile(QString::fromUtf8("."), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        }
        newButton->setIcon(icon2);

        verticalLayout->addWidget(newButton);

        duplicateButton = new QPushButton(buttonsColumn);
        duplicateButton->setObjectName("duplicateButton");
        QIcon icon3;
        iconThemeName = QString::fromUtf8("edit-copy");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon3 = QIcon::fromTheme(iconThemeName);
        } else {
            icon3.addFile(QString::fromUtf8("."), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        }
        duplicateButton->setIcon(icon3);
        duplicateButton->setFlat(false);

        verticalLayout->addWidget(duplicateButton);

        removeButton = new QPushButton(buttonsColumn);
        removeButton->setObjectName("removeButton");
        QIcon icon4;
        iconThemeName = QString::fromUtf8("delete");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon4 = QIcon::fromTheme(iconThemeName);
        } else {
            icon4.addFile(QString::fromUtf8("."), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        }
        removeButton->setIcon(icon4);

        verticalLayout->addWidget(removeButton);

        verticalSpacer_10 = new QSpacerItem(1, 10, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout->addItem(verticalSpacer_10);

        enabledButton = new QPushButton(buttonsColumn);
        enabledButton->setObjectName("enabledButton");
        QIcon icon5;
        iconThemeName = QString::fromUtf8("edit-link");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon5 = QIcon::fromTheme(iconThemeName);
        } else {
            icon5.addFile(QString::fromUtf8("."), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        }
        enabledButton->setIcon(icon5);

        verticalLayout->addWidget(enabledButton);

        readOnlyButton = new QPushButton(buttonsColumn);
        readOnlyButton->setObjectName("readOnlyButton");
        QIcon icon6;
        iconThemeName = QString::fromUtf8("object-locked");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon6 = QIcon::fromTheme(iconThemeName);
        } else {
            icon6.addFile(QString::fromUtf8("."), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        }
        readOnlyButton->setIcon(icon6);
        readOnlyButton->setCheckable(true);

        verticalLayout->addWidget(readOnlyButton);

        verticalSpacer_12 = new QSpacerItem(1, 10, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout->addItem(verticalSpacer_12);

        verticalSpacer_13 = new QSpacerItem(20, 15, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_13);

        detailsButton = new QPushButton(buttonsColumn);
        detailsButton->setObjectName("detailsButton");
        QIcon icon7;
        iconThemeName = QString::fromUtf8("view-list-details");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon7 = QIcon::fromTheme(iconThemeName);
        } else {
            icon7.addFile(QString::fromUtf8("."), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        }
        detailsButton->setIcon(icon7);

        verticalLayout->addWidget(detailsButton);

        viewsBtn = new QPushButton(buttonsColumn);
        viewsBtn->setObjectName("viewsBtn");
        viewsBtn->setText(QString::fromUtf8("Docks, Panels..."));
        QIcon icon8;
        iconThemeName = QString::fromUtf8("window");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon8 = QIcon::fromTheme(iconThemeName);
        } else {
            icon8.addFile(QString::fromUtf8("."), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        }
        viewsBtn->setIcon(icon8);

        verticalLayout->addWidget(viewsBtn);

        verticalSpacer_2 = new QSpacerItem(20, 15, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);

        verticalLayout->addItem(verticalSpacer_2);

        line = new QFrame(buttonsColumn);
        line->setObjectName("line");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(line->sizePolicy().hasHeightForWidth());
        line->setSizePolicy(sizePolicy2);
        line->setSizeIncrement(QSize(0, 0));
        line->setBaseSize(QSize(0, 0));
        line->setLineWidth(1);
        line->setFrameShape(QFrame::Shape::HLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);

        verticalLayout->addWidget(line);

        verticalSpacer_3 = new QSpacerItem(20, 15, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);

        verticalLayout->addItem(verticalSpacer_3);

        importButton = new QPushButton(buttonsColumn);
        importButton->setObjectName("importButton");
        QIcon icon9;
        iconThemeName = QString::fromUtf8("document-import");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon9 = QIcon::fromTheme(iconThemeName);
        } else {
            icon9.addFile(QString::fromUtf8("."), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        }
        importButton->setIcon(icon9);

        verticalLayout->addWidget(importButton);

        exportButton = new QPushButton(buttonsColumn);
        exportButton->setObjectName("exportButton");
        QIcon icon10;
        iconThemeName = QString::fromUtf8("document-export");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon10 = QIcon::fromTheme(iconThemeName);
        } else {
            icon10.addFile(QString::fromUtf8("."), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        }
        exportButton->setIcon(icon10);

        verticalLayout->addWidget(exportButton);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout_2->addWidget(buttonsColumn);


        verticalLayout_3->addLayout(horizontalLayout_2);


        horizontalLayout->addLayout(verticalLayout_3);

        tabWidget->addTab(layoutsTab, QString());
        preferencesTab = new QWidget();
        preferencesTab->setObjectName("preferencesTab");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(preferencesTab->sizePolicy().hasHeightForWidth());
        preferencesTab->setSizePolicy(sizePolicy3);
        horizontalLayout_4 = new QHBoxLayout(preferencesTab);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(-1, -1, 6, -1);
        preferencesScrollArea = new QScrollArea(preferencesTab);
        preferencesScrollArea->setObjectName("preferencesScrollArea");
        QSizePolicy sizePolicy4(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(preferencesScrollArea->sizePolicy().hasHeightForWidth());
        preferencesScrollArea->setSizePolicy(sizePolicy4);
        preferencesScrollArea->setFrameShape(QFrame::NoFrame);
        preferencesScrollArea->setWidgetResizable(true);
        preferencesScrollAreaWidgetContents = new QWidget();
        preferencesScrollAreaWidgetContents->setObjectName("preferencesScrollAreaWidgetContents");
        preferencesScrollAreaWidgetContents->setGeometry(QRect(0, 0, 1068, 469));
        sizePolicy2.setHeightForWidth(preferencesScrollAreaWidgetContents->sizePolicy().hasHeightForWidth());
        preferencesScrollAreaWidgetContents->setSizePolicy(sizePolicy2);
        verticalLayout_4 = new QVBoxLayout(preferencesScrollAreaWidgetContents);
        verticalLayout_4->setObjectName("verticalLayout_4");
        preferencesGridLayout = new QGridLayout();
        preferencesGridLayout->setObjectName("preferencesGridLayout");
        infoWindowChkBox = new QCheckBox(preferencesScrollAreaWidgetContents);
        infoWindowChkBox->setObjectName("infoWindowChkBox");

        preferencesGridLayout->addWidget(infoWindowChkBox, 1, 1, 1, 1);

        parabolicHeaderRowLayout = new QHBoxLayout();
        parabolicHeaderRowLayout->setObjectName("parabolicHeaderRowLayout");
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        parabolicHeaderRowLayout->addItem(horizontalSpacer_7);

        parabolicEffectLbl = new QLabel(preferencesScrollAreaWidgetContents);
        parabolicEffectLbl->setObjectName("parabolicEffectLbl");
        sizePolicy2.setHeightForWidth(parabolicEffectLbl->sizePolicy().hasHeightForWidth());
        parabolicEffectLbl->setSizePolicy(sizePolicy2);
        parabolicEffectLbl->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        parabolicHeaderRowLayout->addWidget(parabolicEffectLbl);


        preferencesGridLayout->addLayout(parabolicHeaderRowLayout, 10, 0, 1, 1);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        smallParabolicBtn = new QToolButton(preferencesScrollAreaWidgetContents);
        smallParabolicBtn->setObjectName("smallParabolicBtn");
        QSizePolicy sizePolicy5(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(smallParabolicBtn->sizePolicy().hasHeightForWidth());
        smallParabolicBtn->setSizePolicy(sizePolicy5);
        smallParabolicBtn->setMinimumSize(QSize(150, 0));
        smallParabolicBtn->setMaximumSize(QSize(150, 16777215));
        smallParabolicBtn->setCheckable(true);

        horizontalLayout_8->addWidget(smallParabolicBtn);

        mediumParabolicBtn = new QToolButton(preferencesScrollAreaWidgetContents);
        mediumParabolicBtn->setObjectName("mediumParabolicBtn");
        sizePolicy5.setHeightForWidth(mediumParabolicBtn->sizePolicy().hasHeightForWidth());
        mediumParabolicBtn->setSizePolicy(sizePolicy5);
        mediumParabolicBtn->setMinimumSize(QSize(150, 0));
        mediumParabolicBtn->setMaximumSize(QSize(150, 16777215));
        mediumParabolicBtn->setCheckable(true);

        horizontalLayout_8->addWidget(mediumParabolicBtn);

        largeParabolicBtn = new QToolButton(preferencesScrollAreaWidgetContents);
        largeParabolicBtn->setObjectName("largeParabolicBtn");
        sizePolicy5.setHeightForWidth(largeParabolicBtn->sizePolicy().hasHeightForWidth());
        largeParabolicBtn->setSizePolicy(sizePolicy5);
        largeParabolicBtn->setMinimumSize(QSize(150, 0));
        largeParabolicBtn->setMaximumSize(QSize(150, 16777215));
        largeParabolicBtn->setCheckable(true);

        horizontalLayout_8->addWidget(largeParabolicBtn);

        parabolicSpreadLbl = new QLabel(preferencesScrollAreaWidgetContents);
        parabolicSpreadLbl->setObjectName("parabolicSpreadLbl");

        horizontalLayout_8->addWidget(parabolicSpreadLbl);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_12);


        preferencesGridLayout->addLayout(horizontalLayout_8, 10, 1, 1, 1);

        plasmaThemeHeaderRowLayout = new QHBoxLayout();
        plasmaThemeHeaderRowLayout->setObjectName("plasmaThemeHeaderRowLayout");

        preferencesGridLayout->addLayout(plasmaThemeHeaderRowLayout, 20, 0, 1, 1);

        verticalSpacer_7 = new QSpacerItem(20, 10, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        preferencesGridLayout->addItem(verticalSpacer_7, 6, 1, 1, 1);

        verticalSpacer_9 = new QSpacerItem(20, 10, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        preferencesGridLayout->addItem(verticalSpacer_9, 15, 1, 1, 1);

        autostartChkBox = new QCheckBox(preferencesScrollAreaWidgetContents);
        autostartChkBox->setObjectName("autostartChkBox");

        preferencesGridLayout->addWidget(autostartChkBox, 3, 1, 1, 1);

        verticalSpacer_14 = new QSpacerItem(20, 10, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        preferencesGridLayout->addItem(verticalSpacer_14, 17, 1, 1, 1);

        metaPressHoldChkBox = new QCheckBox(preferencesScrollAreaWidgetContents);
        metaPressHoldChkBox->setObjectName("metaPressHoldChkBox");

        preferencesGridLayout->addWidget(metaPressHoldChkBox, 8, 1, 1, 1);

        badges3DStyleChkBox = new QCheckBox(preferencesScrollAreaWidgetContents);
        badges3DStyleChkBox->setObjectName("badges3DStyleChkBox");

        preferencesGridLayout->addWidget(badges3DStyleChkBox, 0, 1, 1, 1);

        marginInfluenceRowLayout = new QHBoxLayout();
        marginInfluenceRowLayout->setObjectName("marginInfluenceRowLayout");
        noMarginInfluenceBtn = new QPushButton(preferencesScrollAreaWidgetContents);
        noMarginInfluenceBtn->setObjectName("noMarginInfluenceBtn");
        noMarginInfluenceBtn->setMinimumSize(QSize(150, 0));
        noMarginInfluenceBtn->setText(QString::fromUtf8("0%"));
        noMarginInfluenceBtn->setCheckable(true);

        marginInfluenceRowLayout->addWidget(noMarginInfluenceBtn);

        halfMarginInfluenceBtn = new QPushButton(preferencesScrollAreaWidgetContents);
        halfMarginInfluenceBtn->setObjectName("halfMarginInfluenceBtn");
        halfMarginInfluenceBtn->setMinimumSize(QSize(150, 0));
        halfMarginInfluenceBtn->setText(QString::fromUtf8("50%"));
        halfMarginInfluenceBtn->setCheckable(true);

        marginInfluenceRowLayout->addWidget(halfMarginInfluenceBtn);

        fullMarginInfluenceBtn = new QPushButton(preferencesScrollAreaWidgetContents);
        fullMarginInfluenceBtn->setObjectName("fullMarginInfluenceBtn");
        fullMarginInfluenceBtn->setMinimumSize(QSize(150, 0));
        fullMarginInfluenceBtn->setText(QString::fromUtf8("100%"));
        fullMarginInfluenceBtn->setCheckable(true);

        marginInfluenceRowLayout->addWidget(fullMarginInfluenceBtn);

        marginInfluenceLbl = new QLabel(preferencesScrollAreaWidgetContents);
        marginInfluenceLbl->setObjectName("marginInfluenceLbl");
        marginInfluenceLbl->setText(QString::fromUtf8("thickness margin influence"));

        marginInfluenceRowLayout->addWidget(marginInfluenceLbl);

        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        marginInfluenceRowLayout->addItem(horizontalSpacer_13);


        preferencesGridLayout->addLayout(marginInfluenceRowLayout, 12, 1, 1, 1);

        broadcastGeomChkBox = new QCheckBox(preferencesScrollAreaWidgetContents);
        broadcastGeomChkBox->setObjectName("broadcastGeomChkBox");

        preferencesGridLayout->addWidget(broadcastGeomChkBox, 5, 1, 1, 1);

        behaviorHeaderRowLayout = new QHBoxLayout();
        behaviorHeaderRowLayout->setObjectName("behaviorHeaderRowLayout");
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        behaviorHeaderRowLayout->addItem(horizontalSpacer_5);

        behaviorLbl = new QLabel(preferencesScrollAreaWidgetContents);
        behaviorLbl->setObjectName("behaviorLbl");
        sizePolicy.setHeightForWidth(behaviorLbl->sizePolicy().hasHeightForWidth());
        behaviorLbl->setSizePolicy(sizePolicy);
        behaviorLbl->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        behaviorHeaderRowLayout->addWidget(behaviorLbl);


        preferencesGridLayout->addLayout(behaviorHeaderRowLayout, 3, 0, 1, 1);

        verticalSpacer_6 = new QSpacerItem(20, 10, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        preferencesGridLayout->addItem(verticalSpacer_6, 2, 1, 1, 1);

        contextMenuRowLayout = new QHBoxLayout();
        contextMenuRowLayout->setObjectName("contextMenuRowLayout");
        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        contextMenuRowLayout->addItem(horizontalSpacer_10);

        contextMenuLbl = new QLabel(preferencesScrollAreaWidgetContents);
        contextMenuLbl->setObjectName("contextMenuLbl");

        contextMenuRowLayout->addWidget(contextMenuLbl);


        preferencesGridLayout->addLayout(contextMenuRowLayout, 16, 0, 1, 1);

        actionsHeaderRowLayout = new QHBoxLayout();
        actionsHeaderRowLayout->setObjectName("actionsHeaderRowLayout");
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        actionsHeaderRowLayout->addItem(horizontalSpacer_6);

        actionsLbl = new QLabel(preferencesScrollAreaWidgetContents);
        actionsLbl->setObjectName("actionsLbl");
        actionsLbl->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        actionsHeaderRowLayout->addWidget(actionsLbl);


        preferencesGridLayout->addLayout(actionsHeaderRowLayout, 7, 0, 1, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        contextMenuActionsBtn = new QPushButton(preferencesScrollAreaWidgetContents);
        contextMenuActionsBtn->setObjectName("contextMenuActionsBtn");
        sizePolicy5.setHeightForWidth(contextMenuActionsBtn->sizePolicy().hasHeightForWidth());
        contextMenuActionsBtn->setSizePolicy(sizePolicy5);
        contextMenuActionsBtn->setMinimumSize(QSize(150, 0));
        contextMenuActionsBtn->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout_7->addWidget(contextMenuActionsBtn);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_11);


        preferencesGridLayout->addLayout(horizontalLayout_7, 16, 1, 1, 1);

        screensHeaderRowLayout = new QHBoxLayout();
        screensHeaderRowLayout->setObjectName("screensHeaderRowLayout");
        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        screensHeaderRowLayout->addItem(horizontalSpacer_8);

        screensLbl = new QLabel(preferencesScrollAreaWidgetContents);
        screensLbl->setObjectName("screensLbl");
        sizePolicy2.setHeightForWidth(screensLbl->sizePolicy().hasHeightForWidth());
        screensLbl->setSizePolicy(sizePolicy2);
        screensLbl->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        screensHeaderRowLayout->addWidget(screensLbl);


        preferencesGridLayout->addLayout(screensHeaderRowLayout, 18, 0, 1, 1);

        screenDelayRowLayout = new QHBoxLayout();
        screenDelayRowLayout->setObjectName("screenDelayRowLayout");
        screenTrackerSpinBox = new QSpinBox(preferencesScrollAreaWidgetContents);
        screenTrackerSpinBox->setObjectName("screenTrackerSpinBox");
        QSizePolicy sizePolicy6(QSizePolicy::Policy::MinimumExpanding, QSizePolicy::Policy::Fixed);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(screenTrackerSpinBox->sizePolicy().hasHeightForWidth());
        screenTrackerSpinBox->setSizePolicy(sizePolicy6);
        screenTrackerSpinBox->setMinimumSize(QSize(70, 0));
        screenTrackerSpinBox->setMaximumSize(QSize(110, 16777215));
        screenTrackerSpinBox->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        screenTrackerSpinBox->setMinimum(1000);
        screenTrackerSpinBox->setMaximum(10000);
        screenTrackerSpinBox->setSingleStep(100);
        screenTrackerSpinBox->setValue(2500);

        screenDelayRowLayout->addWidget(screenTrackerSpinBox);

        trackScreensDelayLbl = new QLabel(preferencesScrollAreaWidgetContents);
        trackScreensDelayLbl->setObjectName("trackScreensDelayLbl");
        sizePolicy2.setHeightForWidth(trackScreensDelayLbl->sizePolicy().hasHeightForWidth());
        trackScreensDelayLbl->setSizePolicy(sizePolicy2);

        screenDelayRowLayout->addWidget(trackScreensDelayLbl);

        horizontalSpacer_9 = new QSpacerItem(20, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        screenDelayRowLayout->addItem(horizontalSpacer_9);


        preferencesGridLayout->addLayout(screenDelayRowLayout, 18, 1, 1, 1);

        noBordersForMaximizedChkBox = new QCheckBox(preferencesScrollAreaWidgetContents);
        noBordersForMaximizedChkBox->setObjectName("noBordersForMaximizedChkBox");

        preferencesGridLayout->addWidget(noBordersForMaximizedChkBox, 4, 1, 1, 1);

        apperanceHeaderRowLayout = new QHBoxLayout();
        apperanceHeaderRowLayout->setObjectName("apperanceHeaderRowLayout");
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        apperanceHeaderRowLayout->addItem(horizontalSpacer_4);

        appearanceLbl = new QLabel(preferencesScrollAreaWidgetContents);
        appearanceLbl->setObjectName("appearanceLbl");
        appearanceLbl->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        apperanceHeaderRowLayout->addWidget(appearanceLbl);


        preferencesGridLayout->addLayout(apperanceHeaderRowLayout, 0, 0, 1, 1);

        verticalSpacer_8 = new QSpacerItem(20, 10, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        preferencesGridLayout->addItem(verticalSpacer_8, 9, 1, 1, 1);

        plasmaThemeRowLayout = new QHBoxLayout();
        plasmaThemeRowLayout->setObjectName("plasmaThemeRowLayout");

        preferencesGridLayout->addLayout(plasmaThemeRowLayout, 20, 1, 1, 1);

        verticalSpacer_11 = new QSpacerItem(20, 10, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        preferencesGridLayout->addItem(verticalSpacer_11, 19, 1, 1, 1);

        metaPressChkBox = new QCheckBox(preferencesScrollAreaWidgetContents);
        metaPressChkBox->setObjectName("metaPressChkBox");

        preferencesGridLayout->addWidget(metaPressChkBox, 7, 1, 1, 1);

        preferencesGridLayout->setColumnStretch(0, 5);
        preferencesGridLayout->setColumnStretch(1, 9);

        verticalLayout_4->addLayout(preferencesGridLayout);

        preferencesScrollArea->setWidget(preferencesScrollAreaWidgetContents);

        horizontalLayout_4->addWidget(preferencesScrollArea);

        tabWidget->addTab(preferencesTab, QString());

        verticalLayout_2->addWidget(tabWidget);

        buttonBox = new QDialogButtonBox(SettingsDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Apply|QDialogButtonBox::Reset|QDialogButtonBox::RestoreDefaults);

        verticalLayout_2->addWidget(buttonBox);


        retranslateUi(SettingsDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, SettingsDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, SettingsDialog, qOverload<>(&QDialog::reject));

        tabWidget->setCurrentIndex(0);
        importButton->setDefault(false);
        exportButton->setDefault(false);


        QMetaObject::connectSlotsByName(SettingsDialog);
    } // setupUi

    void retranslateUi(QDialog *SettingsDialog)
    {
        SettingsDialog->setWindowTitle(tr2i18n("Settings", "latte settings window"));
#if QT_CONFIG(tooltip)
        singleToolBtn->setToolTip(tr2i18n("Only one layout is applied at all times for all activities", nullptr));
#endif // QT_CONFIG(tooltip)
        singleToolBtn->setText(tr2i18n("Single layout at all times", "single layout"));
#if QT_CONFIG(tooltip)
        multipleToolBtn->setToolTip(tr2i18n("Multiple layouts can be present and active in memory at the same time for different activities", nullptr));
#endif // QT_CONFIG(tooltip)
        multipleToolBtn->setText(tr2i18n("Multiple layouts based on activities", "multiple layouts"));
        switchButton->setText(tr2i18n("Switch", nullptr));
        activitiesButton->setText(tr2i18n("Activities...", nullptr));
        newButton->setText(tr2i18n("New", nullptr));
        duplicateButton->setText(tr2i18n("Duplicate", nullptr));
        removeButton->setText(tr2i18n("Remove", nullptr));
        enabledButton->setText(tr2i18n("Enabled", nullptr));
        readOnlyButton->setText(tr2i18n("Read Only", nullptr));
        detailsButton->setText(tr2i18n("Details...", nullptr));
        importButton->setText(tr2i18n("Import...", nullptr));
        exportButton->setText(tr2i18n("Export...", nullptr));
#if QT_CONFIG(shortcut)
        exportButton->setShortcut(tr2i18n("Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        tabWidget->setTabText(tabWidget->indexOf(layoutsTab), tr2i18n("Layouts Editor", nullptr));
#if QT_CONFIG(tooltip)
        infoWindowChkBox->setToolTip(tr2i18n("Provide visual feedback when layouts are activated automatically", nullptr));
#endif // QT_CONFIG(tooltip)
        infoWindowChkBox->setText(tr2i18n("Show informative window for layouts automatic activation", nullptr));
        parabolicEffectLbl->setText(tr2i18n("Parabolic Effect:", nullptr));
        smallParabolicBtn->setText(tr2i18n("Small", "small spread"));
        mediumParabolicBtn->setText(tr2i18n("Medium", "medium spread"));
        largeParabolicBtn->setText(tr2i18n("Large", "large spread"));
        parabolicSpreadLbl->setText(tr2i18n("spread", nullptr));
#if QT_CONFIG(tooltip)
        autostartChkBox->setToolTip(tr2i18n("Start the application automatically after each relogin", nullptr));
#endif // QT_CONFIG(tooltip)
        autostartChkBox->setText(tr2i18n("Enable autostart during startup", nullptr));
#if QT_CONFIG(tooltip)
        metaPressHoldChkBox->setToolTip(tr2i18n("Press and hold \342\214\230 to show shortcuts badges for applets and tasks", nullptr));
#endif // QT_CONFIG(tooltip)
        metaPressHoldChkBox->setText(tr2i18n("Press and Hold \342\214\230 to show shortcuts badges", nullptr));
        badges3DStyleChkBox->setText(tr2i18n("Use 3D style for notification and shortcut badges", nullptr));
        broadcastGeomChkBox->setText(tr2i18n("Inform Plasma desktop for available desktop space", nullptr));
        behaviorLbl->setText(tr2i18n("Behavior:", nullptr));
        contextMenuLbl->setText(tr2i18n("Context Menu:", nullptr));
        actionsLbl->setText(tr2i18n("Actions:", nullptr));
        contextMenuActionsBtn->setText(tr2i18n("Actions...", nullptr));
        screensLbl->setText(tr2i18n("Screens:", nullptr));
#if QT_CONFIG(tooltip)
        screenTrackerSpinBox->setToolTip(tr2i18n("Different hardware can have different delays during screen changes.\n"
"This tracker is used in order to not lose any screen related update.", nullptr));
#endif // QT_CONFIG(tooltip)
        screenTrackerSpinBox->setSpecialValueText(QString());
        screenTrackerSpinBox->setSuffix(tr2i18n(" ms.", nullptr));
#if QT_CONFIG(tooltip)
        trackScreensDelayLbl->setToolTip(tr2i18n("Different hardware can have different delays during screen changes.\n"
"This tracker is used in order to not lose any screen related update.", nullptr));
#endif // QT_CONFIG(tooltip)
        trackScreensDelayLbl->setText(tr2i18n("reaction delay for changes", nullptr));
#if QT_CONFIG(tooltip)
        noBordersForMaximizedChkBox->setToolTip(tr2i18n("Activate support for borderless maximized windows between different layouts", nullptr));
#endif // QT_CONFIG(tooltip)
        noBordersForMaximizedChkBox->setText(tr2i18n("Support borderless maximized windows in different layouts", nullptr));
        appearanceLbl->setText(tr2i18n("Appearance:", nullptr));
#if QT_CONFIG(tooltip)
        metaPressChkBox->setToolTip(tr2i18n("Forward \342\214\230 press from KWin to Latte in order to activate Application Launcher. It is suggested to disable that option if you remove Latte.", nullptr));
#endif // QT_CONFIG(tooltip)
        metaPressChkBox->setText(tr2i18n("Press \342\214\230 to activate Application Launcher", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(preferencesTab), tr2i18n("Preferences", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SettingsDialog: public Ui_SettingsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // SETTINGSDIALOG_H


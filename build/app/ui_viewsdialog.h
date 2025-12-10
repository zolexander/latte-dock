#include <klocalizedstring.h>

/********************************************************************************
** Form generated from reading UI file 'viewsdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWSDIALOG_H
#define UI_VIEWSDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include "settings/generic/layoutscombobox.h"
#include "settings/viewsdialog/viewstableview.h"

QT_BEGIN_NAMESPACE

class Ui_ViewsDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *mainLayout;
    QVBoxLayout *mainRowsLayout;
    QGridLayout *layoutGrid;
    QHBoxLayout *layoutRow;
    QSpacerItem *horizontalSpacer_4;
    QLabel *layoutLbl;
    Latte::Settings::LayoutsComboBox *layoutsCmb;
    QSpacerItem *horizontalSpacer_12;
    QGridLayout *viewsGrid;
    Latte::Settings::View::ViewsTableView *viewsTable;
    QVBoxLayout *buttonsLayout;
    QPushButton *newBtn;
    QPushButton *duplicateBtn;
    QPushButton *removeBtn;
    QSpacerItem *verticalSpacer_2;
    QPushButton *importBtn;
    QPushButton *exportBtn;
    QSpacerItem *verticalSpacer_3;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ViewsDialog)
    {
        if (ViewsDialog->objectName().isEmpty())
            ViewsDialog->setObjectName("ViewsDialog");
        ViewsDialog->resize(980, 630);
        verticalLayout = new QVBoxLayout(ViewsDialog);
        verticalLayout->setObjectName("verticalLayout");
        mainLayout = new QHBoxLayout();
        mainLayout->setObjectName("mainLayout");
        mainRowsLayout = new QVBoxLayout();
        mainRowsLayout->setObjectName("mainRowsLayout");
        layoutGrid = new QGridLayout();
        layoutGrid->setObjectName("layoutGrid");
        layoutRow = new QHBoxLayout();
        layoutRow->setObjectName("layoutRow");
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        layoutRow->addItem(horizontalSpacer_4);

        layoutLbl = new QLabel(ViewsDialog);
        layoutLbl->setObjectName("layoutLbl");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(layoutLbl->sizePolicy().hasHeightForWidth());
        layoutLbl->setSizePolicy(sizePolicy);

        layoutRow->addWidget(layoutLbl);

        layoutsCmb = new Latte::Settings::LayoutsComboBox(ViewsDialog);
        layoutsCmb->setObjectName("layoutsCmb");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(layoutsCmb->sizePolicy().hasHeightForWidth());
        layoutsCmb->setSizePolicy(sizePolicy1);
        layoutsCmb->setMinimumSize(QSize(300, 0));

        layoutRow->addWidget(layoutsCmb);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        layoutRow->addItem(horizontalSpacer_12);


        layoutGrid->addLayout(layoutRow, 0, 0, 1, 1);


        mainRowsLayout->addLayout(layoutGrid);

        viewsGrid = new QGridLayout();
        viewsGrid->setObjectName("viewsGrid");
        viewsGrid->setHorizontalSpacing(6);
        viewsTable = new Latte::Settings::View::ViewsTableView(ViewsDialog);
        viewsTable->setObjectName("viewsTable");
        viewsTable->setContextMenuPolicy(Qt::ActionsContextMenu);
        viewsTable->setAlternatingRowColors(true);
        viewsTable->setSelectionMode(QAbstractItemView::ExtendedSelection);
        viewsTable->setSelectionBehavior(QAbstractItemView::SelectRows);
        viewsTable->setShowGrid(true);
        viewsTable->horizontalHeader()->setVisible(true);
        viewsTable->horizontalHeader()->setCascadingSectionResizes(true);
        viewsTable->horizontalHeader()->setHighlightSections(false);
        viewsTable->horizontalHeader()->setProperty("showSortIndicator", QVariant(true));
        viewsTable->verticalHeader()->setVisible(false);
        viewsTable->verticalHeader()->setHighlightSections(false);

        viewsGrid->addWidget(viewsTable, 1, 0, 1, 1);

        buttonsLayout = new QVBoxLayout();
        buttonsLayout->setObjectName("buttonsLayout");
        buttonsLayout->setContentsMargins(0, -1, 0, -1);
        newBtn = new QPushButton(ViewsDialog);
        newBtn->setObjectName("newBtn");
        newBtn->setText(QString::fromUtf8("New"));
        QIcon icon;
        QString iconThemeName = QString::fromUtf8("add");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon = QIcon::fromTheme(iconThemeName);
        } else {
            icon.addFile(QString::fromUtf8("."), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        }
        newBtn->setIcon(icon);

        buttonsLayout->addWidget(newBtn);

        duplicateBtn = new QPushButton(ViewsDialog);
        duplicateBtn->setObjectName("duplicateBtn");
        QIcon icon1;
        iconThemeName = QString::fromUtf8("edit-copy");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon1 = QIcon::fromTheme(iconThemeName);
        } else {
            icon1.addFile(QString::fromUtf8("."), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        }
        duplicateBtn->setIcon(icon1);

        buttonsLayout->addWidget(duplicateBtn);

        removeBtn = new QPushButton(ViewsDialog);
        removeBtn->setObjectName("removeBtn");
        removeBtn->setText(QString::fromUtf8("Remove"));
        QIcon icon2;
        iconThemeName = QString::fromUtf8("delete");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon2 = QIcon::fromTheme(iconThemeName);
        } else {
            icon2.addFile(QString::fromUtf8("."), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        }
        removeBtn->setIcon(icon2);

        buttonsLayout->addWidget(removeBtn);

        verticalSpacer_2 = new QSpacerItem(20, 10, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::MinimumExpanding);

        buttonsLayout->addItem(verticalSpacer_2);

        importBtn = new QPushButton(ViewsDialog);
        importBtn->setObjectName("importBtn");
        importBtn->setText(QString::fromUtf8("Import..."));
        QIcon icon3;
        iconThemeName = QString::fromUtf8("document-import");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon3 = QIcon::fromTheme(iconThemeName);
        } else {
            icon3.addFile(QString::fromUtf8("."), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        }
        importBtn->setIcon(icon3);

        buttonsLayout->addWidget(importBtn);

        exportBtn = new QPushButton(ViewsDialog);
        exportBtn->setObjectName("exportBtn");
        exportBtn->setText(QString::fromUtf8("Export..."));
        QIcon icon4;
        iconThemeName = QString::fromUtf8("document-export");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon4 = QIcon::fromTheme(iconThemeName);
        } else {
            icon4.addFile(QString::fromUtf8("."), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        }
        exportBtn->setIcon(icon4);

        buttonsLayout->addWidget(exportBtn);

        verticalSpacer_3 = new QSpacerItem(20, 15, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        buttonsLayout->addItem(verticalSpacer_3);


        viewsGrid->addLayout(buttonsLayout, 1, 2, 1, 1);


        mainRowsLayout->addLayout(viewsGrid);


        mainLayout->addLayout(mainRowsLayout);


        verticalLayout->addLayout(mainLayout);

        buttonBox = new QDialogButtonBox(ViewsDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Reset);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(ViewsDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, ViewsDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, ViewsDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(ViewsDialog);
    } // setupUi

    void retranslateUi(QDialog *ViewsDialog)
    {
        ViewsDialog->setWindowTitle(tr2i18n("Docks/Panels", nullptr));
        layoutLbl->setText(tr2i18n("Layout:", nullptr));
        duplicateBtn->setText(tr2i18n("Duplicate", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ViewsDialog: public Ui_ViewsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // VIEWSDIALOG_H


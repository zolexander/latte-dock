#include <klocalizedstring.h>

/********************************************************************************
** Form generated from reading UI file 'screensdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCREENSDIALOG_H
#define UI_SCREENSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ScreensDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *optionsLayout;
    QVBoxLayout *verticalLayout_2;
    QTableView *screensTable;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *deselectAllBtn;
    QLabel *noteLbl;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ScreensDialog)
    {
        if (ScreensDialog->objectName().isEmpty())
            ScreensDialog->setObjectName("ScreensDialog");
        ScreensDialog->resize(561, 615);
        verticalLayout = new QVBoxLayout(ScreensDialog);
        verticalLayout->setObjectName("verticalLayout");
        optionsLayout = new QHBoxLayout();
        optionsLayout->setObjectName("optionsLayout");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        screensTable = new QTableView(ScreensDialog);
        screensTable->setObjectName("screensTable");
        screensTable->setSelectionMode(QAbstractItemView::SingleSelection);
        screensTable->horizontalHeader()->setHighlightSections(false);
        screensTable->horizontalHeader()->setStretchLastSection(true);
        screensTable->verticalHeader()->setVisible(false);
        screensTable->verticalHeader()->setHighlightSections(false);

        verticalLayout_2->addWidget(screensTable);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        deselectAllBtn = new QPushButton(ScreensDialog);
        deselectAllBtn->setObjectName("deselectAllBtn");

        horizontalLayout->addWidget(deselectAllBtn);


        verticalLayout_2->addLayout(horizontalLayout);

        noteLbl = new QLabel(ScreensDialog);
        noteLbl->setObjectName("noteLbl");
        noteLbl->setAlignment(Qt::AlignJustify|Qt::AlignVCenter);
        noteLbl->setWordWrap(true);

        verticalLayout_2->addWidget(noteLbl);

        verticalSpacer = new QSpacerItem(20, 15, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_2->addItem(verticalSpacer);


        optionsLayout->addLayout(verticalLayout_2);


        verticalLayout->addLayout(optionsLayout);

        buttonBox = new QDialogButtonBox(ScreensDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(ScreensDialog);

        QMetaObject::connectSlotsByName(ScreensDialog);
    } // setupUi

    void retranslateUi(QDialog *ScreensDialog)
    {
        ScreensDialog->setWindowTitle(tr2i18n("Screens", nullptr));
        deselectAllBtn->setText(tr2i18n("Deselect All", nullptr));
        noteLbl->setText(tr2i18n("<b>Select only</b> screens that are obsolete and you would like to remove their reference. Active screens or screens used in your layouts can not be removed.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ScreensDialog: public Ui_ScreensDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // SCREENSDIALOG_H


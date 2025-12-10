#include <klocalizedstring.h>

/********************************************************************************
** Form generated from reading UI file 'detailsdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DETAILSDIALOG_H
#define UI_DETAILSDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include "settings/detailsdialog/patternwidget.h"
#include "settings/detailsdialog/schemescombobox.h"
#include "settings/generic/layoutscombobox.h"

QT_BEGIN_NAMESPACE

class Ui_DetailsDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *optionsLayout;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_2;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_5;
    QLabel *behaviorLbl;
    QCheckBox *borderlessChk;
    QHBoxLayout *backgroundOptLayout;
    Latte::Settings::Widget::PatternWidget *backPatternWidget;
    QSpacerItem *horizontalSpacer_7;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_3;
    QLabel *iconLbl;
    QHBoxLayout *horizontalLayout_9;
    Latte::Settings::LayoutsComboBox *layoutsCmb;
    QSpacerItem *horizontalSpacer_12;
    QCheckBox *inMenuChk;
    QSpacerItem *verticalSpacer_6;
    QHBoxLayout *horizontalLayout_8;
    QLabel *popUpMarginLbl;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *backgroundBtn;
    QPushButton *textColorBtn;
    QPushButton *patternClearBtn;
    QSpacerItem *horizontalSpacer_9;
    QSpacerItem *verticalSpacer_8;
    QLabel *behaviorSecRowLbl;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout;
    QComboBox *colorsCmb;
    QSpacerItem *horizontalSpacer_10;
    QHBoxLayout *horizontalLayout_11;
    Latte::Settings::SchemesComboBox *customSchemeCmb;
    QSpacerItem *horizontalSpacer_15;
    QRadioButton *backRadioBtn;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_11;
    QLabel *layoutLbl;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_4;
    QLabel *backgroundLbl;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *verticalSpacer_5;
    QRadioButton *colorRadioBtn;
    QHBoxLayout *horizontalLayout_10;
    QSpinBox *popUpMarginSpinBox;
    QSpacerItem *horizontalSpacer_14;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *colorsOptLayout;
    Latte::Settings::Widget::PatternWidget *colorPatternWidget;
    QSpacerItem *horizontalSpacer_6;
    QHBoxLayout *iconHorLayout;
    QPushButton *iconBtn;
    QPushButton *iconClearBtn;
    QSpacerItem *horizontalSpacer_8;
    QLabel *backSecondRowLbl;
    QHBoxLayout *horizontalLayout_13;
    QSpacerItem *horizontalSpacer_13;
    QLabel *customSchemeLbl;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_2;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *DetailsDialog)
    {
        if (DetailsDialog->objectName().isEmpty())
            DetailsDialog->setObjectName("DetailsDialog");
        DetailsDialog->resize(582, 646);
        verticalLayout = new QVBoxLayout(DetailsDialog);
        verticalLayout->setObjectName("verticalLayout");
        optionsLayout = new QHBoxLayout();
        optionsLayout->setObjectName("optionsLayout");
        horizontalSpacer = new QSpacerItem(15, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        optionsLayout->addItem(horizontalSpacer);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_5);

        behaviorLbl = new QLabel(DetailsDialog);
        behaviorLbl->setObjectName("behaviorLbl");

        horizontalLayout_5->addWidget(behaviorLbl);


        gridLayout->addLayout(horizontalLayout_5, 19, 0, 1, 1);

        borderlessChk = new QCheckBox(DetailsDialog);
        borderlessChk->setObjectName("borderlessChk");

        gridLayout->addWidget(borderlessChk, 20, 1, 1, 2);

        backgroundOptLayout = new QHBoxLayout();
        backgroundOptLayout->setObjectName("backgroundOptLayout");
        backPatternWidget = new Latte::Settings::Widget::PatternWidget(DetailsDialog);
        backPatternWidget->setObjectName("backPatternWidget");
        backPatternWidget->setMinimumSize(QSize(358, 60));

        backgroundOptLayout->addWidget(backPatternWidget);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        backgroundOptLayout->addItem(horizontalSpacer_7);


        gridLayout->addLayout(backgroundOptLayout, 12, 2, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        iconLbl = new QLabel(DetailsDialog);
        iconLbl->setObjectName("iconLbl");

        horizontalLayout_3->addWidget(iconLbl);


        gridLayout->addLayout(horizontalLayout_3, 3, 0, 1, 1);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        layoutsCmb = new Latte::Settings::LayoutsComboBox(DetailsDialog);
        layoutsCmb->setObjectName("layoutsCmb");
        layoutsCmb->setMinimumSize(QSize(358, 0));

        horizontalLayout_9->addWidget(layoutsCmb);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_12);


        gridLayout->addLayout(horizontalLayout_9, 1, 2, 1, 1);

        inMenuChk = new QCheckBox(DetailsDialog);
        inMenuChk->setObjectName("inMenuChk");
        inMenuChk->setMaximumSize(QSize(16777215, 16777215));

        gridLayout->addWidget(inMenuChk, 19, 1, 1, 2);

        verticalSpacer_6 = new QSpacerItem(15, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        gridLayout->addItem(verticalSpacer_6, 2, 2, 1, 1);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        popUpMarginLbl = new QLabel(DetailsDialog);
        popUpMarginLbl->setObjectName("popUpMarginLbl");

        horizontalLayout_8->addWidget(popUpMarginLbl);


        gridLayout->addLayout(horizontalLayout_8, 15, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        backgroundBtn = new QPushButton(DetailsDialog);
        backgroundBtn->setObjectName("backgroundBtn");
        backgroundBtn->setMinimumSize(QSize(157, 0));

        horizontalLayout_6->addWidget(backgroundBtn);

        textColorBtn = new QPushButton(DetailsDialog);
        textColorBtn->setObjectName("textColorBtn");
        textColorBtn->setMinimumSize(QSize(157, 0));

        horizontalLayout_6->addWidget(textColorBtn);

        patternClearBtn = new QPushButton(DetailsDialog);
        patternClearBtn->setObjectName("patternClearBtn");
        patternClearBtn->setMinimumSize(QSize(30, 5));
        patternClearBtn->setMaximumSize(QSize(30, 16777215));
        QIcon icon;
        QString iconThemeName = QString::fromUtf8("edit-clear");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon = QIcon::fromTheme(iconThemeName);
        } else {
            icon.addFile(QString::fromUtf8("."), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        }
        patternClearBtn->setIcon(icon);

        horizontalLayout_6->addWidget(patternClearBtn);


        horizontalLayout_2->addLayout(horizontalLayout_6);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_9);


        gridLayout->addLayout(horizontalLayout_2, 13, 2, 1, 1);

        verticalSpacer_8 = new QSpacerItem(15, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        gridLayout->addItem(verticalSpacer_8, 6, 2, 1, 1);

        behaviorSecRowLbl = new QLabel(DetailsDialog);
        behaviorSecRowLbl->setObjectName("behaviorSecRowLbl");
        behaviorSecRowLbl->setText(QString::fromUtf8(""));

        gridLayout->addWidget(behaviorSecRowLbl, 20, 0, 1, 1);

        verticalSpacer_3 = new QSpacerItem(15, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        gridLayout->addItem(verticalSpacer_3, 4, 2, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        colorsCmb = new QComboBox(DetailsDialog);
        colorsCmb->setObjectName("colorsCmb");
        colorsCmb->setMinimumSize(QSize(358, 0));

        horizontalLayout->addWidget(colorsCmb);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_10);


        gridLayout->addLayout(horizontalLayout, 9, 2, 1, 1);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        customSchemeCmb = new Latte::Settings::SchemesComboBox(DetailsDialog);
        customSchemeCmb->setObjectName("customSchemeCmb");
        customSchemeCmb->setMinimumSize(QSize(358, 0));

        horizontalLayout_11->addWidget(customSchemeCmb);

        horizontalSpacer_15 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_15);


        gridLayout->addLayout(horizontalLayout_11, 5, 2, 1, 1);

        backRadioBtn = new QRadioButton(DetailsDialog);
        backRadioBtn->setObjectName("backRadioBtn");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(backRadioBtn->sizePolicy().hasHeightForWidth());
        backRadioBtn->setSizePolicy(sizePolicy);
        backRadioBtn->setMaximumSize(QSize(20, 20));
        backRadioBtn->setText(QString::fromUtf8(""));

        gridLayout->addWidget(backRadioBtn, 12, 1, 1, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_11);

        layoutLbl = new QLabel(DetailsDialog);
        layoutLbl->setObjectName("layoutLbl");

        horizontalLayout_7->addWidget(layoutLbl);


        gridLayout->addLayout(horizontalLayout_7, 1, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);

        backgroundLbl = new QLabel(DetailsDialog);
        backgroundLbl->setObjectName("backgroundLbl");
        backgroundLbl->setMinimumSize(QSize(0, 0));

        horizontalLayout_4->addWidget(backgroundLbl);


        gridLayout->addLayout(horizontalLayout_4, 7, 0, 1, 1);

        verticalSpacer_4 = new QSpacerItem(15, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        gridLayout->addItem(verticalSpacer_4, 14, 2, 1, 1);

        verticalSpacer_5 = new QSpacerItem(20, 10, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        gridLayout->addItem(verticalSpacer_5, 10, 2, 1, 1);

        colorRadioBtn = new QRadioButton(DetailsDialog);
        colorRadioBtn->setObjectName("colorRadioBtn");
        sizePolicy.setHeightForWidth(colorRadioBtn->sizePolicy().hasHeightForWidth());
        colorRadioBtn->setSizePolicy(sizePolicy);
        colorRadioBtn->setMinimumSize(QSize(0, 0));
        colorRadioBtn->setMaximumSize(QSize(20, 20));
        colorRadioBtn->setText(QString::fromUtf8(""));

        gridLayout->addWidget(colorRadioBtn, 7, 1, 1, 1);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        popUpMarginSpinBox = new QSpinBox(DetailsDialog);
        popUpMarginSpinBox->setObjectName("popUpMarginSpinBox");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(popUpMarginSpinBox->sizePolicy().hasHeightForWidth());
        popUpMarginSpinBox->setSizePolicy(sizePolicy1);
        popUpMarginSpinBox->setMinimumSize(QSize(85, 0));
        popUpMarginSpinBox->setMaximumSize(QSize(16777215, 16777215));
        popUpMarginSpinBox->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        popUpMarginSpinBox->setMinimum(-1);
        popUpMarginSpinBox->setMaximum(50);
        popUpMarginSpinBox->setValue(-1);

        horizontalLayout_10->addWidget(popUpMarginSpinBox);

        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_14);


        gridLayout->addLayout(horizontalLayout_10, 15, 2, 1, 1);

        verticalSpacer = new QSpacerItem(15, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        gridLayout->addItem(verticalSpacer, 17, 2, 1, 1);

        colorsOptLayout = new QHBoxLayout();
        colorsOptLayout->setObjectName("colorsOptLayout");
        colorPatternWidget = new Latte::Settings::Widget::PatternWidget(DetailsDialog);
        colorPatternWidget->setObjectName("colorPatternWidget");
        colorPatternWidget->setMinimumSize(QSize(358, 60));

        colorsOptLayout->addWidget(colorPatternWidget);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        colorsOptLayout->addItem(horizontalSpacer_6);


        gridLayout->addLayout(colorsOptLayout, 7, 2, 1, 1);

        iconHorLayout = new QHBoxLayout();
        iconHorLayout->setObjectName("iconHorLayout");
        iconBtn = new QPushButton(DetailsDialog);
        iconBtn->setObjectName("iconBtn");
        iconBtn->setMinimumSize(QSize(40, 40));
        iconBtn->setMaximumSize(QSize(40, 40));
        iconBtn->setText(QString::fromUtf8(""));
        QIcon icon1;
        iconThemeName = QString::fromUtf8("add");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon1 = QIcon::fromTheme(iconThemeName);
        } else {
            icon1.addFile(QString::fromUtf8("."), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        }
        iconBtn->setIcon(icon1);
        iconBtn->setIconSize(QSize(32, 32));

        iconHorLayout->addWidget(iconBtn);

        iconClearBtn = new QPushButton(DetailsDialog);
        iconClearBtn->setObjectName("iconClearBtn");
        iconClearBtn->setMinimumSize(QSize(0, 0));
        iconClearBtn->setMaximumSize(QSize(30, 50));
        iconClearBtn->setText(QString::fromUtf8(""));
        iconClearBtn->setIcon(icon);

        iconHorLayout->addWidget(iconClearBtn);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        iconHorLayout->addItem(horizontalSpacer_8);


        gridLayout->addLayout(iconHorLayout, 3, 2, 1, 1);

        backSecondRowLbl = new QLabel(DetailsDialog);
        backSecondRowLbl->setObjectName("backSecondRowLbl");
        backSecondRowLbl->setText(QString::fromUtf8(""));

        gridLayout->addWidget(backSecondRowLbl, 12, 0, 1, 1);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName("horizontalLayout_13");
        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_13);

        customSchemeLbl = new QLabel(DetailsDialog);
        customSchemeLbl->setObjectName("customSchemeLbl");

        horizontalLayout_13->addWidget(customSchemeLbl);


        gridLayout->addLayout(horizontalLayout_13, 5, 0, 1, 1);

        gridLayout->setColumnStretch(0, 5);

        verticalLayout_2->addLayout(gridLayout);


        optionsLayout->addLayout(verticalLayout_2);

        horizontalSpacer_2 = new QSpacerItem(15, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        optionsLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(optionsLayout);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        buttonBox = new QDialogButtonBox(DetailsDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok|QDialogButtonBox::Reset);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(DetailsDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, DetailsDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, DetailsDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(DetailsDialog);
    } // setupUi

    void retranslateUi(QDialog *DetailsDialog)
    {
        DetailsDialog->setWindowTitle(tr2i18n("Details", nullptr));
        behaviorLbl->setText(tr2i18n("Behavior:", nullptr));
        borderlessChk->setText(tr2i18n("Hide window borders for maximized windows", nullptr));
        iconLbl->setText(tr2i18n("Icon:", nullptr));
        inMenuChk->setText(tr2i18n("Show in layouts context menu when possible", nullptr));
        popUpMarginLbl->setText(tr2i18n("PopUp Margin:", nullptr));
        backgroundBtn->setText(tr2i18n("Background...", nullptr));
        textColorBtn->setText(tr2i18n("Text Color...", nullptr));
        patternClearBtn->setText(QString());
        layoutLbl->setText(tr2i18n("Layout:", nullptr));
        backgroundLbl->setText(tr2i18n("Background:", nullptr));
        popUpMarginSpinBox->setSpecialValueText(tr2i18n("disabled", nullptr));
        popUpMarginSpinBox->setSuffix(tr2i18n(" px.", nullptr));
        popUpMarginSpinBox->setPrefix(QString());
        customSchemeLbl->setText(tr2i18n("Custom Colors:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DetailsDialog: public Ui_DetailsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // DETAILSDIALOG_H


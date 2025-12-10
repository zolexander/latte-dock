#include <klocalizedstring.h>

/********************************************************************************
** Form generated from reading UI file 'actionsdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACTIONSDIALOG_H
#define UI_ACTIONSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QVBoxLayout>
#include "kactionselector.h"

QT_BEGIN_NAMESPACE

class Ui_ActionsDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *optionsLayout;
    QVBoxLayout *verticalLayout_2;
    KActionSelector *actionsSelector;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ActionsDialog)
    {
        if (ActionsDialog->objectName().isEmpty())
            ActionsDialog->setObjectName("ActionsDialog");
        ActionsDialog->resize(835, 518);
        verticalLayout = new QVBoxLayout(ActionsDialog);
        verticalLayout->setObjectName("verticalLayout");
        optionsLayout = new QHBoxLayout();
        optionsLayout->setObjectName("optionsLayout");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        actionsSelector = new KActionSelector(ActionsDialog);
        actionsSelector->setObjectName("actionsSelector");
        actionsSelector->setSelectedInsertionPolicy(KActionSelector::Sorted);
        actionsSelector->setShowUpDownButtons(false);

        verticalLayout_2->addWidget(actionsSelector);


        optionsLayout->addLayout(verticalLayout_2);


        verticalLayout->addLayout(optionsLayout);

        buttonBox = new QDialogButtonBox(ActionsDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok|QDialogButtonBox::Reset|QDialogButtonBox::RestoreDefaults);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(ActionsDialog);

        QMetaObject::connectSlotsByName(ActionsDialog);
    } // setupUi

    void retranslateUi(QDialog *ActionsDialog)
    {
        ActionsDialog->setWindowTitle(tr2i18n("Context Menu Actions", nullptr));
        actionsSelector->setAvailableLabel(tr2i18n("Accessible only in edit mode:", "actions shown only in edit mode"));
        actionsSelector->setSelectedLabel(tr2i18n("Accessible always:", "actions shown always"));
    } // retranslateUi

};

namespace Ui {
    class ActionsDialog: public Ui_ActionsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // ACTIONSDIALOG_H


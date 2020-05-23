/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "Interface/enginewidget.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionSave_as;
    QAction *actionExit;
    QAction *actionTheme;
    QAction *actionLanguage;
    QAction *actionHow_To;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    EngineWidget *m_engine;
    QWidget *widget_2;
    QGridLayout *gridLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *m_play_button;
    QPushButton *m_pause_button;
    QPushButton *m_speed_button;
    QPushButton *m_edit_button;
    QGroupBox *m_additional_group_box;
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout_10;
    QLabel *m_scale_label;
    QSlider *horizontalSlider;
    QCheckBox *m_show_grid;
    QCheckBox *m_show_electro_static_field;
    QLabel *m_camera_change_label;
    QComboBox *m_camera_change;
    QLabel *m_schange_scene_label;
    QComboBox *m_change_scene;
    QHBoxLayout *horizontalLayout_2;
    QGroupBox *m_charges_group_box;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout_2;
    QPushButton *m_add_charge_button;
    QPushButton *m_ignore_charges;
    QPushButton *m_edit_charges;
    QPushButton *m_rm_charge;
    QTabWidget *m_tab_widget;
    QWidget *tab;
    QGridLayout *gridLayout_5;
    QHBoxLayout *horizontalLayout_6;
    QVBoxLayout *verticalLayout_5;
    QCheckBox *m_use_cursor_pos_info;
    QGroupBox *m_position_group_box;
    QGridLayout *gridLayout_6;
    QGridLayout *gridLayout_7;
    QLabel *m_pos_x_info_label;
    QLabel *m_pos_y_info_label;
    QLineEdit *m_pos_y_info_edit;
    QLineEdit *m_pos_x_info_edit;
    QComboBox *m_pos_x_info_box;
    QComboBox *m_pos_y_info_box;
    QGroupBox *m_info_group_box;
    QGridLayout *gridLayout_9;
    QGridLayout *gridLayout_8;
    QComboBox *m_tension_y_label_box;
    QLabel *m_tension_y_label;
    QLabel *m_potential_label_val;
    QLabel *m_tension_x_label;
    QLabel *m_tension_y_label_val;
    QLabel *m_tension_x_label_val;
    QComboBox *m_potential_label_box;
    QLabel *m_tension_val_label_val;
    QComboBox *m_tension_val_label_box;
    QComboBox *m_tension_x_label_box;
    QLabel *m_potential_label;
    QLabel *m_tension_val_label;
    QLabel *m_energy_val_label;
    QLabel *m_energy_val_label_val;
    QComboBox *m_energy_val_label_box;
    QWidget *tab_2;
    QHBoxLayout *horizontalLayout_9;
    QHBoxLayout *horizontalLayout_8;
    QHBoxLayout *horizontalLayout_7;
    QVBoxLayout *verticalLayout_6;
    QCheckBox *m_use_cursor_start;
    QGroupBox *m_start_group_box;
    QGridLayout *gridLayout_11;
    QGridLayout *gridLayout_12;
    QLabel *m_pos_x_start_label;
    QLabel *m_pos_y_start_label;
    QLineEdit *m_pos_y_start_edit;
    QLineEdit *m_pos_x_start_edit;
    QComboBox *m_pos_x_start_box;
    QComboBox *m_pos_y_start_box;
    QVBoxLayout *verticalLayout_7;
    QCheckBox *m_use_cursor_dest;
    QGroupBox *m_dest_group_box;
    QGridLayout *gridLayout_13;
    QGridLayout *gridLayout_14;
    QLabel *m_pos_x_dest_label;
    QLabel *m_pos_y_dest_label;
    QLineEdit *m_pos_y_dest_edit;
    QLineEdit *m_pos_x_dest_edit;
    QComboBox *m_pos_x_dest_box;
    QComboBox *m_pos_y_dest_box;
    QGridLayout *gridLayout_15;
    QLineEdit *m_work_charge_edit;
    QComboBox *m_work_charge_box;
    QComboBox *m_work_box;
    QLabel *m_work_label;
    QLabel *m_work_charge_label;
    QLabel *m_work_label_val;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_2;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuOptions;
    QMenu *menuHelp;
    QMenu *menuCredits;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1172, 638);
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        actionSave_as = new QAction(MainWindow);
        actionSave_as->setObjectName(QString::fromUtf8("actionSave_as"));
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        actionTheme = new QAction(MainWindow);
        actionTheme->setObjectName(QString::fromUtf8("actionTheme"));
        actionLanguage = new QAction(MainWindow);
        actionLanguage->setObjectName(QString::fromUtf8("actionLanguage"));
        actionHow_To = new QAction(MainWindow);
        actionHow_To->setObjectName(QString::fromUtf8("actionHow_To"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        m_engine = new EngineWidget(centralwidget);
        m_engine->setObjectName(QString::fromUtf8("m_engine"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(m_engine->sizePolicy().hasHeightForWidth());
        m_engine->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(m_engine);

        widget_2 = new QWidget(centralwidget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(widget_2->sizePolicy().hasHeightForWidth());
        widget_2->setSizePolicy(sizePolicy1);
        widget_2->setMaximumSize(QSize(600, 600));
        gridLayout_4 = new QGridLayout(widget_2);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        m_play_button = new QPushButton(widget_2);
        m_play_button->setObjectName(QString::fromUtf8("m_play_button"));

        horizontalLayout_3->addWidget(m_play_button);

        m_pause_button = new QPushButton(widget_2);
        m_pause_button->setObjectName(QString::fromUtf8("m_pause_button"));

        horizontalLayout_3->addWidget(m_pause_button);

        m_speed_button = new QPushButton(widget_2);
        m_speed_button->setObjectName(QString::fromUtf8("m_speed_button"));

        horizontalLayout_3->addWidget(m_speed_button);

        m_edit_button = new QPushButton(widget_2);
        m_edit_button->setObjectName(QString::fromUtf8("m_edit_button"));

        horizontalLayout_3->addWidget(m_edit_button);


        gridLayout_4->addLayout(horizontalLayout_3, 2, 0, 1, 1);

        m_additional_group_box = new QGroupBox(widget_2);
        m_additional_group_box->setObjectName(QString::fromUtf8("m_additional_group_box"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(m_additional_group_box->sizePolicy().hasHeightForWidth());
        m_additional_group_box->setSizePolicy(sizePolicy2);
        m_additional_group_box->setMaximumSize(QSize(16777215, 100));
        gridLayout_3 = new QGridLayout(m_additional_group_box);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_10 = new QGridLayout();
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        m_scale_label = new QLabel(m_additional_group_box);
        m_scale_label->setObjectName(QString::fromUtf8("m_scale_label"));

        gridLayout_10->addWidget(m_scale_label, 0, 0, 1, 1);

        horizontalSlider = new QSlider(m_additional_group_box);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(horizontalSlider->sizePolicy().hasHeightForWidth());
        horizontalSlider->setSizePolicy(sizePolicy3);
        horizontalSlider->setOrientation(Qt::Horizontal);

        gridLayout_10->addWidget(horizontalSlider, 0, 1, 1, 1);

        m_show_grid = new QCheckBox(m_additional_group_box);
        m_show_grid->setObjectName(QString::fromUtf8("m_show_grid"));

        gridLayout_10->addWidget(m_show_grid, 0, 2, 1, 1);

        m_show_electro_static_field = new QCheckBox(m_additional_group_box);
        m_show_electro_static_field->setObjectName(QString::fromUtf8("m_show_electro_static_field"));

        gridLayout_10->addWidget(m_show_electro_static_field, 0, 3, 1, 1);

        m_camera_change_label = new QLabel(m_additional_group_box);
        m_camera_change_label->setObjectName(QString::fromUtf8("m_camera_change_label"));

        gridLayout_10->addWidget(m_camera_change_label, 1, 0, 1, 1);

        m_camera_change = new QComboBox(m_additional_group_box);
        m_camera_change->setObjectName(QString::fromUtf8("m_camera_change"));

        gridLayout_10->addWidget(m_camera_change, 1, 1, 1, 1);

        m_schange_scene_label = new QLabel(m_additional_group_box);
        m_schange_scene_label->setObjectName(QString::fromUtf8("m_schange_scene_label"));

        gridLayout_10->addWidget(m_schange_scene_label, 1, 2, 1, 1);

        m_change_scene = new QComboBox(m_additional_group_box);
        m_change_scene->setObjectName(QString::fromUtf8("m_change_scene"));

        gridLayout_10->addWidget(m_change_scene, 1, 3, 1, 1);


        gridLayout_3->addLayout(gridLayout_10, 0, 0, 1, 1);


        gridLayout_4->addWidget(m_additional_group_box, 3, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        m_charges_group_box = new QGroupBox(widget_2);
        m_charges_group_box->setObjectName(QString::fromUtf8("m_charges_group_box"));
        m_charges_group_box->setMaximumSize(QSize(16777215, 175));
        gridLayout_2 = new QGridLayout(m_charges_group_box);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        m_add_charge_button = new QPushButton(m_charges_group_box);
        m_add_charge_button->setObjectName(QString::fromUtf8("m_add_charge_button"));

        verticalLayout_2->addWidget(m_add_charge_button);

        m_ignore_charges = new QPushButton(m_charges_group_box);
        m_ignore_charges->setObjectName(QString::fromUtf8("m_ignore_charges"));

        verticalLayout_2->addWidget(m_ignore_charges);

        m_edit_charges = new QPushButton(m_charges_group_box);
        m_edit_charges->setObjectName(QString::fromUtf8("m_edit_charges"));

        verticalLayout_2->addWidget(m_edit_charges);

        m_rm_charge = new QPushButton(m_charges_group_box);
        m_rm_charge->setObjectName(QString::fromUtf8("m_rm_charge"));

        verticalLayout_2->addWidget(m_rm_charge);


        gridLayout_2->addLayout(verticalLayout_2, 0, 0, 1, 1);


        horizontalLayout_2->addWidget(m_charges_group_box);


        gridLayout_4->addLayout(horizontalLayout_2, 0, 0, 1, 1);

        m_tab_widget = new QTabWidget(widget_2);
        m_tab_widget->setObjectName(QString::fromUtf8("m_tab_widget"));
        sizePolicy2.setHeightForWidth(m_tab_widget->sizePolicy().hasHeightForWidth());
        m_tab_widget->setSizePolicy(sizePolicy2);
        m_tab_widget->setMaximumSize(QSize(16777215, 220));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        gridLayout_5 = new QGridLayout(tab);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        m_use_cursor_pos_info = new QCheckBox(tab);
        m_use_cursor_pos_info->setObjectName(QString::fromUtf8("m_use_cursor_pos_info"));

        verticalLayout_5->addWidget(m_use_cursor_pos_info);

        m_position_group_box = new QGroupBox(tab);
        m_position_group_box->setObjectName(QString::fromUtf8("m_position_group_box"));
        QSizePolicy sizePolicy4(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(m_position_group_box->sizePolicy().hasHeightForWidth());
        m_position_group_box->setSizePolicy(sizePolicy4);
        gridLayout_6 = new QGridLayout(m_position_group_box);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gridLayout_7 = new QGridLayout();
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        m_pos_x_info_label = new QLabel(m_position_group_box);
        m_pos_x_info_label->setObjectName(QString::fromUtf8("m_pos_x_info_label"));

        gridLayout_7->addWidget(m_pos_x_info_label, 0, 0, 1, 1);

        m_pos_y_info_label = new QLabel(m_position_group_box);
        m_pos_y_info_label->setObjectName(QString::fromUtf8("m_pos_y_info_label"));

        gridLayout_7->addWidget(m_pos_y_info_label, 1, 0, 1, 1);

        m_pos_y_info_edit = new QLineEdit(m_position_group_box);
        m_pos_y_info_edit->setObjectName(QString::fromUtf8("m_pos_y_info_edit"));

        gridLayout_7->addWidget(m_pos_y_info_edit, 1, 1, 1, 1);

        m_pos_x_info_edit = new QLineEdit(m_position_group_box);
        m_pos_x_info_edit->setObjectName(QString::fromUtf8("m_pos_x_info_edit"));

        gridLayout_7->addWidget(m_pos_x_info_edit, 0, 1, 1, 1);

        m_pos_x_info_box = new QComboBox(m_position_group_box);
        m_pos_x_info_box->setObjectName(QString::fromUtf8("m_pos_x_info_box"));

        gridLayout_7->addWidget(m_pos_x_info_box, 0, 2, 1, 1);

        m_pos_y_info_box = new QComboBox(m_position_group_box);
        m_pos_y_info_box->setObjectName(QString::fromUtf8("m_pos_y_info_box"));

        gridLayout_7->addWidget(m_pos_y_info_box, 1, 2, 1, 1);


        gridLayout_6->addLayout(gridLayout_7, 0, 0, 1, 1);


        verticalLayout_5->addWidget(m_position_group_box);


        horizontalLayout_6->addLayout(verticalLayout_5);

        m_info_group_box = new QGroupBox(tab);
        m_info_group_box->setObjectName(QString::fromUtf8("m_info_group_box"));
        m_info_group_box->setCheckable(false);
        m_info_group_box->setChecked(false);
        gridLayout_9 = new QGridLayout(m_info_group_box);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        gridLayout_8 = new QGridLayout();
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        m_tension_y_label_box = new QComboBox(m_info_group_box);
        m_tension_y_label_box->setObjectName(QString::fromUtf8("m_tension_y_label_box"));

        gridLayout_8->addWidget(m_tension_y_label_box, 2, 2, 1, 1);

        m_tension_y_label = new QLabel(m_info_group_box);
        m_tension_y_label->setObjectName(QString::fromUtf8("m_tension_y_label"));

        gridLayout_8->addWidget(m_tension_y_label, 2, 0, 1, 1);

        m_potential_label_val = new QLabel(m_info_group_box);
        m_potential_label_val->setObjectName(QString::fromUtf8("m_potential_label_val"));

        gridLayout_8->addWidget(m_potential_label_val, 3, 1, 1, 1);

        m_tension_x_label = new QLabel(m_info_group_box);
        m_tension_x_label->setObjectName(QString::fromUtf8("m_tension_x_label"));

        gridLayout_8->addWidget(m_tension_x_label, 1, 0, 1, 1);

        m_tension_y_label_val = new QLabel(m_info_group_box);
        m_tension_y_label_val->setObjectName(QString::fromUtf8("m_tension_y_label_val"));

        gridLayout_8->addWidget(m_tension_y_label_val, 2, 1, 1, 1);

        m_tension_x_label_val = new QLabel(m_info_group_box);
        m_tension_x_label_val->setObjectName(QString::fromUtf8("m_tension_x_label_val"));

        gridLayout_8->addWidget(m_tension_x_label_val, 1, 1, 1, 1);

        m_potential_label_box = new QComboBox(m_info_group_box);
        m_potential_label_box->setObjectName(QString::fromUtf8("m_potential_label_box"));

        gridLayout_8->addWidget(m_potential_label_box, 3, 2, 1, 1);

        m_tension_val_label_val = new QLabel(m_info_group_box);
        m_tension_val_label_val->setObjectName(QString::fromUtf8("m_tension_val_label_val"));

        gridLayout_8->addWidget(m_tension_val_label_val, 0, 1, 1, 1);

        m_tension_val_label_box = new QComboBox(m_info_group_box);
        m_tension_val_label_box->setObjectName(QString::fromUtf8("m_tension_val_label_box"));

        gridLayout_8->addWidget(m_tension_val_label_box, 0, 2, 1, 1);

        m_tension_x_label_box = new QComboBox(m_info_group_box);
        m_tension_x_label_box->setObjectName(QString::fromUtf8("m_tension_x_label_box"));

        gridLayout_8->addWidget(m_tension_x_label_box, 1, 2, 1, 1);

        m_potential_label = new QLabel(m_info_group_box);
        m_potential_label->setObjectName(QString::fromUtf8("m_potential_label"));

        gridLayout_8->addWidget(m_potential_label, 3, 0, 1, 1);

        m_tension_val_label = new QLabel(m_info_group_box);
        m_tension_val_label->setObjectName(QString::fromUtf8("m_tension_val_label"));

        gridLayout_8->addWidget(m_tension_val_label, 0, 0, 1, 1);

        m_energy_val_label = new QLabel(m_info_group_box);
        m_energy_val_label->setObjectName(QString::fromUtf8("m_energy_val_label"));

        gridLayout_8->addWidget(m_energy_val_label, 4, 0, 1, 1);

        m_energy_val_label_val = new QLabel(m_info_group_box);
        m_energy_val_label_val->setObjectName(QString::fromUtf8("m_energy_val_label_val"));

        gridLayout_8->addWidget(m_energy_val_label_val, 4, 1, 1, 1);

        m_energy_val_label_box = new QComboBox(m_info_group_box);
        m_energy_val_label_box->setObjectName(QString::fromUtf8("m_energy_val_label_box"));

        gridLayout_8->addWidget(m_energy_val_label_box, 4, 2, 1, 1);


        gridLayout_9->addLayout(gridLayout_8, 0, 0, 1, 1);


        horizontalLayout_6->addWidget(m_info_group_box);


        gridLayout_5->addLayout(horizontalLayout_6, 1, 0, 1, 1);

        m_tab_widget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        horizontalLayout_9 = new QHBoxLayout(tab_2);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        m_use_cursor_start = new QCheckBox(tab_2);
        m_use_cursor_start->setObjectName(QString::fromUtf8("m_use_cursor_start"));

        verticalLayout_6->addWidget(m_use_cursor_start);

        m_start_group_box = new QGroupBox(tab_2);
        m_start_group_box->setObjectName(QString::fromUtf8("m_start_group_box"));
        gridLayout_11 = new QGridLayout(m_start_group_box);
        gridLayout_11->setObjectName(QString::fromUtf8("gridLayout_11"));
        gridLayout_12 = new QGridLayout();
        gridLayout_12->setObjectName(QString::fromUtf8("gridLayout_12"));
        m_pos_x_start_label = new QLabel(m_start_group_box);
        m_pos_x_start_label->setObjectName(QString::fromUtf8("m_pos_x_start_label"));

        gridLayout_12->addWidget(m_pos_x_start_label, 0, 0, 1, 1);

        m_pos_y_start_label = new QLabel(m_start_group_box);
        m_pos_y_start_label->setObjectName(QString::fromUtf8("m_pos_y_start_label"));

        gridLayout_12->addWidget(m_pos_y_start_label, 1, 0, 1, 1);

        m_pos_y_start_edit = new QLineEdit(m_start_group_box);
        m_pos_y_start_edit->setObjectName(QString::fromUtf8("m_pos_y_start_edit"));

        gridLayout_12->addWidget(m_pos_y_start_edit, 1, 1, 1, 1);

        m_pos_x_start_edit = new QLineEdit(m_start_group_box);
        m_pos_x_start_edit->setObjectName(QString::fromUtf8("m_pos_x_start_edit"));

        gridLayout_12->addWidget(m_pos_x_start_edit, 0, 1, 1, 1);

        m_pos_x_start_box = new QComboBox(m_start_group_box);
        m_pos_x_start_box->setObjectName(QString::fromUtf8("m_pos_x_start_box"));

        gridLayout_12->addWidget(m_pos_x_start_box, 0, 2, 1, 1);

        m_pos_y_start_box = new QComboBox(m_start_group_box);
        m_pos_y_start_box->setObjectName(QString::fromUtf8("m_pos_y_start_box"));

        gridLayout_12->addWidget(m_pos_y_start_box, 1, 2, 1, 1);


        gridLayout_11->addLayout(gridLayout_12, 0, 0, 1, 1);


        verticalLayout_6->addWidget(m_start_group_box);


        horizontalLayout_7->addLayout(verticalLayout_6);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        m_use_cursor_dest = new QCheckBox(tab_2);
        m_use_cursor_dest->setObjectName(QString::fromUtf8("m_use_cursor_dest"));

        verticalLayout_7->addWidget(m_use_cursor_dest);

        m_dest_group_box = new QGroupBox(tab_2);
        m_dest_group_box->setObjectName(QString::fromUtf8("m_dest_group_box"));
        gridLayout_13 = new QGridLayout(m_dest_group_box);
        gridLayout_13->setObjectName(QString::fromUtf8("gridLayout_13"));
        gridLayout_14 = new QGridLayout();
        gridLayout_14->setObjectName(QString::fromUtf8("gridLayout_14"));
        m_pos_x_dest_label = new QLabel(m_dest_group_box);
        m_pos_x_dest_label->setObjectName(QString::fromUtf8("m_pos_x_dest_label"));

        gridLayout_14->addWidget(m_pos_x_dest_label, 0, 0, 1, 1);

        m_pos_y_dest_label = new QLabel(m_dest_group_box);
        m_pos_y_dest_label->setObjectName(QString::fromUtf8("m_pos_y_dest_label"));

        gridLayout_14->addWidget(m_pos_y_dest_label, 1, 0, 1, 1);

        m_pos_y_dest_edit = new QLineEdit(m_dest_group_box);
        m_pos_y_dest_edit->setObjectName(QString::fromUtf8("m_pos_y_dest_edit"));

        gridLayout_14->addWidget(m_pos_y_dest_edit, 1, 1, 1, 1);

        m_pos_x_dest_edit = new QLineEdit(m_dest_group_box);
        m_pos_x_dest_edit->setObjectName(QString::fromUtf8("m_pos_x_dest_edit"));

        gridLayout_14->addWidget(m_pos_x_dest_edit, 0, 1, 1, 1);

        m_pos_x_dest_box = new QComboBox(m_dest_group_box);
        m_pos_x_dest_box->setObjectName(QString::fromUtf8("m_pos_x_dest_box"));

        gridLayout_14->addWidget(m_pos_x_dest_box, 0, 2, 1, 1);

        m_pos_y_dest_box = new QComboBox(m_dest_group_box);
        m_pos_y_dest_box->setObjectName(QString::fromUtf8("m_pos_y_dest_box"));

        gridLayout_14->addWidget(m_pos_y_dest_box, 1, 2, 1, 1);


        gridLayout_13->addLayout(gridLayout_14, 0, 0, 1, 1);


        verticalLayout_7->addWidget(m_dest_group_box);


        horizontalLayout_7->addLayout(verticalLayout_7);

        gridLayout_15 = new QGridLayout();
        gridLayout_15->setObjectName(QString::fromUtf8("gridLayout_15"));
        m_work_charge_edit = new QLineEdit(tab_2);
        m_work_charge_edit->setObjectName(QString::fromUtf8("m_work_charge_edit"));

        gridLayout_15->addWidget(m_work_charge_edit, 1, 1, 1, 1);

        m_work_charge_box = new QComboBox(tab_2);
        m_work_charge_box->setObjectName(QString::fromUtf8("m_work_charge_box"));

        gridLayout_15->addWidget(m_work_charge_box, 1, 2, 1, 1);

        m_work_box = new QComboBox(tab_2);
        m_work_box->setObjectName(QString::fromUtf8("m_work_box"));

        gridLayout_15->addWidget(m_work_box, 2, 2, 1, 1);

        m_work_label = new QLabel(tab_2);
        m_work_label->setObjectName(QString::fromUtf8("m_work_label"));

        gridLayout_15->addWidget(m_work_label, 2, 0, 1, 1);

        m_work_charge_label = new QLabel(tab_2);
        m_work_charge_label->setObjectName(QString::fromUtf8("m_work_charge_label"));

        gridLayout_15->addWidget(m_work_charge_label, 1, 0, 1, 1);

        m_work_label_val = new QLabel(tab_2);
        m_work_label_val->setObjectName(QString::fromUtf8("m_work_label_val"));

        gridLayout_15->addWidget(m_work_label_val, 2, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 85, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_15->addItem(verticalSpacer, 0, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_15->addItem(verticalSpacer_2, 3, 1, 1, 1);


        horizontalLayout_7->addLayout(gridLayout_15);


        horizontalLayout_8->addLayout(horizontalLayout_7);


        horizontalLayout_9->addLayout(horizontalLayout_8);

        m_tab_widget->addTab(tab_2, QString());

        gridLayout_4->addWidget(m_tab_widget, 1, 0, 1, 1);


        horizontalLayout->addWidget(widget_2);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1172, 26));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuOptions = new QMenu(menubar);
        menuOptions->setObjectName(QString::fromUtf8("menuOptions"));
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        menuCredits = new QMenu(menubar);
        menuCredits->setObjectName(QString::fromUtf8("menuCredits"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuOptions->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menubar->addAction(menuCredits->menuAction());
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionSave);
        menuFile->addAction(actionSave_as);
        menuFile->addSeparator();
        menuFile->addAction(actionExit);
        menuOptions->addAction(actionTheme);
        menuOptions->addAction(actionLanguage);
        menuHelp->addAction(actionHow_To);

        retranslateUi(MainWindow);
        QObject::connect(m_show_grid, SIGNAL(stateChanged(int)), MainWindow, SLOT(showGrid(int)));
        QObject::connect(actionExit, SIGNAL(triggered()), MainWindow, SLOT(close()));
        QObject::connect(m_show_electro_static_field, SIGNAL(stateChanged(int)), MainWindow, SLOT(showElectroStaticField(int)));
        QObject::connect(m_add_charge_button, SIGNAL(clicked()), MainWindow, SLOT(addCharge()));
        QObject::connect(m_ignore_charges, SIGNAL(clicked()), MainWindow, SLOT(ignoreCharges()));
        QObject::connect(m_edit_charges, SIGNAL(clicked()), MainWindow, SLOT(editCharge()));
        QObject::connect(m_rm_charge, SIGNAL(clicked()), MainWindow, SLOT(rmCharge()));
        QObject::connect(m_play_button, SIGNAL(clicked()), MainWindow, SLOT(play()));
        QObject::connect(m_pause_button, SIGNAL(clicked()), MainWindow, SLOT(pause()));
        QObject::connect(m_speed_button, SIGNAL(clicked()), MainWindow, SLOT(speed_x_2()));
        QObject::connect(m_edit_button, SIGNAL(clicked()), MainWindow, SLOT(edit()));

        m_tab_widget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionOpen->setText(QCoreApplication::translate("MainWindow", "Open", nullptr));
        actionSave->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
        actionSave_as->setText(QCoreApplication::translate("MainWindow", "Save as", nullptr));
        actionExit->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
#if QT_CONFIG(shortcut)
        actionExit->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Q", nullptr));
#endif // QT_CONFIG(shortcut)
        actionTheme->setText(QCoreApplication::translate("MainWindow", "Theme", nullptr));
        actionLanguage->setText(QCoreApplication::translate("MainWindow", "Language", nullptr));
        actionHow_To->setText(QCoreApplication::translate("MainWindow", "How To", nullptr));
        m_play_button->setText(QCoreApplication::translate("MainWindow", "Play", nullptr));
        m_pause_button->setText(QCoreApplication::translate("MainWindow", "Pause", nullptr));
        m_speed_button->setText(QCoreApplication::translate("MainWindow", "Speed x 2", nullptr));
        m_edit_button->setText(QCoreApplication::translate("MainWindow", "Edit", nullptr));
        m_additional_group_box->setTitle(QCoreApplication::translate("MainWindow", "Additional", nullptr));
        m_scale_label->setText(QCoreApplication::translate("MainWindow", "Scale:", nullptr));
        m_show_grid->setText(QCoreApplication::translate("MainWindow", "Show Grid", nullptr));
        m_show_electro_static_field->setText(QCoreApplication::translate("MainWindow", "Show Electro Static Field ", nullptr));
        m_camera_change_label->setText(QCoreApplication::translate("MainWindow", "Camera at:", nullptr));
        m_schange_scene_label->setText(QCoreApplication::translate("MainWindow", "Change scene:", nullptr));
        m_charges_group_box->setTitle(QCoreApplication::translate("MainWindow", "Charges", nullptr));
        m_add_charge_button->setText(QCoreApplication::translate("MainWindow", "Add Charge", nullptr));
        m_ignore_charges->setText(QCoreApplication::translate("MainWindow", "Ignore Charges", nullptr));
        m_edit_charges->setText(QCoreApplication::translate("MainWindow", "Edit Charge", nullptr));
        m_rm_charge->setText(QCoreApplication::translate("MainWindow", "Remove Charge", nullptr));
        m_use_cursor_pos_info->setText(QCoreApplication::translate("MainWindow", "Use Cursor Position", nullptr));
        m_position_group_box->setTitle(QCoreApplication::translate("MainWindow", "Position", nullptr));
        m_pos_x_info_label->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        m_pos_y_info_label->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        m_info_group_box->setTitle(QCoreApplication::translate("MainWindow", "Info", nullptr));
        m_tension_y_label->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        m_potential_label_val->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        m_tension_x_label->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        m_tension_y_label_val->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        m_tension_x_label_val->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        m_tension_val_label_val->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        m_potential_label->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        m_tension_val_label->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        m_energy_val_label->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        m_energy_val_label_val->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        m_tab_widget->setTabText(m_tab_widget->indexOf(tab), QCoreApplication::translate("MainWindow", "Position Info", nullptr));
        m_use_cursor_start->setText(QCoreApplication::translate("MainWindow", "Use Cursor Position", nullptr));
        m_start_group_box->setTitle(QCoreApplication::translate("MainWindow", "Start", nullptr));
        m_pos_x_start_label->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        m_pos_y_start_label->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        m_use_cursor_dest->setText(QCoreApplication::translate("MainWindow", "Use Cursor Position", nullptr));
        m_dest_group_box->setTitle(QCoreApplication::translate("MainWindow", "Destination", nullptr));
        m_pos_x_dest_label->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        m_pos_y_dest_label->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        m_work_label->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        m_work_charge_label->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        m_work_label_val->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        m_tab_widget->setTabText(m_tab_widget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "Work", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
        menuOptions->setTitle(QCoreApplication::translate("MainWindow", "Options", nullptr));
        menuHelp->setTitle(QCoreApplication::translate("MainWindow", "Help", nullptr));
        menuCredits->setTitle(QCoreApplication::translate("MainWindow", "Credits", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

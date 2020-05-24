#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "Interface/ValueRepresenter/valueedit.h"
#include "Interface/ValueRepresenter/valuewriter.h"
#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow: public QMainWindow
{
    Q_OBJECT

    bool m_use_cursor;

    ValueEdit m_pos_x;
    ValueEdit m_pos_y;

    ValueWriter m_tension_val;
    ValueWriter m_tension_x;
    ValueWriter m_tension_y;
    ValueWriter m_potential;
    ValueWriter m_energy;

    ValueEdit m_start_pos_x;
    ValueEdit m_start_pos_y;
    ValueEdit m_dest_pos_x;
    ValueEdit m_dest_pos_y;
    ValueEdit m_charge;

    ValueWriter m_work;

    int m_id;


public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    void showGrid(int);
    void showElectroStaticField(int);

    void recountPhysics();

    void addCharge();
    void ignoreCharges();
    void editCharge();
    void rmCharge();

    void play();
    void pause();
    void speed_x_2();
    void edit();

    void usePosCursor(int);
    void useStartCursor(int);
    void useDestCursor(int);

    void cursorMoved(const QPoint&);
    void leftButtonClicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "arguments_parser.h"
#include "mathlib.h"





#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
protected:
    void keyPressEvent(QKeyEvent *event) override;

private:
    Ui::MainWindow *ui;

private slots:
    void digit_pressed();
    void typeIn(QString num);
    void on_button_pow_released();
    void on_button_fact_released();
    void on_button_del_released();
    void on_button_equal_released();
    void on_button_clear_released();

    void on_button_root_released();
    void on_button_help_clicked();
};
#endif // MAINWINDOW_H
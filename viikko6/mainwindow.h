#ifndef MAINWINDOW_H
#define MAINWINDOW_H

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

public slots:
    void handleN0();
    void handleN1();
    void handleN2();
    void handleN3();
    void handleN4();
    void handleN5();
    void handleN6();
    void handleN7();
    void handleN8();
    void handleN9();
    void handleClear();
    void handleEnter();
    void handleAdd();
    void handleSub();
    void handleMul();
    void handleDiv();

private:
    Ui::MainWindow *ui;
    QString number1, number2;
    int state;
    float result;
    short operand;

    void numberClickedHandler();
    void clearAndEnterClickHandler();
    void addSubMulDivClickHandler();
    void resetLineEdits();
};
#endif // MAINWINDOW_H

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QHBoxLayout>
#include <QPushButton>
#include <QWidget>
#include <QMenuBar>
#include <QMenu>
#include <QAction>

#include <QMessageBox>

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    QWidget* _mainWidget;
    QHBoxLayout* _mainLayout;
    QPushButton* _button1;
    QPushButton* _closeButton;

   QMenuBar* _menuBar;
   QMenu* _mainManu;
   QAction* _pierdnijAct;
   QMenu* _secondManu;

private slots:
   void pierdzenie();

};

#endif // MAINWINDOW_H

#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    _mainWidget = new QWidget;
    _mainLayout = new QHBoxLayout;
    _button1 = new QPushButton;
    _button1->setText("przycisk 1");
    _closeButton = new QPushButton;
    _closeButton->setText("Koniec");
    _closeButton->setToolTip("zgadnij co tu mogloby byc ;D");
    _mainLayout->addWidget(_button1);
    _mainLayout->addWidget(_closeButton);

    _mainWidget->setLayout(_mainLayout);
    this->setCentralWidget(_mainWidget);
    this->setWindowTitle("dupa staka i owaka");

    _menuBar = new QMenuBar;
    _mainManu = new QMenu;
    _secondManu = new QMenu;
    _mainManu->setTitle("Pilk");
    _mainManu->addAction("zamknij");
    _pierdnijAct = _mainManu->addAction("pierdnij");
    _secondManu->setTitle("Drugie_fajne");
    _secondManu->setToolTip("czy to widac w 2 menu?");
    _secondManu->addAction("Jakub Rozpruwacz");
    _menuBar->addMenu(_mainManu);
    _menuBar->addMenu(_secondManu);
    this->setMenuBar(_menuBar);

    connect(_closeButton,SIGNAL(clicked(bool)), this, SLOT(close()));
    connect(_pierdnijAct, SIGNAL(triggered(bool)), this, SLOT(pierdzenie()));
}

void MainWindow::pierdzenie()
{
    QMessageBox pierd;
    QString zapach;
    zapach = QString("ale kurwa to jebie");
    pierd.information(this,"Zem se walnał smrodem", zapach);
}

MainWindow::~MainWindow()
{
    delete _mainWidget;
}

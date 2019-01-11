#pragma once

#include <QtWidgets/QWidget>
#include "ui_Aufgabe1.h"

class Aufgabe1 : public QWidget
{
    Q_OBJECT

public:
    Aufgabe1(QWidget *parent = Q_NULLPTR);

private:
    Ui::Aufgabe1Class ui;

private slots:
void on_btnLoadImage_clicked();
void on_btnHoriLine_clicked();
void on_btnDiagLine_clicked();
void on_btnFillImage_clicked();
};

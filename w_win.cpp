#include "w_win.h"
#include "ui_w_win.h"

w_win::w_win(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::w_win)
{
    ui->setupUi(this);
}

w_win::~w_win()
{
    delete ui;
}

void w_win::receivewhite_win() {
    this->show();
}

void w_win::on_again_clicked()
{
    emit showMainWindow();
    this->hide();
}

void w_win::on_end_clicked()
{
    emit quit();
}

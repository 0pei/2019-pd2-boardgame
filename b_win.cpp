#include "b_win.h"
#include "ui_b_win.h"

b_win::b_win(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::b_win)
{
    ui->setupUi(this);
}

b_win::~b_win()
{
    delete ui;
}

void b_win::receiveblack_win() {
    this->show();
}

void b_win::on_again_clicked()
{
    emit showMainWindow();
    this->hide();
}

void b_win::on_end_clicked()
{
    emit quit();
}

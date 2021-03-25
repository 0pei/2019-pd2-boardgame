#include "edit.h"
#include "ui_edit.h"

edit::edit(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::edit)
{
    ui->setupUi(this);
}

edit::~edit()
{
    delete ui;
}




void edit::receiveedit() {
    this->show();
}

void edit::on_back_clicked()
{
    emit showbegin();
    this->hide();
}

void edit::on_end_clicked()
{
    emit quit();
}

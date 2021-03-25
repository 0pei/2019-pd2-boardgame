#include "begin.h"
#include "ui_begin.h"

begin::begin(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::begin)
{
    ui->setupUi(this);
}

begin::~begin()
{
    delete ui;
}

void begin::receiveback_w() {
    this->show();
}

void begin::receiveback_e() {
    this->show();
}

void begin::on_start_clicked()
{
    emit showmainwindow();
    this->hide();
}

void begin::on_edit_clicked()
{
    emit showedit();
    this->hide();
}

void begin::on_end_clicked()
{
    emit quit();
}


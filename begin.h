#ifndef BEGIN_H
#define BEGIN_H

#include <QMainWindow>
#include <QGraphicsScene>
#include <QPushButton>

namespace Ui {
class begin;
}

class begin : public QMainWindow
{
    Q_OBJECT

public:
    explicit begin(QWidget *parent = nullptr);
    ~begin();

private slots:
    void receiveback_w();
    void receiveback_e();
    void on_start_clicked();
    void on_edit_clicked();
    void on_end_clicked();

signals:
    void showmainwindow();
    void showedit();
    void quit();

private:
    Ui::begin *ui;
};

#endif // BEGIN_H

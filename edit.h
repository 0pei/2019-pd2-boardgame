#ifndef EDIT_H
#define EDIT_H

#include <QWidget>

namespace Ui {
class edit;
}

class edit : public QWidget
{
    Q_OBJECT

public:
    explicit edit(QWidget *parent = nullptr);
    ~edit();

private:
    Ui::edit *ui;

private slots:
    void receiveedit();
    void on_back_clicked();
    void on_end_clicked();

signals:
    void showbegin();
    void quit();
};

#endif // EDIT_H

#ifndef W_WIN_H
#define W_WIN_H

#include <QWidget>

namespace Ui {
class w_win;
}

class w_win : public QWidget
{
    Q_OBJECT

public:
    explicit w_win(QWidget *parent = nullptr);
    ~w_win();

private:
    Ui::w_win *ui;

private slots:
    void receivewhite_win();
    void on_again_clicked();
    void on_end_clicked();

signals:
    void showMainWindow();
    void quit();
};

#endif // W_WIN_H

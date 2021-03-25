#ifndef B_WIN_H
#define B_WIN_H

#include <QWidget>

namespace Ui {
class b_win;
}

class b_win : public QWidget
{
    Q_OBJECT

public:
    explicit b_win(QWidget *parent = nullptr);
    ~b_win();

private:
    Ui::b_win *ui;

private slots:
    void receiveblack_win();
    void on_again_clicked();
    void on_end_clicked();

signals:
    void showMainWindow();
    void quit();
};

#endif // B_WIN_H

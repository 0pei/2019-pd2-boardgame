#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsScene>
#include <QPushButton>
#include <QMouseEvent>
#include <QDebug>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;

    void set(QPushButton *what);
    void set_chess_play();
    void set_chess_edit();
    QPushButton *black_rook1 = new QPushButton();
    QPushButton *black_knight1 = new QPushButton();
    QPushButton *black_bishop1 = new QPushButton();
    QPushButton *black_queen = new QPushButton();
    QPushButton *black_king = new QPushButton();
    QPushButton *black_bishop2 = new QPushButton();
    QPushButton *black_knight2 = new QPushButton();
    QPushButton *black_rook2 = new QPushButton();
    QPushButton *black_pawn1 = new QPushButton();
    QPushButton *black_pawn2 = new QPushButton();
    QPushButton *black_pawn3 = new QPushButton();
    QPushButton *black_pawn4 = new QPushButton();
    QPushButton *black_pawn5 = new QPushButton();
    QPushButton *black_pawn6 = new QPushButton();
    QPushButton *black_pawn7 = new QPushButton();
    QPushButton *black_pawn8 = new QPushButton();
    QPushButton *white_pawn1 = new QPushButton();
    QPushButton *white_pawn2 = new QPushButton();
    QPushButton *white_pawn3 = new QPushButton();
    QPushButton *white_pawn4 = new QPushButton();
    QPushButton *white_pawn5 = new QPushButton();
    QPushButton *white_pawn6 = new QPushButton();
    QPushButton *white_pawn7 = new QPushButton();
    QPushButton *white_pawn8 = new QPushButton();
    QPushButton *white_rook1 = new QPushButton();
    QPushButton *white_knight1 = new QPushButton();
    QPushButton *white_bishop1 = new QPushButton();
    QPushButton *white_queen = new QPushButton();
    QPushButton *white_king = new QPushButton();
    QPushButton *white_bishop2 = new QPushButton();
    QPushButton *white_knight2 = new QPushButton();
    QPushButton *white_rook2 = new QPushButton();

    QPushButton *move_up1 = new QPushButton();
    QPushButton *move_up2 = new QPushButton();
    QPushButton *move_up3 = new QPushButton();
    QPushButton *move_up4 = new QPushButton();
    QPushButton *move_up5 = new QPushButton();
    QPushButton *move_up6 = new QPushButton();
    QPushButton *move_up7 = new QPushButton();
    QPushButton *move_down1 = new QPushButton();
    QPushButton *move_down2 = new QPushButton();
    QPushButton *move_down3 = new QPushButton();
    QPushButton *move_down4 = new QPushButton();
    QPushButton *move_down5 = new QPushButton();
    QPushButton *move_down6 = new QPushButton();
    QPushButton *move_down7 = new QPushButton();
    QPushButton *move_left1 = new QPushButton();
    QPushButton *move_left2 = new QPushButton();
    QPushButton *move_left3 = new QPushButton();
    QPushButton *move_left4 = new QPushButton();
    QPushButton *move_left5 = new QPushButton();
    QPushButton *move_left6 = new QPushButton();
    QPushButton *move_left7 = new QPushButton();
    QPushButton *move_right1 = new QPushButton();
    QPushButton *move_right2 = new QPushButton();
    QPushButton *move_right3 = new QPushButton();
    QPushButton *move_right4 = new QPushButton();
    QPushButton *move_right5 = new QPushButton();
    QPushButton *move_right6 = new QPushButton();
    QPushButton *move_right7 = new QPushButton();
    QPushButton *move_left_up1 = new QPushButton();
    QPushButton *move_left_up2 = new QPushButton();
    QPushButton *move_left_up3 = new QPushButton();
    QPushButton *move_left_up4 = new QPushButton();
    QPushButton *move_left_up5 = new QPushButton();
    QPushButton *move_left_up6 = new QPushButton();
    QPushButton *move_left_up7 = new QPushButton();
    QPushButton *move_left_down1 = new QPushButton();
    QPushButton *move_left_down2 = new QPushButton();
    QPushButton *move_left_down3 = new QPushButton();
    QPushButton *move_left_down4 = new QPushButton();
    QPushButton *move_left_down5 = new QPushButton();
    QPushButton *move_left_down6 = new QPushButton();
    QPushButton *move_left_down7 = new QPushButton();
    QPushButton *move_right_up1 = new QPushButton();
    QPushButton *move_right_up2 = new QPushButton();
    QPushButton *move_right_up3 = new QPushButton();
    QPushButton *move_right_up4 = new QPushButton();
    QPushButton *move_right_up5 = new QPushButton();
    QPushButton *move_right_up6 = new QPushButton();
    QPushButton *move_right_up7 = new QPushButton();
    QPushButton *move_right_down1 = new QPushButton();
    QPushButton *move_right_down2 = new QPushButton();
    QPushButton *move_right_down3 = new QPushButton();
    QPushButton *move_right_down4 = new QPushButton();
    QPushButton *move_right_down5 = new QPushButton();
    QPushButton *move_right_down6 = new QPushButton();
    QPushButton *move_right_down7 = new QPushButton();
    QPushButton *move_left_up_up = new QPushButton();   //move of knight
    QPushButton *move_left_up_left = new QPushButton();
    QPushButton *move_left_down_down = new QPushButton();
    QPushButton *move_left_down_left = new QPushButton();
    QPushButton *move_right_up_up = new QPushButton();
    QPushButton *move_right_up_right = new QPushButton();
    QPushButton *move_right_down_down = new QPushButton();
    QPushButton *move_right_down_right = new QPushButton();

    QPushButton *new_black_rook1 = new QPushButton();
    QPushButton *new_black_knight1 = new QPushButton();
    QPushButton *new_black_bishop1 = new QPushButton();
    QPushButton *new_black_queen = new QPushButton();
    QPushButton *new_black_king = new QPushButton();
    QPushButton *new_black_bishop2 = new QPushButton();
    QPushButton *new_black_knight2 = new QPushButton();
    QPushButton *new_black_rook2 = new QPushButton();
    QPushButton *new_black_pawn1 = new QPushButton();
    QPushButton *new_black_pawn2 = new QPushButton();
    QPushButton *new_black_pawn3 = new QPushButton();
    QPushButton *new_black_pawn4 = new QPushButton();
    QPushButton *new_black_pawn5 = new QPushButton();
    QPushButton *new_black_pawn6 = new QPushButton();
    QPushButton *new_black_pawn7 = new QPushButton();
    QPushButton *new_black_pawn8 = new QPushButton();
    QPushButton *new_white_pawn1 = new QPushButton();
    QPushButton *new_white_pawn2 = new QPushButton();
    QPushButton *new_white_pawn3 = new QPushButton();
    QPushButton *new_white_pawn4 = new QPushButton();
    QPushButton *new_white_pawn5 = new QPushButton();
    QPushButton *new_white_pawn6 = new QPushButton();
    QPushButton *new_white_pawn7 = new QPushButton();
    QPushButton *new_white_pawn8 = new QPushButton();
    QPushButton *new_white_rook1 = new QPushButton();
    QPushButton *new_white_knight1 = new QPushButton();
    QPushButton *new_white_bishop1 = new QPushButton();
    QPushButton *new_white_queen = new QPushButton();
    QPushButton *new_white_king = new QPushButton();
    QPushButton *new_white_bishop2 = new QPushButton();
    QPushButton *new_white_knight2 = new QPushButton();
    QPushButton *new_white_rook2 = new QPushButton();

    QPushButton *promote_black_queen1 = new QPushButton();
    QPushButton *promote_black_queen2 = new QPushButton();
    QPushButton *promote_black_queen3 = new QPushButton();
    QPushButton *promote_black_queen4 = new QPushButton();
    QPushButton *promote_black_queen5 = new QPushButton();
    QPushButton *promote_black_queen6 = new QPushButton();
    QPushButton *promote_black_queen7 = new QPushButton();
    QPushButton *promote_black_queen8 = new QPushButton();
    QPushButton *promote_white_queen1 = new QPushButton();
    QPushButton *promote_white_queen2 = new QPushButton();
    QPushButton *promote_white_queen3 = new QPushButton();
    QPushButton *promote_white_queen4 = new QPushButton();
    QPushButton *promote_white_queen5 = new QPushButton();
    QPushButton *promote_white_queen6 = new QPushButton();
    QPushButton *promote_white_queen7 = new QPushButton();
    QPushButton *promote_white_queen8 = new QPushButton();

    QPushButton *new_promote_black_queen1 = new QPushButton();
    QPushButton *new_promote_black_queen2 = new QPushButton();
    QPushButton *new_promote_black_queen3 = new QPushButton();
    QPushButton *new_promote_black_queen4 = new QPushButton();
    QPushButton *new_promote_black_queen5 = new QPushButton();
    QPushButton *new_promote_black_queen6 = new QPushButton();
    QPushButton *new_promote_black_queen7 = new QPushButton();
    QPushButton *new_promote_black_queen8 = new QPushButton();
    QPushButton *new_promote_white_queen1 = new QPushButton();
    QPushButton *new_promote_white_queen2 = new QPushButton();
    QPushButton *new_promote_white_queen3 = new QPushButton();
    QPushButton *new_promote_white_queen4 = new QPushButton();
    QPushButton *new_promote_white_queen5 = new QPushButton();
    QPushButton *new_promote_white_queen6 = new QPushButton();
    QPushButton *new_promote_white_queen7 = new QPushButton();
    QPushButton *new_promote_white_queen8 = new QPushButton();

    int n;                                              //num of every chesspiece : 1 ~ 32
    void set_hide();                                    //click any chess button, hide every move button
    void set_move(QPushButton *what_chess);             //set any following pos according to rule
    void set_move_up1(QPushButton *what_chess);
    void set_move_up2(QPushButton *what_chess);
    void set_move_up3(QPushButton *what_chess);
    void set_move_up4(QPushButton *what_chess);
    void set_move_up5(QPushButton *what_chess);
    void set_move_up6(QPushButton *what_chess);
    void set_move_up7(QPushButton *what_chess);
    void set_move_down1(QPushButton *what_chess);
    void set_move_down2(QPushButton *what_chess);
    void set_move_down3(QPushButton *what_chess);
    void set_move_down4(QPushButton *what_chess);
    void set_move_down5(QPushButton *what_chess);
    void set_move_down6(QPushButton *what_chess);
    void set_move_down7(QPushButton *what_chess);
    void set_move_left1(QPushButton *what_chess);
    void set_move_left2(QPushButton *what_chess);
    void set_move_left3(QPushButton *what_chess);
    void set_move_left4(QPushButton *what_chess);
    void set_move_left5(QPushButton *what_chess);
    void set_move_left6(QPushButton *what_chess);
    void set_move_left7(QPushButton *what_chess);
    void set_move_right1(QPushButton *what_chess);
    void set_move_right2(QPushButton *what_chess);
    void set_move_right3(QPushButton *what_chess);
    void set_move_right4(QPushButton *what_chess);
    void set_move_right5(QPushButton *what_chess);
    void set_move_right6(QPushButton *what_chess);
    void set_move_right7(QPushButton *what_chess);
    void set_move_left_up1(QPushButton *what_chess);
    void set_move_left_up2(QPushButton *what_chess);
    void set_move_left_up3(QPushButton *what_chess);
    void set_move_left_up4(QPushButton *what_chess);
    void set_move_left_up5(QPushButton *what_chess);
    void set_move_left_up6(QPushButton *what_chess);
    void set_move_left_up7(QPushButton *what_chess);
    void set_move_left_down1(QPushButton *what_chess);
    void set_move_left_down2(QPushButton *what_chess);
    void set_move_left_down3(QPushButton *what_chess);
    void set_move_left_down4(QPushButton *what_chess);
    void set_move_left_down5(QPushButton *what_chess);
    void set_move_left_down6(QPushButton *what_chess);
    void set_move_left_down7(QPushButton *what_chess);
    void set_move_right_up1(QPushButton *what_chess);
    void set_move_right_up2(QPushButton *what_chess);
    void set_move_right_up3(QPushButton *what_chess);
    void set_move_right_up4(QPushButton *what_chess);
    void set_move_right_up5(QPushButton *what_chess);
    void set_move_right_up6(QPushButton *what_chess);
    void set_move_right_up7(QPushButton *what_chess);
    void set_move_right_down1(QPushButton *what_chess);
    void set_move_right_down2(QPushButton *what_chess);
    void set_move_right_down3(QPushButton *what_chess);
    void set_move_right_down4(QPushButton *what_chess);
    void set_move_right_down5(QPushButton *what_chess);
    void set_move_right_down6(QPushButton *what_chess);
    void set_move_right_down7(QPushButton *what_chess);
    void set_move_left_up_up(QPushButton *what_chess);  //move of knight
    void set_move_left_up_left(QPushButton *what_chess);
    void set_move_left_down_down(QPushButton *what_chess);
    void set_move_left_down_left(QPushButton *what_chess);
    void set_move_right_up_up(QPushButton *what_chess);
    void set_move_right_up_right(QPushButton *what_chess);
    void set_move_right_down_down(QPushButton *what_chess);
    void set_move_right_down_right(QPushButton *what_chess);

    void to_show_can_move(int n);
    bool nothing(QPushButton *can_move);
    void want_eat(QPushButton *can_move, int n);        //1 ~ 16 is black, 17 ~ 32 is white
    void to_eat(QPushButton *can_eat, int n);

    int pb = 0, pw = 0;
    void promote(QPushButton *can_move);
    void set_promote_b(QPushButton *what, QPushButton *can_move);
    void set_promote_w(QPushButton *what, QPushButton *can_move);

    int X, Y;
    void mousePressEvent(QMouseEvent *event);

private slots:
    void click_black_rook1();
    void click_black_knight1();
    void click_black_bishop1();
    void click_black_queen();
    void click_black_king();
    void click_black_bishop2();
    void click_black_knight2();
    void click_black_rook2();
    void click_black_pawn1();
    void click_black_pawn2();
    void click_black_pawn3();
    void click_black_pawn4();
    void click_black_pawn5();
    void click_black_pawn6();
    void click_black_pawn7();
    void click_black_pawn8();
    void click_white_pawn1();
    void click_white_pawn2();
    void click_white_pawn3();
    void click_white_pawn4();
    void click_white_pawn5();
    void click_white_pawn6();
    void click_white_pawn7();
    void click_white_pawn8();
    void click_white_rook1();
    void click_white_knight1();
    void click_white_bishop1();
    void click_white_queen();
    void click_white_king();
    void click_white_bishop2();
    void click_white_knight2();
    void click_white_rook2();

    void click_promote_black_queen1();
    void click_promote_black_queen2();
    void click_promote_black_queen3();
    void click_promote_black_queen4();
    void click_promote_black_queen5();
    void click_promote_black_queen6();
    void click_promote_black_queen7();
    void click_promote_black_queen8();
    void click_promote_white_queen1();
    void click_promote_white_queen2();
    void click_promote_white_queen3();
    void click_promote_white_queen4();
    void click_promote_white_queen5();
    void click_promote_white_queen6();
    void click_promote_white_queen7();
    void click_promote_white_queen8();

    void to_move_up1();
    void to_move_up2();
    void to_move_up3();
    void to_move_up4();
    void to_move_up5();
    void to_move_up6();
    void to_move_up7();
    void to_move_down1();
    void to_move_down2();
    void to_move_down3();
    void to_move_down4();
    void to_move_down5();
    void to_move_down6();
    void to_move_down7();
    void to_move_left1();
    void to_move_left2();
    void to_move_left3();
    void to_move_left4();
    void to_move_left5();
    void to_move_left6();
    void to_move_left7();
    void to_move_right1();
    void to_move_right2();
    void to_move_right3();
    void to_move_right4();
    void to_move_right5();
    void to_move_right6();
    void to_move_right7();
    void to_move_left_up1();
    void to_move_left_up2();
    void to_move_left_up3();
    void to_move_left_up4();
    void to_move_left_up5();
    void to_move_left_up6();
    void to_move_left_up7();
    void to_move_left_down1();
    void to_move_left_down2();
    void to_move_left_down3();
    void to_move_left_down4();
    void to_move_left_down5();
    void to_move_left_down6();
    void to_move_left_down7();
    void to_move_right_up1();
    void to_move_right_up2();
    void to_move_right_up3();
    void to_move_right_up4();
    void to_move_right_up5();
    void to_move_right_up6();
    void to_move_right_up7();
    void to_move_right_down1();
    void to_move_right_down2();
    void to_move_right_down3();
    void to_move_right_down4();
    void to_move_right_down5();
    void to_move_right_down6();
    void to_move_right_down7();
    void to_move_left_up_up();
    void to_move_left_up_left();
    void to_move_left_down_down();
    void to_move_left_down_left();
    void to_move_right_up_up();
    void to_move_right_up_right();
    void to_move_right_down_down();
    void to_move_right_down_right();

    void click_new_black_rook1();
    void click_new_black_knight1();
    void click_new_black_bishop1();
    void click_new_black_queen();
    void click_new_black_king();
    void click_new_black_bishop2();
    void click_new_black_knight2();
    void click_new_black_rook2();
    void click_new_black_pawn1();
    void click_new_black_pawn2();
    void click_new_black_pawn3();
    void click_new_black_pawn4();
    void click_new_black_pawn5();
    void click_new_black_pawn6();
    void click_new_black_pawn7();
    void click_new_black_pawn8();
    void click_new_white_pawn1();
    void click_new_white_pawn2();
    void click_new_white_pawn3();
    void click_new_white_pawn4();
    void click_new_white_pawn5();
    void click_new_white_pawn6();
    void click_new_white_pawn7();
    void click_new_white_pawn8();
    void click_new_white_rook1();
    void click_new_white_knight1();
    void click_new_white_bishop1();
    void click_new_white_queen();
    void click_new_white_king();
    void click_new_white_bishop2();
    void click_new_white_knight2();
    void click_new_white_rook2();

    void click_new_promote_black_queen1();
    void click_new_promote_black_queen2();
    void click_new_promote_black_queen3();
    void click_new_promote_black_queen4();
    void click_new_promote_black_queen5();
    void click_new_promote_black_queen6();
    void click_new_promote_black_queen7();
    void click_new_promote_black_queen8();
    void click_new_promote_white_queen1();
    void click_new_promote_white_queen2();
    void click_new_promote_white_queen3();
    void click_new_promote_white_queen4();
    void click_new_promote_white_queen5();
    void click_new_promote_white_queen6();
    void click_new_promote_white_queen7();
    void click_new_promote_white_queen8();

    void receivestart();
    void receiveedit();
    void receiveagain();
    void on_restart_clicked();
    void on_edit_clicked();
    void on_end_clicked();
    void on_back_clicked();

signals:
    void white_win();
    void black_win();
    void showbegin();
    void quit();
};

#endif // MAINWINDOW_H

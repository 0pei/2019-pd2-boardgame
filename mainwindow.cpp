 #include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    set_chess_play();

    black_rook1->setIcon(QIcon(":/pic/black_rook.png"));
    black_knight1->setIcon(QIcon(":/pic/black_knight.png"));
    black_bishop1->setIcon(QIcon(":/pic/black_bishop.png"));
    black_queen->setIcon(QIcon(":/pic/black_queen.png"));
    black_king->setIcon(QIcon(":/pic/black_king.png"));
    black_bishop2->setIcon(QIcon(":/pic/black_bishop.png"));
    black_knight2->setIcon(QIcon(":/pic/black_knight.png"));
    black_rook2->setIcon(QIcon(":/pic/black_rook.png"));
    black_pawn1->setIcon(QIcon(":/pic/black_pawn.png"));
    black_pawn2->setIcon(QIcon(":/pic/black_pawn.png"));
    black_pawn3->setIcon(QIcon(":/pic/black_pawn.png"));
    black_pawn4->setIcon(QIcon(":/pic/black_pawn.png"));
    black_pawn5->setIcon(QIcon(":/pic/black_pawn.png"));
    black_pawn6->setIcon(QIcon(":/pic/black_pawn.png"));
    black_pawn7->setIcon(QIcon(":/pic/black_pawn.png"));
    black_pawn8->setIcon(QIcon(":/pic/black_pawn.png"));
    white_pawn1->setIcon(QIcon(":/pic/white_pawn.png"));
    white_pawn2->setIcon(QIcon(":/pic/white_pawn.png"));
    white_pawn3->setIcon(QIcon(":/pic/white_pawn.png"));
    white_pawn4->setIcon(QIcon(":/pic/white_pawn.png"));
    white_pawn5->setIcon(QIcon(":/pic/white_pawn.png"));
    white_pawn6->setIcon(QIcon(":/pic/white_pawn.png"));
    white_pawn7->setIcon(QIcon(":/pic/white_pawn.png"));
    white_pawn8->setIcon(QIcon(":/pic/white_pawn.png"));
    white_rook1->setIcon(QIcon(":/pic/white_rook.png"));
    white_knight1->setIcon(QIcon(":/pic/white_knight.png"));
    white_bishop1->setIcon(QIcon(":/pic/white_bishop.png"));
    white_queen->setIcon(QIcon(":/pic/white_queen.png"));
    white_king->setIcon(QIcon(":/pic/white_king.png"));
    white_bishop2->setIcon(QIcon(":/pic/white_bishop.png"));
    white_knight2->setIcon(QIcon(":/pic/white_knight.png"));
    white_rook2->setIcon(QIcon(":/pic/white_rook.png"));

    set(black_rook1);
    set(black_knight1);
    set(black_bishop1);
    set(black_queen);
    set(black_king);
    set(black_bishop2);
    set(black_knight2);
    set(black_rook2);
    set(black_pawn1);
    set(black_pawn2);
    set(black_pawn3);
    set(black_pawn4);
    set(black_pawn5);
    set(black_pawn6);
    set(black_pawn7);
    set(black_pawn8);
    set(white_pawn1);
    set(white_pawn2);
    set(white_pawn3);
    set(white_pawn4);
    set(white_pawn5);
    set(white_pawn6);
    set(white_pawn7);
    set(white_pawn8);
    set(white_rook1);
    set(white_knight1);
    set(white_bishop1);
    set(white_queen);
    set(white_king);
    set(white_bishop2);
    set(white_knight2);
    set(white_rook2);

    connect(black_rook1, SIGNAL(clicked()), this, SLOT(click_black_rook1()));
    connect(black_knight1, SIGNAL(clicked()), this, SLOT(click_black_knight1()));
    connect(black_bishop1, SIGNAL(clicked()), this, SLOT(click_black_bishop1()));
    connect(black_queen, SIGNAL(clicked()), this, SLOT(click_black_queen()));
    connect(black_king, SIGNAL(clicked()), this, SLOT(click_black_king()));
    connect(black_bishop2, SIGNAL(clicked()), this, SLOT(click_black_bishop2()));
    connect(black_knight2, SIGNAL(clicked()), this, SLOT(click_black_knight2()));
    connect(black_rook2, SIGNAL(clicked()), this, SLOT(click_black_rook2()));
    connect(black_pawn1, SIGNAL(clicked()), this, SLOT(click_black_pawn1()));
    connect(black_pawn2, SIGNAL(clicked()), this, SLOT(click_black_pawn2()));
    connect(black_pawn3, SIGNAL(clicked()), this, SLOT(click_black_pawn3()));
    connect(black_pawn4, SIGNAL(clicked()), this, SLOT(click_black_pawn4()));
    connect(black_pawn5, SIGNAL(clicked()), this, SLOT(click_black_pawn5()));
    connect(black_pawn6, SIGNAL(clicked()), this, SLOT(click_black_pawn6()));
    connect(black_pawn7, SIGNAL(clicked()), this, SLOT(click_black_pawn7()));
    connect(black_pawn8, SIGNAL(clicked()), this, SLOT(click_black_pawn8()));
    connect(white_pawn1, SIGNAL(clicked()), this, SLOT(click_white_pawn1()));
    connect(white_pawn2, SIGNAL(clicked()), this, SLOT(click_white_pawn2()));
    connect(white_pawn3, SIGNAL(clicked()), this, SLOT(click_white_pawn3()));
    connect(white_pawn4, SIGNAL(clicked()), this, SLOT(click_white_pawn4()));
    connect(white_pawn5, SIGNAL(clicked()), this, SLOT(click_white_pawn5()));
    connect(white_pawn6, SIGNAL(clicked()), this, SLOT(click_white_pawn6()));
    connect(white_pawn7, SIGNAL(clicked()), this, SLOT(click_white_pawn7()));
    connect(white_pawn8, SIGNAL(clicked()), this, SLOT(click_white_pawn8()));
    connect(white_rook1, SIGNAL(clicked()), this, SLOT(click_white_rook1()));
    connect(white_knight1, SIGNAL(clicked()), this, SLOT(click_white_knight1()));
    connect(white_bishop1, SIGNAL(clicked()), this, SLOT(click_white_bishop1()));
    connect(white_queen, SIGNAL(clicked()), this, SLOT(click_white_queen()));
    connect(white_king, SIGNAL(clicked()), this, SLOT(click_white_king()));
    connect(white_bishop2, SIGNAL(clicked()), this, SLOT(click_white_bishop2()));
    connect(white_knight2, SIGNAL(clicked()), this, SLOT(click_white_knight2()));
    connect(white_rook2, SIGNAL(clicked()), this, SLOT(click_white_rook2()));

    connect(move_up1, SIGNAL(clicked()), this, SLOT(to_move_up1()));
    connect(move_up2, SIGNAL(clicked()), this, SLOT(to_move_up2()));
    connect(move_up3, SIGNAL(clicked()), this, SLOT(to_move_up3()));
    connect(move_up4, SIGNAL(clicked()), this, SLOT(to_move_up4()));
    connect(move_up5, SIGNAL(clicked()), this, SLOT(to_move_up5()));
    connect(move_up6, SIGNAL(clicked()), this, SLOT(to_move_up6()));
    connect(move_up7, SIGNAL(clicked()), this, SLOT(to_move_up7()));
    connect(move_down1, SIGNAL(clicked()), this, SLOT(to_move_down1()));
    connect(move_down2, SIGNAL(clicked()), this, SLOT(to_move_down2()));
    connect(move_down3, SIGNAL(clicked()), this, SLOT(to_move_down3()));
    connect(move_down4, SIGNAL(clicked()), this, SLOT(to_move_down4()));
    connect(move_down5, SIGNAL(clicked()), this, SLOT(to_move_down5()));
    connect(move_down6, SIGNAL(clicked()), this, SLOT(to_move_down6()));
    connect(move_down7, SIGNAL(clicked()), this, SLOT(to_move_down7()));
    connect(move_left1, SIGNAL(clicked()), this, SLOT(to_move_left1()));
    connect(move_left2, SIGNAL(clicked()), this, SLOT(to_move_left2()));
    connect(move_left3, SIGNAL(clicked()), this, SLOT(to_move_left3()));
    connect(move_left4, SIGNAL(clicked()), this, SLOT(to_move_left4()));
    connect(move_left5, SIGNAL(clicked()), this, SLOT(to_move_left5()));
    connect(move_left6, SIGNAL(clicked()), this, SLOT(to_move_left6()));
    connect(move_left7, SIGNAL(clicked()), this, SLOT(to_move_left7()));
    connect(move_right1, SIGNAL(clicked()), this, SLOT(to_move_right1()));
    connect(move_right2, SIGNAL(clicked()), this, SLOT(to_move_right2()));
    connect(move_right3, SIGNAL(clicked()), this, SLOT(to_move_right3()));
    connect(move_right4, SIGNAL(clicked()), this, SLOT(to_move_right4()));
    connect(move_right5, SIGNAL(clicked()), this, SLOT(to_move_right5()));
    connect(move_right6, SIGNAL(clicked()), this, SLOT(to_move_right6()));
    connect(move_right7, SIGNAL(clicked()), this, SLOT(to_move_right7()));
    connect(move_left_up1, SIGNAL(clicked()), this, SLOT(to_move_left_up1()));
    connect(move_left_up2, SIGNAL(clicked()), this, SLOT(to_move_left_up2()));
    connect(move_left_up3, SIGNAL(clicked()), this, SLOT(to_move_left_up3()));
    connect(move_left_up4, SIGNAL(clicked()), this, SLOT(to_move_left_up4()));
    connect(move_left_up5, SIGNAL(clicked()), this, SLOT(to_move_left_up5()));
    connect(move_left_up6, SIGNAL(clicked()), this, SLOT(to_move_left_up6()));
    connect(move_left_up7, SIGNAL(clicked()), this, SLOT(to_move_left_up7()));
    connect(move_left_down1, SIGNAL(clicked()), this, SLOT(to_move_left_down1()));
    connect(move_left_down2, SIGNAL(clicked()), this, SLOT(to_move_left_down2()));
    connect(move_left_down3, SIGNAL(clicked()), this, SLOT(to_move_left_down3()));
    connect(move_left_down4, SIGNAL(clicked()), this, SLOT(to_move_left_down4()));
    connect(move_left_down5, SIGNAL(clicked()), this, SLOT(to_move_left_down5()));
    connect(move_left_down6, SIGNAL(clicked()), this, SLOT(to_move_left_down6()));
    connect(move_left_down7, SIGNAL(clicked()), this, SLOT(to_move_left7()));
    connect(move_right_up1, SIGNAL(clicked()), this, SLOT(to_move_right_up1()));
    connect(move_right_up2, SIGNAL(clicked()), this, SLOT(to_move_right_up2()));
    connect(move_right_up3, SIGNAL(clicked()), this, SLOT(to_move_right_up3()));
    connect(move_right_up4, SIGNAL(clicked()), this, SLOT(to_move_right_up4()));
    connect(move_right_up5, SIGNAL(clicked()), this, SLOT(to_move_right_up5()));
    connect(move_right_up6, SIGNAL(clicked()), this, SLOT(to_move_right_up6()));
    connect(move_right_up7, SIGNAL(clicked()), this, SLOT(to_move_right_up7()));
    connect(move_right_down1, SIGNAL(clicked()), this, SLOT(to_move_right_down1()));
    connect(move_right_down2, SIGNAL(clicked()), this, SLOT(to_move_right_down2()));
    connect(move_right_down3, SIGNAL(clicked()), this, SLOT(to_move_right_down3()));
    connect(move_right_down4, SIGNAL(clicked()), this, SLOT(to_move_right_down4()));
    connect(move_right_down5, SIGNAL(clicked()), this, SLOT(to_move_right_down5()));
    connect(move_right_down6, SIGNAL(clicked()), this, SLOT(to_move_right_down6()));
    connect(move_right_down7, SIGNAL(clicked()), this, SLOT(to_move_right7()));
    connect(move_left_up_up, SIGNAL(clicked()), this, SLOT(to_move_left_up_up()));
    connect(move_left_up_left, SIGNAL(clicked()), this, SLOT(to_move_left_up_left()));
    connect(move_left_down_down, SIGNAL(clicked()), this, SLOT(to_move_left_down_down()));
    connect(move_left_down_left, SIGNAL(clicked()), this, SLOT(to_move_left_down_left()));
    connect(move_right_up_up, SIGNAL(clicked()), this, SLOT(to_move_right_up_up()));
    connect(move_right_up_right, SIGNAL(clicked()), this, SLOT(to_move_right_up_right()));
    connect(move_right_down_down, SIGNAL(clicked()), this, SLOT(to_move_right_down_down()));
    connect(move_right_down_right, SIGNAL(clicked()), this, SLOT(to_move_right_down_right()));

    connect(new_black_rook1, SIGNAL(clicked()), this, SLOT(click_new_black_rook1()));
    connect(new_black_knight1, SIGNAL(clicked()), this, SLOT(click_new_black_knight1()));
    connect(new_black_bishop1, SIGNAL(clicked()), this, SLOT(click_new_black_bishop1()));
    connect(new_black_queen, SIGNAL(clicked()), this, SLOT(click_new_black_queen()));
    connect(new_black_king, SIGNAL(clicked()), this, SLOT(click_new_black_king()));
    connect(new_black_bishop2, SIGNAL(clicked()), this, SLOT(click_new_black_bishop2()));
    connect(new_black_knight2, SIGNAL(clicked()), this, SLOT(click_new_black_knight2()));
    connect(new_black_rook2, SIGNAL(clicked()), this, SLOT(click_new_black_rook2()));
    connect(new_black_pawn1, SIGNAL(clicked()), this, SLOT(click_new_black_pawn1()));
    connect(new_black_pawn2, SIGNAL(clicked()), this, SLOT(click_new_black_pawn2()));
    connect(new_black_pawn3, SIGNAL(clicked()), this, SLOT(click_new_black_pawn3()));
    connect(new_black_pawn4, SIGNAL(clicked()), this, SLOT(click_new_black_pawn4()));
    connect(new_black_pawn5, SIGNAL(clicked()), this, SLOT(click_new_black_pawn5()));
    connect(new_black_pawn6, SIGNAL(clicked()), this, SLOT(click_new_black_pawn6()));
    connect(new_black_pawn7, SIGNAL(clicked()), this, SLOT(click_new_black_pawn7()));
    connect(new_black_pawn8, SIGNAL(clicked()), this, SLOT(click_new_black_pawn8()));
    connect(new_white_pawn1, SIGNAL(clicked()), this, SLOT(click_new_white_pawn1()));
    connect(new_white_pawn2, SIGNAL(clicked()), this, SLOT(click_new_white_pawn2()));
    connect(new_white_pawn3, SIGNAL(clicked()), this, SLOT(click_new_white_pawn3()));
    connect(new_white_pawn4, SIGNAL(clicked()), this, SLOT(click_new_white_pawn4()));
    connect(new_white_pawn5, SIGNAL(clicked()), this, SLOT(click_new_white_pawn5()));
    connect(new_white_pawn6, SIGNAL(clicked()), this, SLOT(click_new_white_pawn6()));
    connect(new_white_pawn7, SIGNAL(clicked()), this, SLOT(click_new_white_pawn7()));
    connect(new_white_pawn8, SIGNAL(clicked()), this, SLOT(click_new_white_pawn8()));
    connect(new_white_rook1, SIGNAL(clicked()), this, SLOT(click_new_white_rook1()));
    connect(new_white_knight1, SIGNAL(clicked()), this, SLOT(click_new_white_knight1()));
    connect(new_white_bishop1, SIGNAL(clicked()), this, SLOT(click_new_white_bishop1()));
    connect(new_white_queen, SIGNAL(clicked()), this, SLOT(click_new_white_queen()));
    connect(new_white_king, SIGNAL(clicked()), this, SLOT(click_new_white_king()));
    connect(new_white_bishop2, SIGNAL(clicked()), this, SLOT(click_new_white_bishop2()));
    connect(new_white_knight2, SIGNAL(clicked()), this, SLOT(click_new_white_knight2()));
    connect(new_white_rook2, SIGNAL(clicked()), this, SLOT(click_new_white_rook2()));

    connect(promote_black_queen1, SIGNAL(clicked()), this, SLOT(click_promote_black_queen1()));
    connect(promote_black_queen2, SIGNAL(clicked()), this, SLOT(click_promote_black_queen2()));
    connect(promote_black_queen3, SIGNAL(clicked()), this, SLOT(click_promote_black_queen3()));
    connect(promote_black_queen4, SIGNAL(clicked()), this, SLOT(click_promote_black_queen4()));
    connect(promote_black_queen5, SIGNAL(clicked()), this, SLOT(click_promote_black_queen5()));
    connect(promote_black_queen6, SIGNAL(clicked()), this, SLOT(click_promote_black_queen6()));
    connect(promote_black_queen7, SIGNAL(clicked()), this, SLOT(click_promote_black_queen7()));
    connect(promote_black_queen8, SIGNAL(clicked()), this, SLOT(click_promote_black_queen8()));
    connect(promote_white_queen1, SIGNAL(clicked()), this, SLOT(click_promote_white_queen1()));
    connect(promote_white_queen2, SIGNAL(clicked()), this, SLOT(click_promote_white_queen2()));
    connect(promote_white_queen3, SIGNAL(clicked()), this, SLOT(click_promote_white_queen3()));
    connect(promote_white_queen4, SIGNAL(clicked()), this, SLOT(click_promote_white_queen4()));
    connect(promote_white_queen5, SIGNAL(clicked()), this, SLOT(click_promote_white_queen5()));
    connect(promote_white_queen6, SIGNAL(clicked()), this, SLOT(click_promote_white_queen6()));
    connect(promote_white_queen7, SIGNAL(clicked()), this, SLOT(click_promote_white_queen7()));
    connect(promote_white_queen8, SIGNAL(clicked()), this, SLOT(click_promote_white_queen8()));

    connect(new_promote_black_queen1, SIGNAL(clicked()), this, SLOT(click_new_promote_black_queen1()));
    connect(new_promote_black_queen2, SIGNAL(clicked()), this, SLOT(click_new_promote_black_queen2()));
    connect(new_promote_black_queen3, SIGNAL(clicked()), this, SLOT(click_new_promote_black_queen3()));
    connect(new_promote_black_queen4, SIGNAL(clicked()), this, SLOT(click_new_promote_black_queen4()));
    connect(new_promote_black_queen5, SIGNAL(clicked()), this, SLOT(click_new_promote_black_queen5()));
    connect(new_promote_black_queen6, SIGNAL(clicked()), this, SLOT(click_new_promote_black_queen6()));
    connect(new_promote_black_queen7, SIGNAL(clicked()), this, SLOT(click_new_promote_black_queen7()));
    connect(new_promote_black_queen8, SIGNAL(clicked()), this, SLOT(click_new_promote_black_queen8()));
    connect(new_promote_white_queen1, SIGNAL(clicked()), this, SLOT(click_new_promote_white_queen1()));
    connect(new_promote_white_queen2, SIGNAL(clicked()), this, SLOT(click_new_promote_white_queen2()));
    connect(new_promote_white_queen3, SIGNAL(clicked()), this, SLOT(click_new_promote_white_queen3()));
    connect(new_promote_white_queen4, SIGNAL(clicked()), this, SLOT(click_new_promote_white_queen4()));
    connect(new_promote_white_queen5, SIGNAL(clicked()), this, SLOT(click_new_promote_white_queen5()));
    connect(new_promote_white_queen6, SIGNAL(clicked()), this, SLOT(click_new_promote_white_queen6()));
    connect(new_promote_white_queen7, SIGNAL(clicked()), this, SLOT(click_new_promote_white_queen7()));
    connect(new_promote_white_queen8, SIGNAL(clicked()), this, SLOT(click_new_promote_white_queen8()));
}

MainWindow::~MainWindow()
{
    delete ui;
}
//func
void MainWindow::set(QPushButton *what) {
    what->setParent(this);//will show on MainWindow
    what->setIconSize(QSize(60, 60));//pic size
    what->setStyleSheet("border:none");
    what->show();
}

void MainWindow::set_chess_play() {
    black_rook1->setGeometry(0, 0, 80, 80);//pos & size
    black_knight1->setGeometry(80, 0, 80, 80);
    black_bishop1->setGeometry(160, 0, 80, 80);
    black_queen->setGeometry(240, 0, 80, 80);
    black_king->setGeometry(320, 0, 80, 80);
    black_bishop2->setGeometry(400, 0, 80, 80);
    black_knight2->setGeometry(480, 0, 80, 80);
    black_rook2->setGeometry(560, 0, 80, 80);
    black_pawn1->setGeometry(0, 80, 80, 80);
    black_pawn2->setGeometry(80, 80, 80, 80);
    black_pawn3->setGeometry(160, 80, 80, 80);
    black_pawn4->setGeometry(240, 80, 80, 80);
    black_pawn5->setGeometry(320, 80, 80, 80);
    black_pawn6->setGeometry(400, 80, 80, 80);
    black_pawn7->setGeometry(480, 80, 80, 80);
    black_pawn8->setGeometry(560, 80, 80, 80);
    white_pawn1->setGeometry(00, 480, 80, 80);
    white_pawn2->setGeometry(80, 480, 80, 80);
    white_pawn3->setGeometry(160, 480, 80, 80);
    white_pawn4->setGeometry(240, 480, 80, 80);
    white_pawn5->setGeometry(320, 480, 80, 80);
    white_pawn6->setGeometry(400, 480, 80, 80);
    white_pawn7->setGeometry(480, 480, 80, 80);
    white_pawn8->setGeometry(560, 480, 80, 80);
    white_rook1->setGeometry(0, 560, 80, 80);
    white_knight1->setGeometry(80, 560, 80, 80);
    white_bishop1->setGeometry(160, 560, 80, 80);
    white_queen->setGeometry(240, 560, 80, 80);
    white_king->setGeometry(320, 560, 80, 80);
    white_bishop2->setGeometry(400, 560, 80, 80);
    white_knight2->setGeometry(480, 560, 80, 80);
    white_rook2->setGeometry(560, 560, 80, 80);
    promote_black_queen1->setGeometry(0, 960, 80, 80);
    promote_black_queen2->setGeometry(0, 960, 80, 80);
    promote_black_queen3->setGeometry(0, 960, 80, 80);
    promote_black_queen4->setGeometry(0, 960, 80, 80);
    promote_black_queen5->setGeometry(0, 960, 80, 80);
    promote_black_queen6->setGeometry(0, 960, 80, 80);
    promote_black_queen7->setGeometry(0, 960, 80, 80);
    promote_black_queen8->setGeometry(0, 960, 80, 80);
    promote_white_queen1->setGeometry(0, 960, 80, 80);
    promote_white_queen2->setGeometry(0, 960, 80, 80);
    promote_white_queen3->setGeometry(0, 960, 80, 80);
    promote_white_queen4->setGeometry(0, 960, 80, 80);
    promote_white_queen5->setGeometry(0, 960, 80, 80);
    promote_white_queen6->setGeometry(0, 960, 80, 80);
    promote_white_queen7->setGeometry(0, 960, 80, 80);
    promote_white_queen8->setGeometry(0, 960, 80, 80);
}

void MainWindow::set_chess_edit() {
    black_rook1->setGeometry(680, 0, 80, 80);//pos & size
    black_knight1->setGeometry(680, 80, 80, 80);
    black_bishop1->setGeometry(680, 160, 80, 80);
    black_queen->setGeometry(680, 240, 80, 80);
    black_king->setGeometry(680, 320, 80, 80);
    black_bishop2->setGeometry(680, 400, 80, 80);
    black_knight2->setGeometry(680, 480, 80, 80);
    black_rook2->setGeometry(680, 560, 80, 80);
    black_pawn1->setGeometry(760, 0, 80, 80);
    black_pawn2->setGeometry(760, 80, 80, 80);
    black_pawn3->setGeometry(760, 160, 80, 80);
    black_pawn4->setGeometry(760, 240, 80, 80);
    black_pawn5->setGeometry(760, 320, 80, 80);
    black_pawn6->setGeometry(760, 400, 80, 80);
    black_pawn7->setGeometry(760, 480, 80, 80);
    black_pawn8->setGeometry(760, 560, 80, 80);
    white_pawn1->setGeometry(920, 0, 80, 80);
    white_pawn2->setGeometry(920, 80, 80, 80);
    white_pawn3->setGeometry(920, 160, 80, 80);
    white_pawn4->setGeometry(920, 240, 80, 80);
    white_pawn5->setGeometry(920, 320, 80, 80);
    white_pawn6->setGeometry(920, 400, 80, 80);
    white_pawn7->setGeometry(920, 480, 80, 80);
    white_pawn8->setGeometry(920, 560, 80, 80);
    white_rook1->setGeometry(840, 0, 80, 80);
    white_knight1->setGeometry(840, 80, 80, 80);
    white_bishop1->setGeometry(840, 160, 80, 80);
    white_queen->setGeometry(840, 240, 80, 80);
    white_king->setGeometry(840, 320, 80, 80);
    white_bishop2->setGeometry(840, 400, 80, 80);
    white_knight2->setGeometry(840, 480, 80, 80);
    white_rook2->setGeometry(840, 560, 80, 80);
    promote_black_queen1->setGeometry(0, 960, 80, 80);
    promote_black_queen2->setGeometry(0, 960, 80, 80);
    promote_black_queen3->setGeometry(0, 960, 80, 80);
    promote_black_queen4->setGeometry(0, 960, 80, 80);
    promote_black_queen5->setGeometry(0, 960, 80, 80);
    promote_black_queen6->setGeometry(0, 960, 80, 80);
    promote_black_queen7->setGeometry(0, 960, 80, 80);
    promote_black_queen8->setGeometry(0, 960, 80, 80);
    promote_white_queen1->setGeometry(0, 960, 80, 80);
    promote_white_queen2->setGeometry(0, 960, 80, 80);
    promote_white_queen3->setGeometry(0, 960, 80, 80);
    promote_white_queen4->setGeometry(0, 960, 80, 80);
    promote_white_queen5->setGeometry(0, 960, 80, 80);
    promote_white_queen6->setGeometry(0, 960, 80, 80);
    promote_white_queen7->setGeometry(0, 960, 80, 80);
    promote_white_queen8->setGeometry(0, 960, 80, 80);
}

void MainWindow::set_promote_b(QPushButton *what, QPushButton *can_move) {
    set(what);
    what->setGeometry(can_move->x(), can_move->y(), 80, 80);
    what->setIcon(QIcon(":/pic/black_queen.png"));
}

void MainWindow::set_promote_w(QPushButton *what, QPushButton *can_move) {
    set(what);
    what->setGeometry(can_move->x(), can_move->y(), 80, 80);
    what->setIcon(QIcon(":/pic/white_queen.png"));
}

void MainWindow::set_hide() {
    move_up1->hide();
    move_up2->hide();
    move_up3->hide();
    move_up4->hide();
    move_up5->hide();
    move_up6->hide();
    move_up7->hide();
    move_down1->hide();
    move_down2->hide();
    move_down3->hide();
    move_down4->hide();
    move_down5->hide();
    move_down6->hide();
    move_down7->hide();
    move_left1->hide();
    move_left2->hide();
    move_left3->hide();
    move_left4->hide();
    move_left5->hide();
    move_left6->hide();
    move_left7->hide();
    move_right1->hide();
    move_right2->hide();
    move_right3->hide();
    move_right4->hide();
    move_right5->hide();
    move_right6->hide();
    move_right7->hide();
    move_left_up1->hide();
    move_left_up2->hide();
    move_left_up3->hide();
    move_left_up4->hide();
    move_left_up5->hide();
    move_left_up6->hide();
    move_left_up7->hide();
    move_left_down1->hide();
    move_left_down2->hide();
    move_left_down3->hide();
    move_left_down4->hide();
    move_left_down5->hide();
    move_left_down6->hide();
    move_left_down7->hide();
    move_right_up1->hide();
    move_right_up2->hide();
    move_right_up3->hide();
    move_right_up4->hide();
    move_right_up5->hide();
    move_right_up6->hide();
    move_right_up7->hide();
    move_right_down1->hide();
    move_right_down2->hide();
    move_right_down3->hide();
    move_right_down4->hide();
    move_right_down5->hide();
    move_right_down6->hide();
    move_right_down7->hide();
    move_left_up_up->hide();
    move_left_up_left->hide();
    move_left_down_down->hide();
    move_left_down_left->hide();
    move_right_up_up->hide();
    move_right_up_right->hide();
    move_right_down_down->hide();
    move_right_down_right->hide();
    new_black_rook1->hide();
    new_black_knight1->hide();
    new_black_bishop1->hide();
    new_black_queen->hide();
    new_black_king->hide();
    new_black_bishop2->hide();
    new_black_knight2->hide();
    new_black_rook2->hide();
    new_black_pawn1->hide();
    new_black_pawn2->hide();
    new_black_pawn3->hide();
    new_black_pawn4->hide();
    new_black_pawn5->hide();
    new_black_pawn6->hide();
    new_black_pawn7->hide();
    new_black_pawn8->hide();
    new_white_pawn1->hide();
    new_white_pawn2->hide();
    new_white_pawn3->hide();
    new_white_pawn4->hide();
    new_white_pawn5->hide();
    new_white_pawn6->hide();
    new_white_pawn7->hide();
    new_white_pawn8->hide();
    new_white_rook1->hide();
    new_white_knight1->hide();
    new_white_bishop1->hide();
    new_white_queen->hide();
    new_white_king->hide();
    new_white_bishop2->hide();
    new_white_knight2->hide();
    new_white_rook2->hide();
    new_promote_black_queen1->hide();
    new_promote_black_queen2->hide();
    new_promote_black_queen3->hide();
    new_promote_black_queen4->hide();
    new_promote_black_queen5->hide();
    new_promote_black_queen6->hide();
    new_promote_black_queen7->hide();
    new_promote_black_queen8->hide();
    new_promote_white_queen1->hide();
    new_promote_white_queen2->hide();
    new_promote_white_queen3->hide();
    new_promote_white_queen4->hide();
    new_promote_white_queen5->hide();
    new_promote_white_queen6->hide();
    new_promote_white_queen7->hide();
    new_promote_white_queen8->hide();
}

void MainWindow::set_move(QPushButton *what_chess)
{
    if(n >= 17 && n <= 24) { //17 ~ 24 is white_pawn
        set_move_up1(what_chess);
        set_move_up2(what_chess);
        set_move_left_up1(what_chess);
        set_move_right_up1(what_chess);
    }
    if(n >= 9 && n <= 16) { //9 ~ 16 is black_pawn
        set_move_down1(what_chess);
        set_move_down2(what_chess);
        set_move_left_down1(what_chess);
        set_move_right_down1(what_chess);
    }
    if(n == 5 || n == 29) { //king can move small + and small x
        set_move_up1(what_chess);
        set_move_down1(what_chess);
        set_move_left1(what_chess);
        set_move_left2(what_chess); //castling
        set_move_left3(what_chess); //check nothing
        set_move_right1(what_chess);
        set_move_right2(what_chess); //castling
        set_move_left_up1(what_chess);
        set_move_left_down1(what_chess);
        set_move_right_up1(what_chess);
        set_move_right_down1(what_chess);
    }
    if(n == 1 || n == 4 || n == 8 || n == 25 || n == 28 || n == 32 || (n >= 33 && n <= 48)) { //can move big +
        set_move_up1(what_chess);
        set_move_up2(what_chess);
        set_move_up3(what_chess);
        set_move_up4(what_chess);
        set_move_up5(what_chess);
        set_move_up6(what_chess);
        set_move_up7(what_chess);
        set_move_down1(what_chess);
        set_move_down2(what_chess);
        set_move_down3(what_chess);
        set_move_down4(what_chess);
        set_move_down5(what_chess);
        set_move_down6(what_chess);
        set_move_down7(what_chess);
        set_move_left1(what_chess);
        set_move_left2(what_chess);
        set_move_left3(what_chess);
        set_move_left4(what_chess);
        set_move_left5(what_chess);
        set_move_left6(what_chess);
        set_move_left7(what_chess);
        set_move_right1(what_chess);
        set_move_right2(what_chess);
        set_move_right3(what_chess);
        set_move_right4(what_chess);
        set_move_right5(what_chess);
        set_move_right6(what_chess);
        set_move_right7(what_chess);
    }
    if(n == 3 || n == 4 || n == 6 || n == 27 || n == 28 || n == 30 || (n >= 33 && n <= 48)) { //can move big x
        set_move_left_up1(what_chess);
        set_move_left_up2(what_chess);
        set_move_left_up3(what_chess);
        set_move_left_up4(what_chess);
        set_move_left_up5(what_chess);
        set_move_left_up6(what_chess);
        set_move_left_up7(what_chess);
        set_move_left_down1(what_chess);
        set_move_left_down2(what_chess);
        set_move_left_down3(what_chess);
        set_move_left_down4(what_chess);
        set_move_left_down5(what_chess);
        set_move_left_down6(what_chess);
        set_move_left_down7(what_chess);
        set_move_right_up1(what_chess);
        set_move_right_up2(what_chess);
        set_move_right_up3(what_chess);
        set_move_right_up4(what_chess);
        set_move_right_up5(what_chess);
        set_move_right_up6(what_chess);
        set_move_right_up7(what_chess);
        set_move_right_down1(what_chess);
        set_move_right_down2(what_chess);
        set_move_right_down3(what_chess);
        set_move_right_down4(what_chess);
        set_move_right_down5(what_chess);
        set_move_right_down6(what_chess);
        set_move_right_down7(what_chess);
    }
    if(n == 2 || n == 7 || n == 26 || n == 31) { //knight
        set_move_left_up_up(what_chess);
        set_move_left_up_left(what_chess);
        set_move_left_down_down(what_chess);
        set_move_left_down_left(what_chess);
        set_move_right_up_up(what_chess);
        set_move_right_up_right(what_chess);
        set_move_right_down_down(what_chess);
        set_move_right_down_right(what_chess);
    }
}

void MainWindow::set_move_up1(QPushButton *what_chess)
{
    move_up1->setParent(this);
    move_up1->setGeometry(what_chess->x(), what_chess->y() - 80, 80, 80);
    move_up1->setStyleSheet("background-color:rgb(225, 110, 110);");
}

void MainWindow::set_move_up2(QPushButton *what_chess)
{
    move_up2->setParent(this);
    move_up2->setGeometry(what_chess->x(), what_chess->y() - 80 * 2, 80, 80);
    move_up2->setStyleSheet("background-color:rgb(225, 110, 110);");
}

void MainWindow::set_move_up3(QPushButton *what_chess)
{
    move_up3->setParent(this);
    move_up3->setGeometry(what_chess->x(), what_chess->y() - 80 * 3, 80, 80);
    move_up3->setStyleSheet("background-color:rgb(225, 110, 110);");
}

void MainWindow::set_move_up4(QPushButton *what_chess)
{
    move_up4->setParent(this);
    move_up4->setGeometry(what_chess->x(), what_chess->y() - 80 * 4, 80, 80);
    move_up4->setStyleSheet("background-color:rgb(225, 110, 110);");
}

void MainWindow::set_move_up5(QPushButton *what_chess)
{
    move_up5->setParent(this);
    move_up5->setGeometry(what_chess->x(), what_chess->y() - 80 * 5, 80, 80);
    move_up5->setStyleSheet("background-color:rgb(225, 110, 110);");
}

void MainWindow::set_move_up6(QPushButton *what_chess)
{
    move_up6->setParent(this);
    move_up6->setGeometry(what_chess->x(), what_chess->y() - 80 * 6, 80, 80);
    move_up6->setStyleSheet("background-color:rgb(225, 110, 110);");
}

void MainWindow::set_move_up7(QPushButton *what_chess)
{
    move_up7->setParent(this);
    move_up7->setGeometry(what_chess->x(), what_chess->y() - 80 * 7, 80, 80);
    move_up7->setStyleSheet("background-color:rgb(225, 110, 110);");
}

void MainWindow::set_move_down1(QPushButton *what_chess)
{
    move_down1->setParent(this);
    move_down1->setGeometry(what_chess->x(), what_chess->y() + 80, 80, 80);
    move_down1->setStyleSheet("background-color:rgb(225, 110, 110);");
}

void MainWindow::set_move_down2(QPushButton *what_chess)
{
    move_down2->setParent(this);
    move_down2->setGeometry(what_chess->x(), what_chess->y() + 80 * 2, 80, 80);
    move_down2->setStyleSheet("background-color:rgb(225, 110, 110);");
}

void MainWindow::set_move_down3(QPushButton *what_chess)
{
    move_down3->setParent(this);
    move_down3->setGeometry(what_chess->x(), what_chess->y() + 80 * 3, 80, 80);
    move_down3->setStyleSheet("background-color:rgb(225, 110, 110);");
}

void MainWindow::set_move_down4(QPushButton *what_chess)
{
    move_down4->setParent(this);
    move_down4->setGeometry(what_chess->x(), what_chess->y() + 80 * 4, 80, 80);
    move_down4->setStyleSheet("background-color:rgb(225, 110, 110);");
}

void MainWindow::set_move_down5(QPushButton *what_chess)
{
    move_down5->setParent(this);
    move_down5->setGeometry(what_chess->x(), what_chess->y() + 80 * 5, 80, 80);
    move_down5->setStyleSheet("background-color:rgb(225, 110, 110);");
}

void MainWindow::set_move_down6(QPushButton *what_chess)
{
    move_down6->setParent(this);
    move_down6->setGeometry(what_chess->x(), what_chess->y() + 80 * 6, 80, 80);
    move_down6->setStyleSheet("background-color:rgb(225, 110, 110);");
}

void MainWindow::set_move_down7(QPushButton *what_chess)
{
    move_down7->setParent(this);
    move_down7->setGeometry(what_chess->x(), what_chess->y() + 80 * 7, 80, 80);
    move_down7->setStyleSheet("background-color:rgb(225, 110, 110);");
}

void MainWindow::set_move_left1(QPushButton *what_chess)
{
    move_left1->setParent(this);
    move_left1->setGeometry(what_chess->x() - 80, what_chess->y(), 80, 80);
    move_left1->setStyleSheet("background-color:rgb(225, 110, 110);");
}

void MainWindow::set_move_left2(QPushButton *what_chess)
{
    move_left2->setParent(this);
    move_left2->setGeometry(what_chess->x() - 80 * 2, what_chess->y(), 80, 80);
    move_left2->setStyleSheet("background-color:rgb(225, 110, 110);");
}

void MainWindow::set_move_left3(QPushButton *what_chess)
{
    move_left3->setParent(this);
    move_left3->setGeometry(what_chess->x() - 80 * 3, what_chess->y(), 80, 80);
    move_left3->setStyleSheet("background-color:rgb(225, 110, 110);");
}

void MainWindow::set_move_left4(QPushButton *what_chess)
{
    move_left4->setParent(this);
    move_left4->setGeometry(what_chess->x() - 80 * 4, what_chess->y(), 80, 80);
    move_left4->setStyleSheet("background-color:rgb(225, 110, 110);");
}

void MainWindow::set_move_left5(QPushButton *what_chess)
{
    move_left5->setParent(this);
    move_left5->setGeometry(what_chess->x() - 80 * 5, what_chess->y(), 80, 80);
    move_left5->setStyleSheet("background-color:rgb(225, 110, 110);");
}

void MainWindow::set_move_left6(QPushButton *what_chess)
{
    move_left6->setParent(this);
    move_left6->setGeometry(what_chess->x() - 80 * 6, what_chess->y(), 80, 80);
    move_left6->setStyleSheet("background-color:rgb(225, 110, 110);");
}

void MainWindow::set_move_left7(QPushButton *what_chess)
{
    move_left7->setParent(this);
    move_left7->setGeometry(what_chess->x() - 80 * 7, what_chess->y(), 80, 80);
    move_left7->setStyleSheet("background-color:rgb(225, 110, 110);");
}

void MainWindow::set_move_right1(QPushButton *what_chess)
{
    move_right1->setParent(this);
    move_right1->setGeometry(what_chess->x() + 80, what_chess->y(), 80, 80);
    move_right1->setStyleSheet("background-color:rgb(225, 110, 110);");
}

void MainWindow::set_move_right2(QPushButton *what_chess)
{
    move_right2->setParent(this);
    move_right2->setGeometry(what_chess->x() + 80 * 2, what_chess->y(), 80, 80);
    move_right2->setStyleSheet("background-color:rgb(225, 110, 110);");
}

void MainWindow::set_move_right3(QPushButton *what_chess)
{
    move_right3->setParent(this);
    move_right3->setGeometry(what_chess->x() + 80 * 3, what_chess->y(), 80, 80);
    move_right3->setStyleSheet("background-color:rgb(225, 110, 110);");
}

void MainWindow::set_move_right4(QPushButton *what_chess)
{
    move_right4->setParent(this);
    move_right4->setGeometry(what_chess->x() + 80 * 4, what_chess->y(), 80, 80);
    move_right4->setStyleSheet("background-color:rgb(225, 110, 110);");
}

void MainWindow::set_move_right5(QPushButton *what_chess)
{
    move_right5->setParent(this);
    move_right5->setGeometry(what_chess->x() + 80 * 5, what_chess->y(), 80, 80);
    move_right5->setStyleSheet("background-color:rgb(225, 110, 110);");
}

void MainWindow::set_move_right6(QPushButton *what_chess)
{
    move_right6->setParent(this);
    move_right6->setGeometry(what_chess->x() + 80 * 6, what_chess->y(), 80, 80);
    move_right6->setStyleSheet("background-color:rgb(225, 110, 110);");
}

void MainWindow::set_move_right7(QPushButton *what_chess)
{
    move_right7->setParent(this);
    move_right7->setGeometry(what_chess->x() + 80 * 7, what_chess->y(), 80, 80);
    move_right7->setStyleSheet("background-color:rgb(225, 110, 110);");
}

void MainWindow::set_move_left_up1(QPushButton *what_chess)
{
    move_left_up1->setParent(this);
    move_left_up1->setGeometry(what_chess->x() - 80, what_chess->y() - 80, 80, 80);
    move_left_up1->setStyleSheet("background-color:rgb(225, 110, 110);");
}

void MainWindow::set_move_left_up2(QPushButton *what_chess)
{
    move_left_up2->setParent(this);
    move_left_up2->setGeometry(what_chess->x() - 80 * 2, what_chess->y() - 80 * 2, 80, 80);
    move_left_up2->setStyleSheet("background-color:rgb(225, 110, 110);");
}

void MainWindow::set_move_left_up3(QPushButton *what_chess)
{
    move_left_up3->setParent(this);
    move_left_up3->setGeometry(what_chess->x() - 80 * 3, what_chess->y() - 80 * 3, 80, 80);
    move_left_up3->setStyleSheet("background-color:rgb(225, 110, 110);");
}

void MainWindow::set_move_left_up4(QPushButton *what_chess)
{
    move_left_up4->setParent(this);
    move_left_up4->setGeometry(what_chess->x() - 80 * 4, what_chess->y() - 80 * 4, 80, 80);
    move_left_up4->setStyleSheet("background-color:rgb(225, 110, 110);");
}

void MainWindow::set_move_left_up5(QPushButton *what_chess)
{
    move_left_up5->setParent(this);
    move_left_up5->setGeometry(what_chess->x() - 80 * 5, what_chess->y() - 80 * 5, 80, 80);
    move_left_up5->setStyleSheet("background-color:rgb(225, 110, 110);");
}

void MainWindow::set_move_left_up6(QPushButton *what_chess)
{
    move_left_up6->setParent(this);
    move_left_up6->setGeometry(what_chess->x() - 80 * 6, what_chess->y() - 80 * 6, 80, 80);
    move_left_up6->setStyleSheet("background-color:rgb(225, 110, 110);");
}

void MainWindow::set_move_left_up7(QPushButton *what_chess)
{
    move_left_up7->setParent(this);
    move_left_up7->setGeometry(what_chess->x() - 80 * 7, what_chess->y() - 80 * 7, 80, 80);
    move_left_up7->setStyleSheet("background-color:rgb(225, 110, 110);");
}

void MainWindow::set_move_left_down1(QPushButton *what_chess)
{
    move_left_down1->setParent(this);
    move_left_down1->setGeometry(what_chess->x() - 80, what_chess->y() + 80, 80, 80);
    move_left_down1->setStyleSheet("background-color:rgb(225, 110, 110);");
}

void MainWindow::set_move_left_down2(QPushButton *what_chess)
{
    move_left_down2->setParent(this);
    move_left_down2->setGeometry(what_chess->x() - 80 * 2, what_chess->y() + 80 * 2, 80, 80);
    move_left_down2->setStyleSheet("background-color:rgb(225, 110, 110);");
}

void MainWindow::set_move_left_down3(QPushButton *what_chess)
{
    move_left_down3->setParent(this);
    move_left_down3->setGeometry(what_chess->x() - 80 * 3, what_chess->y() + 80 * 3, 80, 80);
    move_left_down3->setStyleSheet("background-color:rgb(225, 110, 110);");
}

void MainWindow::set_move_left_down4(QPushButton *what_chess)
{
    move_left_down4->setParent(this);
    move_left_down4->setGeometry(what_chess->x() - 80 * 4, what_chess->y() + 80 * 4, 80, 80);
    move_left_down4->setStyleSheet("background-color:rgb(225, 110, 110);");
}

void MainWindow::set_move_left_down5(QPushButton *what_chess)
{
    move_left_down5->setParent(this);
    move_left_down5->setGeometry(what_chess->x() - 80 * 5, what_chess->y() + 80 * 5, 80, 80);
    move_left_down5->setStyleSheet("background-color:rgb(225, 110, 110);");
}

void MainWindow::set_move_left_down6(QPushButton *what_chess)
{
    move_left_down6->setParent(this);
    move_left_down6->setGeometry(what_chess->x() - 80 * 6, what_chess->y() + 80 * 6, 80, 80);
    move_left_down6->setStyleSheet("background-color:rgb(225, 110, 110);");
}

void MainWindow::set_move_left_down7(QPushButton *what_chess)
{
    move_left_down7->setParent(this);
    move_left_down7->setGeometry(what_chess->x() - 80 * 7, what_chess->y() + 80 * 7, 80, 80);
    move_left_down7->setStyleSheet("background-color:rgb(225, 110, 110);");
}

void MainWindow::set_move_right_up1(QPushButton *what_chess)
{
    move_right_up1->setParent(this);
    move_right_up1->setGeometry(what_chess->x() + 80, what_chess->y() - 80, 80, 80);
    move_right_up1->setStyleSheet("background-color:rgb(225, 110, 110);");
}

void MainWindow::set_move_right_up2(QPushButton *what_chess)
{
    move_right_up2->setParent(this);
    move_right_up2->setGeometry(what_chess->x() + 80 * 2, what_chess->y() - 80 * 2, 80, 80);
    move_right_up2->setStyleSheet("background-color:rgb(225, 110, 110);");
}

void MainWindow::set_move_right_up3(QPushButton *what_chess)
{
    move_right_up3->setParent(this);
    move_right_up3->setGeometry(what_chess->x() + 80 * 3, what_chess->y() - 80 * 3, 80, 80);
    move_right_up3->setStyleSheet("background-color:rgb(225, 110, 110);");
}

void MainWindow::set_move_right_up4(QPushButton *what_chess)
{
    move_right_up4->setParent(this);
    move_right_up4->setGeometry(what_chess->x() + 80 * 4, what_chess->y() - 80 * 4, 80, 80);
    move_right_up4->setStyleSheet("background-color:rgb(225, 110, 110);");
}

void MainWindow::set_move_right_up5(QPushButton *what_chess)
{
    move_right_up5->setParent(this);
    move_right_up5->setGeometry(what_chess->x() + 80 * 5, what_chess->y() - 80 * 5, 80, 80);
    move_right_up5->setStyleSheet("background-color:rgb(225, 110, 110);");
}

void MainWindow::set_move_right_up6(QPushButton *what_chess)
{
    move_right_up6->setParent(this);
    move_right_up6->setGeometry(what_chess->x() + 80 * 6, what_chess->y() - 80 * 6, 80, 80);
    move_right_up6->setStyleSheet("background-color:rgb(225, 110, 110);");
}

void MainWindow::set_move_right_up7(QPushButton *what_chess)
{
    move_right_up7->setParent(this);
    move_right_up7->setGeometry(what_chess->x() + 80 * 7, what_chess->y() - 80 * 7, 80, 80);
    move_right_up7->setStyleSheet("background-color:rgb(225, 110, 110);");
}

void MainWindow::set_move_right_down1(QPushButton *what_chess)
{
    move_right_down1->setParent(this);
    move_right_down1->setGeometry(what_chess->x() + 80, what_chess->y() + 80, 80, 80);
    move_right_down1->setStyleSheet("background-color:rgb(225, 110, 110);");
}

void MainWindow::set_move_right_down2(QPushButton *what_chess)
{
    move_right_down2->setParent(this);
    move_right_down2->setGeometry(what_chess->x() + 80 * 2, what_chess->y() + 80 * 2, 80, 80);
    move_right_down2->setStyleSheet("background-color:rgb(225, 110, 110);");
}

void MainWindow::set_move_right_down3(QPushButton *what_chess)
{
    move_right_down3->setParent(this);
    move_right_down3->setGeometry(what_chess->x() + 80 * 3, what_chess->y() + 80 * 3, 80, 80);
    move_right_down3->setStyleSheet("background-color:rgb(225, 110, 110);");
}

void MainWindow::set_move_right_down4(QPushButton *what_chess)
{
    move_right_down4->setParent(this);
    move_right_down4->setGeometry(what_chess->x() + 80 * 4, what_chess->y() + 80 * 4, 80, 80);
    move_right_down4->setStyleSheet("background-color:rgb(225, 110, 110);");
}

void MainWindow::set_move_right_down5(QPushButton *what_chess)
{
    move_right_down5->setParent(this);
    move_right_down5->setGeometry(what_chess->x() + 80 * 5, what_chess->y() + 80 * 5, 80, 80);
    move_right_down5->setStyleSheet("background-color:rgb(225, 110, 110);");
}

void MainWindow::set_move_right_down6(QPushButton *what_chess)
{
    move_right_down6->setParent(this);
    move_right_down6->setGeometry(what_chess->x() + 80 * 6, what_chess->y() + 80 * 6, 80, 80);
    move_right_down6->setStyleSheet("background-color:rgb(225, 110, 110);");
}

void MainWindow::set_move_right_down7(QPushButton *what_chess)
{
    move_right_down7->setParent(this);
    move_right_down7->setGeometry(what_chess->x() + 80 * 7, what_chess->y() + 80 * 7, 80, 80);
    move_right_down7->setStyleSheet("background-color:rgb(225, 110, 110);");
}

void MainWindow::set_move_left_up_up(QPushButton *what_chess)
{
    move_left_up_up->setParent(this);
    move_left_up_up->setGeometry(what_chess->x() - 80, what_chess->y() - 80 * 2, 80, 80);
    move_left_up_up->setStyleSheet("background-color:rgb(225, 110, 110);");
}

void MainWindow::set_move_left_up_left(QPushButton *what_chess)
{
    move_left_up_left->setParent(this);
    move_left_up_left->setGeometry(what_chess->x() - 80 * 2, what_chess->y() - 80, 80, 80);
    move_left_up_left->setStyleSheet("background-color:rgb(225, 110, 110);");
}

void MainWindow::set_move_left_down_down(QPushButton *what_chess)
{
    move_left_down_down->setParent(this);
    move_left_down_down->setGeometry(what_chess->x() - 80, what_chess->y() + 80 * 2, 80, 80);
    move_left_down_down->setStyleSheet("background-color:rgb(225, 110, 110);");
}

void MainWindow::set_move_left_down_left(QPushButton *what_chess)
{
    move_left_down_left->setParent(this);
    move_left_down_left->setGeometry(what_chess->x() - 80 * 2, what_chess->y() + 80, 80, 80);
    move_left_down_left->setStyleSheet("background-color:rgb(225, 110, 110);");
}

void MainWindow::set_move_right_up_up(QPushButton *what_chess)
{
    move_right_up_up->setParent(this);
    move_right_up_up->setGeometry(what_chess->x() + 80, what_chess->y() - 80 * 2, 80, 80);
    move_right_up_up->setStyleSheet("background-color:rgb(225, 110, 110);");
}

void MainWindow::set_move_right_up_right(QPushButton *what_chess)
{
    move_right_up_right->setParent(this);
    move_right_up_right->setGeometry(what_chess->x() + 80 * 2, what_chess->y() - 80, 80, 80);
    move_right_up_right->setStyleSheet("background-color:rgb(225, 110, 110);");
}

void MainWindow::set_move_right_down_down(QPushButton *what_chess)
{
    move_right_down_down->setParent(this);
    move_right_down_down->setGeometry(what_chess->x() + 80, what_chess->y() + 80 * 2, 80, 80);
    move_right_down_down->setStyleSheet("background-color:rgb(225, 110, 110);");
}

void MainWindow::set_move_right_down_right(QPushButton *what_chess)
{
    move_right_down_right->setParent(this);
    move_right_down_right->setGeometry(what_chess->x() + 80 * 2, what_chess->y() + 80, 80, 80);
    move_right_down_right->setStyleSheet("background-color:rgb(225, 110, 110);");
}

void MainWindow::to_show_can_move(int n)
{
    if(n >= 17 && n <= 24) {
        want_eat(move_left_up1, n);
        want_eat(move_right_up1, n);
        if(nothing(move_up1) == true) {move_up1->show();}
        if((n == 17 && white_pawn1->y() == 480) || (n == 18 && white_pawn2->y() == 480) || (n == 19 && white_pawn3->y() == 480)
        || (n == 20 && white_pawn4->y() == 480) || (n == 21 && white_pawn5->y() == 480) || (n == 22 && white_pawn6->y() == 480)
        || (n == 23 && white_pawn7->y() == 480) || (n == 24 && white_pawn8->y() == 480)) {
            if(nothing(move_up1) == true && nothing(move_up2) == true) {move_up2->show();}
        }
    }

    if(n >= 9 && n <= 16) {
        want_eat(move_left_down1, n);
        want_eat(move_right_down1, n);
        if(nothing(move_down1) == true) {move_down1->show();}
        if((n == 9 && black_pawn1->y() == 80) || (n == 10 && black_pawn2->y() == 80) || (n == 11 && black_pawn3->y() == 80)
        || (n == 12 && black_pawn4->y() == 80) || (n == 13 && black_pawn5->y() == 80) || (n == 14 && black_pawn6->y() == 80)
        || (n == 15 && black_pawn7->y() == 80) || (n == 16 && black_pawn8->y() == 80)) {
            if(nothing(move_down1) == true && nothing(move_down2) == true) {move_down2->show();}
        }
    }

    if(n == 5 || n == 29) {
        want_eat(move_up1, n);
        if(nothing(move_up1) == true) {move_up1->show();}
        want_eat(move_down1, n);
        if(nothing(move_down1) == true) {move_down1->show();}
        want_eat(move_left1, n);
        if(nothing(move_left1) == true) {move_left1->show();}

        want_eat(move_right1, n);
        if(nothing(move_right1) == true) {move_right1->show();}
        want_eat(move_left_up1, n);
        if(nothing(move_left_up1) == true) {move_left_up1->show();}
        want_eat(move_left_down1, n);
        if(nothing(move_left_down1) == true) {move_left_down1->show();}
        want_eat(move_right_up1, n);
        if(nothing(move_right_up1) == true) {move_right_up1->show();}
        want_eat(move_right_down1, n);
        if(nothing(move_right_down1) == true) {move_right_down1->show();}
        if(n == 5 && black_king->x() == 320 && black_king->y() == 0
        && ((black_rook1->x() == 0 && black_rook1->y() == 0) || (black_rook2->x() == 560 && black_rook2->y() == 0))) {
            if(nothing(move_left1) == true && nothing(move_left2) == true && nothing(move_left3) == true) {
                move_left2->show();}
            if(nothing(move_right1) == true && nothing(move_right2) == true) {
                move_right2->show();}
        }
        if(n == 29 && white_king->x() == 320 && white_king->y() == 560
        && ((white_rook1->x() == 0 && white_rook1->y() == 560) || (white_rook2->x() == 560 && white_rook2->y() == 560))) {
            if(nothing(move_left1) == true && nothing(move_left2) == true && nothing(move_left3) == true) {
                move_left2->show();}
            if(nothing(move_right1) == true && nothing(move_right2) == true) {
                move_right2->show();}
        }
    }

    if(n == 1 || n == 4 || n == 8 || n == 25 || n == 28 || n == 32 || (n >= 33 && n <= 48)) {
        want_eat(move_up1, n);
        if(nothing(move_up1) == true)
        {
            want_eat(move_up2, n);
            move_up1->show();
        }
        if(nothing(move_up1) == true && nothing(move_up2) == true)
        {
            want_eat(move_up3, n);
            move_up2->show();
        }
        if(nothing(move_up1) == true && nothing(move_up2) == true && nothing(move_up3) == true)
        {
            want_eat(move_up4, n);
            move_up3->show();}
        if(nothing(move_up1) == true && nothing(move_up2) == true && nothing(move_up3) == true
        && nothing(move_up4) == true)
        {
            want_eat(move_up5, n);
            move_up4->show();
        }
        if(nothing(move_up1) == true && nothing(move_up2) == true && nothing(move_up3) == true
        && nothing(move_up4) == true && nothing(move_up5) == true)
        {
            want_eat(move_up6, n);
            move_up5->show();}
        if(nothing(move_up1)
                == true && nothing(move_up2) == true && nothing(move_up3) == true
        && nothing(move_up4) == true && nothing(move_up5) == true && nothing(move_up6) == true)
        {
            want_eat(move_up7, n);
            move_up6->show();
        }
        if(nothing(move_up1) == true && nothing(move_up2) == true && nothing(move_up3) == true
        && nothing(move_up4) == true && nothing(move_up5) == true && nothing(move_up6) == true
        && nothing(move_up7) == true)
        {
            move_up7->show();
        }

        want_eat(move_down1, n);
        if(nothing(move_down1) == true)
        {
            want_eat(move_down2, n);
            move_down1->show();
        }
        if(nothing(move_down1) == true && nothing(move_down2) == true)
        {
            want_eat(move_down3, n);
            move_down2->show();
        }
        if(nothing(move_down1) == true && nothing(move_down2) == true && nothing(move_down3) == true)
        {
            want_eat(move_down4, n);
            move_down3->show();
        }
        if(nothing(move_down1) == true && nothing(move_down2) == true && nothing(move_down3) == true
        && nothing(move_down4) == true)
        {
            want_eat(move_down5, n);
            move_down4->show();
        }
        if(nothing(move_down1) == true && nothing(move_down2) == true && nothing(move_down3) == true
        && nothing(move_down4) == true && nothing(move_down5) == true)
        {
            want_eat(move_down6, n);
            move_down5->show();
        }
        if(nothing(move_down1) == true && nothing(move_down2) == true && nothing(move_down3) == true
        && nothing(move_down4) == true && nothing(move_down5) == true && nothing(move_down6) == true)
        {
            want_eat(move_down7, n);
            move_down6->show();
        }
        if(nothing(move_down1) == true && nothing(move_down2) == true && nothing(move_down3) == true
        && nothing(move_down4) == true && nothing(move_down5) == true && nothing(move_down6) == true
        && nothing(move_down7) == true)
        {
            move_down7->show();
        }

        want_eat(move_left1, n);
        if(nothing(move_left1) == true)
        {
            want_eat(move_left2, n);
            move_left1->show();
        }
        if(nothing(move_left1) == true && nothing(move_left2) == true)
        {
            want_eat(move_left3, n);
            move_left2->show();
        }
        if(nothing(move_left1) == true && nothing(move_left2) == true && nothing(move_left3) == true)
        {
            want_eat(move_left4, n);
            move_left3->show();
        }
        if(nothing(move_left1) == true && nothing(move_left2) == true && nothing(move_left3) == true
        && nothing(move_left4) == true)
        {
            want_eat(move_left5, n);
            move_left4->show();
        }
        if(nothing(move_left1) == true && nothing(move_left2) == true && nothing(move_left3) == true
        && nothing(move_left4) == true && nothing(move_left5) == true)
        {
            want_eat(move_left6, n);
            move_left5->show();
        }
        if(nothing(move_left1) == true && nothing(move_left2) == true && nothing(move_left3) == true
        && nothing(move_left4) == true && nothing(move_left5) == true && nothing(move_left6) == true)
        {
            want_eat(move_left7, n);
            move_left6->show();
        }
        if(nothing(move_left1) == true && nothing(move_left2) == true && nothing(move_left3) == true
        && nothing(move_left4) == true && nothing(move_left5) == true && nothing(move_left6) == true
        && nothing(move_left7) == true)
        {
            move_left7->show();
        }

        want_eat(move_right1, n);
        if(nothing(move_right1) == true)
        {
            want_eat(move_right2, n);
            move_right1->show();
        }

        if(nothing(move_right1) == true && nothing(move_right2) == true)
        {
            want_eat(move_right3, n);
            move_right2->show();
        }
        if(nothing(move_right1) == true && nothing(move_right2) == true && nothing(move_right3) == true)
        {
            want_eat(move_right4, n);
            move_right3->show();
        }
        if(nothing(move_right1) == true && nothing(move_right2) == true && nothing(move_right3) == true
        && nothing(move_right4) == true)
        {
            want_eat(move_right5, n);
            move_right4->show();
        }
        if(nothing(move_right1) == true && nothing(move_right2) == true && nothing(move_right3) == true
        && nothing(move_right4) == true && nothing(move_right5) == true)
        {
            want_eat(move_right6, n);
            move_right5->show();
        }
        if(nothing(move_right1) == true && nothing(move_right2) == true && nothing(move_right3) == true
        && nothing(move_right4) == true && nothing(move_right5) == true && nothing(move_right6) == true)
        {
            want_eat(move_right7, n);
            move_right6->show();
        }
        if(nothing(move_right1) == true && nothing(move_right2) == true && nothing(move_right3) == true
        && nothing(move_right4) == true && nothing(move_right5) == true && nothing(move_right6) == true
        && nothing(move_right7) == true)
        {
            move_right7->show();
        }
    }


    if(n == 3 || n == 4 || n == 6 || n == 27 || n == 28 || n == 30 || (n >= 33 && n <= 48)) {
        want_eat(move_left_up1, n);
        if(nothing(move_left_up1) == true)
        {
            want_eat(move_left_up2, n);
            move_left_up1->show();
        }
        if(nothing(move_left_up1) == true && nothing(move_left_up2) == true)
        {
            want_eat(move_left_up3, n);
            move_left_up2->show();
        }
        if(nothing(move_left_up1) == true && nothing(move_left_up2) == true && nothing(move_left_up3) == true)
        {
            want_eat(move_left_up4, n);
            move_left_up3->show();
        }
        if(nothing(move_left_up1) == true && nothing(move_left_up2) == true && nothing(move_left_up3) == true
        && nothing(move_left_up4) == true)
        {
            want_eat(move_left_up5, n);
            move_left_up4->show();
        }
        if(nothing(move_left_up1) == true && nothing(move_left_up2) == true && nothing(move_left_up3) == true
        && nothing(move_left_up4) == true && nothing(move_left_up5) == true)
        {
            want_eat(move_left_up6, n);
            move_left_up5->show();
        }
        if(nothing(move_left_up1) == true && nothing(move_left_up2) == true && nothing(move_left_up3) == true
        && nothing(move_left_up4) == true && nothing(move_left_up5) == true && nothing(move_left_up6) == true)
        {
            want_eat(move_left_up7, n);
            move_left_up6->show();
        }
        if(nothing(move_left_up1) == true && nothing(move_left_up2) == true && nothing(move_left_up3) == true
        && nothing(move_left_up4) == true && nothing(move_left_up5) == true && nothing(move_left_up6) == true
        && nothing(move_left_up7) == true)
        {
            move_left_up7->show();
        }

        want_eat(move_left_down1, n);
        if(nothing(move_left_down1) == true)
        {
            want_eat(move_left_down2, n);
            move_left_down1->show();
        }
        if(nothing(move_left_down1) == true && nothing(move_left_down2) == true)
        {
            want_eat(move_left_down3, n);
            move_left_down2->show();
        }
        if(nothing(move_left_down1) == true && nothing(move_left_down2) == true && nothing(move_left_down3) == true)
        {
            want_eat(move_left_down4, n);
            move_left_down3->show();
        }
        if(nothing(move_left_down1) == true && nothing(move_left_down2) == true && nothing(move_left_down3) == true
        && nothing(move_left_down4) == true)
        {
            want_eat(move_left_down5, n);
            move_left_down4->show();
        }
        if(nothing(move_left_down1) == true && nothing(move_left_down2) == true && nothing(move_left_down3) == true
        && nothing(move_left_down4) == true && nothing(move_left_down5) == true)
        {
            want_eat(move_left_down6, n);
            move_left_down5->show();
        }

        if(nothing(move_left_down1) == true && nothing(move_left_down2) == true && nothing(move_left_down3) == true
        && nothing(move_left_down4) == true && nothing(move_left_down5) == true && nothing(move_left_down6) == true)
        {
            want_eat(move_left_down7, n);
            move_left_down6->show();
        }
        if(nothing(move_left_down1) == true && nothing(move_left_down2) == true && nothing(move_left_down3) == true
        && nothing(move_left_down4) == true && nothing(move_left_down5) == true && nothing(move_left_down6) == true
        && nothing(move_left_down7) == true)
        {
            move_left_down7->show();
        }

        want_eat(move_right_up1, n);
        if(nothing(move_right_up1) == true)
        {
            want_eat(move_right_up2, n);
            move_right_up1->show();
        }
        if(nothing(move_right_up1) == true && nothing(move_right_up2) == true)
        {
             want_eat(move_right_up3, n);
            move_right_up2->show();
        }
        if(nothing(move_right_up1) == true && nothing(move_right_up2) == true && nothing(move_right_up3) == true)
        {
            want_eat(move_right_up4, n);
            move_right_up3->show();
        }
        if(nothing(move_right_up1) == true && nothing(move_right_up2) == true && nothing(move_right_up3) == true
        && nothing(move_right_up4) == true)
        {
            want_eat(move_right_up5, n);
            move_right_up4->show();
        }
        if(nothing(move_right_up1) == true && nothing(move_right_up2) == true && nothing(move_right_up3) == true
        && nothing(move_right_up4) == true && nothing(move_right_up5) == true)
        {
            want_eat(move_right_up6, n);
            move_right_up5->show();
        }
        if(nothing(move_right_up1) == true && nothing(move_right_up2) == true && nothing(move_right_up3) == true
        && nothing(move_right_up4) == true && nothing(move_right_up5) == true && nothing(move_right_up6) == true)
        {
            want_eat(move_right_up7, n);
            move_right_up6->show();
        }
        if(nothing(move_right_up1) == true && nothing(move_right_up2) == true && nothing(move_right_up3) == true
        && nothing(move_right_up4) == true && nothing(move_right_up5) == true && nothing(move_right_up6) == true
        && nothing(move_right_up7) == true)
        {
            move_right_up7->show();
        }

        want_eat(move_right_down1, n);
        if(nothing(move_right_down1) == true)
        {
            want_eat(move_right_down2, n);
            move_right_down1->show();
        }
        if(nothing(move_right_down1) == true && nothing(move_right_down2) == true)
        {
            want_eat(move_right_down3, n);
            move_right_down2->show();
        }
        if(nothing(move_right_down1) == true && nothing(move_right_down2) == true && nothing(move_right_down3) == true)
        {
            want_eat(move_right_down4, n);
            move_right_down3->show();
        }
        if(nothing(move_right_down1) == true && nothing(move_right_down2) == true && nothing(move_right_down3) == true
        && nothing(move_right_down4) == true)
        {
            want_eat(move_right_down5, n);
            move_right_down4->show();
        }
        if(nothing(move_right_down1) == true && nothing(move_right_down2) == true && nothing(move_right_down3) == true
        && nothing(move_right_down4) == true && nothing(move_right_down5) == true)
        {
            want_eat(move_right_down6, n);
            move_right_down5->show();
        }
        if(nothing(move_right_down1) == true && nothing(move_right_down2) == true && nothing(move_right_down3) == true
        && nothing(move_right_down4) == true && nothing(move_right_down6) == true)
        {
            want_eat(move_right_down7, n);
            move_right_down6->show();
        }
        if(nothing(move_right_down1) == true && nothing(move_right_down2) == true && nothing(move_right_down3) == true
        && nothing(move_right_down4) == true && nothing(move_right_down6) == true
        && nothing(move_right_down7) == true)

        {move_right_down7->show();
        }
    }

    if(n == 2 || n == 7 || n == 26 || n == 31) {
        want_eat(move_left_up_up, n);
        if(nothing(move_left_up_up) ==  true) {move_left_up_up->show();}
        want_eat(move_left_up_left, n);
        if(nothing(move_left_up_left) ==  true) {move_left_up_left->show();}
        want_eat(move_left_down_down, n);
        if(nothing(move_left_down_down) ==  true) {move_left_down_down->show();}
        want_eat(move_left_down_left, n);
        if(nothing(move_left_down_left) ==  true) {move_left_down_left->show();}
        want_eat(move_right_up_up, n);
        if(nothing(move_right_up_up) ==  true) {move_right_up_up->show();}
        want_eat(move_right_up_right, n);
        if(nothing(move_right_up_right) ==  true) {move_right_up_right->show();}
        want_eat(move_right_down_down, n);
        if(nothing(move_right_down_down) ==  true) {move_right_down_down->show();}
        want_eat(move_right_down_right, n);
        if(nothing(move_right_down_right) ==  true) {move_right_down_right->show();}
    }
}

bool MainWindow::nothing(QPushButton *can_move)
{
    if(can_move->x() < 0 || can_move->x() > 560 || can_move->y() < 0 || can_move->y() > 560) { //border
        return false;
    }
    if((black_rook1->x() == can_move->x() && black_rook1->y() == can_move->y())
    || (black_knight1->x() == can_move->x() && black_knight1->y() == can_move->y())
    || (black_bishop1->x() == can_move->x() && black_bishop1->y() == can_move->y())
    || (black_queen->x() == can_move->x() && black_queen->y() == can_move->y())
    || (black_king->x() == can_move->x() && black_king->y() == can_move->y())
    || (black_bishop2->x() == can_move->x() && black_bishop2->y() == can_move->y())
    || (black_knight2->x() == can_move->x() && black_knight2->y() == can_move->y())
    || (black_rook2->x() == can_move->x() && black_rook2->y() == can_move->y())
    || (black_pawn1->x() == can_move->x() && black_pawn1->y() == can_move->y())
    || (black_pawn2->x() == can_move->x() && black_pawn2->y() == can_move->y())
    || (black_pawn3->x() == can_move->x() && black_pawn3->y() == can_move->y())
    || (black_pawn4->x() == can_move->x() && black_pawn4->y() == can_move->y())
    || (black_pawn5->x() == can_move->x() && black_pawn5->y() == can_move->y())
    || (black_pawn6->x() == can_move->x() && black_pawn6->y() == can_move->y())
    || (black_pawn7->x() == can_move->x() && black_pawn7->y() == can_move->y())
    || (black_pawn8->x() == can_move->x() && black_pawn8->y() == can_move->y())
    || (white_pawn2->x() == can_move->x() && white_pawn2->y() == can_move->y())
    || (white_pawn3->x() == can_move->x() && white_pawn3->y() == can_move->y())
    || (white_pawn4->x() == can_move->x() && white_pawn4->y() == can_move->y())
    || (white_pawn5->x() == can_move->x() && white_pawn5->y() == can_move->y())
    || (white_pawn6->x() == can_move->x() && white_pawn6->y() == can_move->y())
    || (white_pawn7->x() == can_move->x() && white_pawn7->y() == can_move->y())
    || (white_pawn8->x() == can_move->x() && white_pawn8->y() == can_move->y())
    || (white_rook1->x() == can_move->x() && white_rook1->y() == can_move->y())
    || (white_knight1->x() == can_move->x() && white_knight1->y() == can_move->y())
    || (white_bishop1->x() == can_move->x() && white_bishop1->y() == can_move->y())
    || (white_queen->x() == can_move->x() && white_queen->y() == can_move->y())
    || (white_king->x() == can_move->x() && white_king->y() == can_move->y())
    || (white_bishop2->x() == can_move->x() && white_bishop2->y() == can_move->y())
    || (white_knight2->x() == can_move->x() && white_knight2->y() == can_move->y())
    || (white_rook2->x() == can_move->x() && white_rook2->y() == can_move->y())
    || (white_pawn1->x() == can_move->x() && white_pawn1->y() == can_move->y())
    || (promote_black_queen1->x() == can_move->x() && promote_black_queen1->y() == can_move->y())
    || (promote_black_queen2->x() == can_move->x() && promote_black_queen2->y() == can_move->y())
    || (promote_black_queen3->x() == can_move->x() && promote_black_queen3->y() == can_move->y())
    || (promote_black_queen4->x() == can_move->x() && promote_black_queen4->y() == can_move->y())
    || (promote_black_queen5->x() == can_move->x() && promote_black_queen5->y() == can_move->y())
    || (promote_black_queen6->x() == can_move->x() && promote_black_queen6->y() == can_move->y())
    || (promote_black_queen7->x() == can_move->x() && promote_black_queen7->y() == can_move->y())
    || (promote_black_queen8->x() == can_move->x() && promote_black_queen8->y() == can_move->y())
    || (promote_white_queen1->x() == can_move->x() && promote_white_queen1->y() == can_move->y())
    || (promote_white_queen2->x() == can_move->x() && promote_white_queen2->y() == can_move->y())
    || (promote_white_queen3->x() == can_move->x() && promote_white_queen3->y() == can_move->y())
    || (promote_white_queen4->x() == can_move->x() && promote_white_queen4->y() == can_move->y())
    || (promote_white_queen5->x() == can_move->x() && promote_white_queen5->y() == can_move->y())
    || (promote_white_queen6->x() == can_move->x() && promote_white_queen6->y() == can_move->y())
    || (promote_white_queen7->x() == can_move->x() && promote_white_queen7->y() == can_move->y())
    || (promote_white_queen8->x() == can_move->x() && promote_white_queen8->y() == can_move->y())) {
        return false;
    }
    return true;
}

void MainWindow::want_eat(QPushButton *can_move, int n)
{
    if((n >= 1 && n <= 16) || (n >= 33 && n <= 40)) {
        if(white_pawn1->x() == can_move->x() && white_pawn1->y() == can_move->y()) {
            new_white_pawn1->setParent(this);
            new_white_pawn1->setGeometry(white_pawn1->x(), white_pawn1->y(), 80, 80);
            new_white_pawn1->setIcon(QIcon(":/pic/white_pawn.png"));
            new_white_pawn1->setIconSize(QSize(60, 60));
            new_white_pawn1->setFlat(0);
            new_white_pawn1->setStyleSheet("background-color:rgb(225, 110, 110);");
            new_white_pawn1->show();
        }
        if(white_pawn2->x() == can_move->x() && white_pawn2->y() == can_move->y()) {
            new_white_pawn2->setParent(this);
            new_white_pawn2->setGeometry(white_pawn2->x(), white_pawn2->y(), 80, 80);
            new_white_pawn2->setIcon(QIcon(":/pic/white_pawn.png"));
            new_white_pawn2->setIconSize(QSize(60, 60));
            new_white_pawn2->setFlat(0);
            new_white_pawn2->setStyleSheet("background-color:rgb(225, 110, 110);");
            new_white_pawn2->show();
        }
        if(white_pawn3->x() == can_move->x() && white_pawn3->y() == can_move->y()) {
            new_white_pawn3->setParent(this);
            new_white_pawn3->setGeometry(white_pawn3->x(), white_pawn3->y(), 80, 80);
            new_white_pawn3->setIcon(QIcon(":/pic/white_pawn.png"));
            new_white_pawn3->setIconSize(QSize(60, 60));
            new_white_pawn3->setFlat(0);
            new_white_pawn3->setStyleSheet("background-color:rgb(225, 110, 110);");
            new_white_pawn3->show();
        }
        if(white_pawn4->x() == can_move->x() && white_pawn4->y() == can_move->y()) {
            new_white_pawn4->setParent(this);
            new_white_pawn4->setGeometry(white_pawn4->x(), white_pawn4->y(), 80, 80);
            new_white_pawn4->setIcon(QIcon(":/pic/white_pawn.png"));
            new_white_pawn4->setIconSize(QSize(60, 60));
            new_white_pawn4->setFlat(0);
            new_white_pawn4->setStyleSheet("background-color:rgb(225, 110, 110);");
            new_white_pawn4->show();
        }
        if(white_pawn5->x() == can_move->x() && white_pawn5->y() == can_move->y()) {
            new_white_pawn5->setParent(this);
            new_white_pawn5->setGeometry(white_pawn5->x(), white_pawn5->y(), 80, 80);
            new_white_pawn5->setIcon(QIcon(":/pic/white_pawn.png"));
            new_white_pawn5->setIconSize(QSize(60, 60));
            new_white_pawn5->setFlat(0);
            new_white_pawn5->setStyleSheet("background-color:rgb(225, 110, 110);");
            new_white_pawn5->show();
        }
        if(white_pawn6->x() == can_move->x() && white_pawn6->y() == can_move->y()) {
            new_white_pawn6->setParent(this);
            new_white_pawn6->setGeometry(white_pawn6->x(), white_pawn6->y(), 80, 80);
            new_white_pawn6->setIcon(QIcon(":/pic/white_pawn.png"));
            new_white_pawn6->setIconSize(QSize(60, 60));
            new_white_pawn6->setFlat(0);
            new_white_pawn6->setStyleSheet("background-color:rgb(225, 110, 110);");
            new_white_pawn6->show();
        }
        if(white_pawn7->x() == can_move->x() && white_pawn7->y() == can_move->y()) {
            new_white_pawn7->setParent(this);
            new_white_pawn7->setGeometry(white_pawn7->x(), white_pawn7->y(), 80, 80);
            new_white_pawn7->setIcon(QIcon(":/pic/white_pawn.png"));
            new_white_pawn7->setIconSize(QSize(60, 60));
            new_white_pawn7->setFlat(0);
            new_white_pawn7->setStyleSheet("background-color:rgb(225, 110, 110);");
            new_white_pawn7->show();
        }
        if(white_pawn8->x() == can_move->x() && white_pawn8->y() == can_move->y()) {
            new_white_pawn8->setParent(this);
            new_white_pawn8->setGeometry(white_pawn8->x(), white_pawn8->y(), 80, 80);
            new_white_pawn8->setIcon(QIcon(":/pic/white_pawn.png"));
            new_white_pawn8->setIconSize(QSize(60, 60));
            new_white_pawn8->setFlat(0);
            new_white_pawn8->setStyleSheet("background-color:rgb(225, 110, 110);");
            new_white_pawn8->show();
        }
        if(white_rook1->x() == can_move->x() && white_rook1->y() == can_move->y()) {
            new_white_rook1->setParent(this);
            new_white_rook1->setGeometry(white_rook1->x(), white_rook1->y(), 80, 80);
            new_white_rook1->setIcon(QIcon(":/pic/white_rook.png"));
            new_white_rook1->setIconSize(QSize(60, 60));
            new_white_rook1->setFlat(0);
            new_white_rook1->setStyleSheet("background-color:rgb(225, 110, 110);");
            new_white_rook1->show();
        }
        if(white_knight1->x() == can_move->x() && white_knight1->y() == can_move->y()) {
            new_white_knight1->setParent(this);
            new_white_knight1->setGeometry(white_knight1->x(), white_knight1->y(), 80, 80);
            new_white_knight1->setIcon(QIcon(":/pic/white_knight.png"));
            new_white_knight1->setIconSize(QSize(60, 60));
            new_white_knight1->setFlat(0);
            new_white_knight1->setStyleSheet("background-color:rgb(225, 110, 110);");
            new_white_knight1->show();
        }
        if(white_bishop1->x() == can_move->x() && white_bishop1->y() == can_move->y()) {
            new_white_bishop1->setParent(this);
            new_white_bishop1->setGeometry(white_bishop1->x(), white_bishop1->y(), 80, 80);
            new_white_bishop1->setIcon(QIcon(":/pic/white_bishop.png"));
            new_white_bishop1->setIconSize(QSize(60, 60));
            new_white_bishop1->setFlat(0);
            new_white_bishop1->setStyleSheet("background-color:rgb(225, 110, 110);");
            new_white_bishop1->show();
        }
        if(white_queen->x() == can_move->x() && white_queen->y() == can_move->y()) {
            new_white_queen->setParent(this);
            new_white_queen->setGeometry(white_queen->x(), white_queen->y(), 80, 80);
            new_white_queen->setIcon(QIcon(":/pic/white_queen.png"));
            new_white_queen->setIconSize(QSize(60, 60));
            new_white_queen->setFlat(0);
            new_white_queen->setStyleSheet("background-color:rgb(225, 110, 110);");
            new_white_queen->show();
        }
        if(white_king->x() == can_move->x() && white_king->y() == can_move->y()) {
            new_white_king->setParent(this);
            new_white_king->setGeometry(white_king->x(), white_king->y(), 80, 80);
            new_white_king->setIcon(QIcon(":/pic/white_king.png"));
            new_white_king->setIconSize(QSize(60, 60));
            new_white_king->setFlat(0);
            new_white_king->setStyleSheet("background-color:rgb(225, 110, 110);");
            new_white_king->show();
        }
        if(white_bishop2->x() == can_move->x() && white_bishop2->y() == can_move->y()) {
            new_white_bishop2->setParent(this);
            new_white_bishop2->setGeometry(white_bishop2->x(), white_bishop2->y(), 80, 80);
            new_white_bishop2->setIcon(QIcon(":/pic/white_bishop.png"));
            new_white_bishop2->setIconSize(QSize(60, 60));
            new_white_bishop2->setFlat(0);
            new_white_bishop2->setStyleSheet("background-color:rgb(225, 110, 110);");
            new_white_bishop2->show();
        }
        if(white_knight2->x() == can_move->x() && white_knight2->y() == can_move->y()) {
            new_white_knight2->setParent(this);
            new_white_knight2->setGeometry(white_knight2->x(), white_knight2->y(), 80, 80);
            new_white_knight2->setIcon(QIcon(":/pic/white_knight.png"));
            new_white_knight2->setIconSize(QSize(60, 60));
            new_white_knight2->setFlat(0);
            new_white_knight2->setStyleSheet("background-color:rgb(225, 110, 110);");
            new_white_knight2->show();
        }
        if(white_rook2->x() == can_move->x() && white_rook2->y() == can_move->y()) {
            new_white_rook2->setParent(this);
            new_white_rook2->setGeometry(white_rook2->x(), white_rook2->y(), 80, 80);
            new_white_rook2->setIcon(QIcon(":/pic/white_rook.png"));
            new_white_rook2->setIconSize(QSize(60, 60));
            new_white_rook2->setFlat(0);
            new_white_rook2->setStyleSheet("background-color:rgb(225, 110, 110);");
            new_white_rook2->show();
        }
        if(promote_white_queen1->x() == can_move->x() && promote_white_queen1->y() == can_move->y()) {
            new_promote_white_queen1->setParent(this);
            new_promote_white_queen1->setGeometry(promote_white_queen1->x(), promote_white_queen1->y(), 80, 80);
            new_promote_white_queen1->setIcon(QIcon(":/pic/white_queen.png"));
            new_promote_white_queen1->setIconSize(QSize(60, 60));
            new_promote_white_queen1->setFlat(0);
            new_promote_white_queen1->setStyleSheet("background-color:rgb(225, 110, 110);");
            new_promote_white_queen1->show();
        }
        if(promote_white_queen2->x() == can_move->x() && promote_white_queen2->y() == can_move->y()) {
            new_promote_white_queen2->setParent(this);
            new_promote_white_queen2->setGeometry(promote_white_queen2->x(), promote_white_queen2->y(), 80, 80);
            new_promote_white_queen2->setIcon(QIcon(":/pic/white_queen.png"));
            new_promote_white_queen2->setIconSize(QSize(60, 60));
            new_promote_white_queen2->setFlat(0);
            new_promote_white_queen2->setStyleSheet("background-color:rgb(225, 110, 110);");
            new_promote_white_queen2->show();
        }
        if(promote_white_queen3->x() == can_move->x() && promote_white_queen3->y() == can_move->y()) {
            new_promote_white_queen3->setParent(this);
            new_promote_white_queen3->setGeometry(promote_white_queen3->x(), promote_white_queen3->y(), 80, 80);
            new_promote_white_queen3->setIcon(QIcon(":/pic/white_queen.png"));
            new_promote_white_queen3->setIconSize(QSize(60, 60));
            new_promote_white_queen3->setFlat(0);
            new_promote_white_queen3->setStyleSheet("background-color:rgb(225, 110, 110);");
            new_promote_white_queen3->show();
        }
        if(promote_white_queen4->x() == can_move->x() && promote_white_queen4->y() == can_move->y()) {
            new_promote_white_queen4->setParent(this);
            new_promote_white_queen4->setGeometry(promote_white_queen4->x(), promote_white_queen4->y(), 80, 80);
            new_promote_white_queen4->setIcon(QIcon(":/pic/white_queen.png"));
            new_promote_white_queen4->setIconSize(QSize(60, 60));
            new_promote_white_queen4->setFlat(0);
            new_promote_white_queen4->setStyleSheet("background-color:rgb(225, 110, 110);");
            new_promote_white_queen4->show();
        }
        if(promote_white_queen5->x() == can_move->x() && promote_white_queen5->y() == can_move->y()) {
            new_promote_white_queen5->setParent(this);
            new_promote_white_queen5->setGeometry(promote_white_queen5->x(), promote_white_queen5->y(), 80, 80);
            new_promote_white_queen5->setIcon(QIcon(":/pic/white_queen.png"));
            new_promote_white_queen5->setIconSize(QSize(60, 60));
            new_promote_white_queen5->setFlat(0);
            new_promote_white_queen5->setStyleSheet("background-color:rgb(225, 110, 110);");
            new_promote_white_queen5->show();
        }
        if(promote_white_queen6->x() == can_move->x() && promote_white_queen6->y() == can_move->y()) {
            new_promote_white_queen6->setParent(this);
            new_promote_white_queen6->setGeometry(promote_white_queen6->x(), promote_white_queen6->y(), 80, 80);
            new_promote_white_queen6->setIcon(QIcon(":/pic/white_queen.png"));
            new_promote_white_queen6->setIconSize(QSize(60, 60));
            new_promote_white_queen6->setFlat(0);
            new_promote_white_queen6->setStyleSheet("background-color:rgb(225, 110, 110);");
            new_promote_white_queen6->show();
        }
        if(promote_white_queen7->x() == can_move->x() && promote_white_queen7->y() == can_move->y()) {
            new_promote_white_queen7->setParent(this);
            new_promote_white_queen7->setGeometry(promote_white_queen7->x(), promote_white_queen7->y(), 80, 80);
            new_promote_white_queen7->setIcon(QIcon(":/pic/white_queen.png"));
            new_promote_white_queen7->setIconSize(QSize(60, 60));
            new_promote_white_queen7->setFlat(0);
            new_promote_white_queen7->setStyleSheet("background-color:rgb(225, 110, 110);");
            new_promote_white_queen7->show();
        }
        if(promote_white_queen8->x() == can_move->x() && promote_white_queen8->y() == can_move->y()) {
            new_promote_white_queen8->setParent(this);
            new_promote_white_queen8->setGeometry(promote_white_queen8->x(), promote_white_queen8->y(), 80, 80);
            new_promote_white_queen8->setIcon(QIcon(":/pic/white_queen.png"));
            new_promote_white_queen8->setIconSize(QSize(60, 60));
            new_promote_white_queen8->setFlat(0);
            new_promote_white_queen8->setStyleSheet("background-color:rgb(225, 110, 110);");
            new_promote_white_queen8->show();
        }
    }
    else if((n >= 17 && n <= 32)  || (n >= 41 && n < 48)) {
        if(black_rook1->x() == can_move->x() && black_rook1->y() == can_move->y()) {
            new_black_rook1->setParent(this);
            new_black_rook1->setGeometry(black_rook1->x(), black_rook1->y(), 80, 80);
            new_black_rook1->setIcon(QIcon(":/pic/black_rook.png"));
            new_black_rook1->setIconSize(QSize(60, 60));
            new_black_rook1->setFlat(0);
            new_black_rook1->setStyleSheet("background-color:rgb(225, 110, 110);");
            new_black_rook1->show();
        }
        if(black_knight1->x() == can_move->x() && black_knight1->y() == can_move->y()) {
            new_black_knight1->setParent(this);
            new_black_knight1->setGeometry(black_knight1->x(), black_knight1->y(), 80, 80);
            new_black_knight1->setIcon(QIcon(":/pic/black_knight.png"));
            new_black_knight1->setIconSize(QSize(60, 60));
            new_black_knight1->setFlat(0);
            new_black_knight1->setStyleSheet("background-color:rgb(225, 110, 110);");
            new_black_knight1->show();
        }
        if(black_bishop1->x() == can_move->x() && black_bishop1->y() == can_move->y()) {
            new_black_bishop1->setParent(this);
            new_black_bishop1->setGeometry(black_bishop1->x(), black_bishop1->y(), 80, 80);
            new_black_bishop1->setIcon(QIcon(":/pic/black_bishop.png"));
            new_black_bishop1->setIconSize(QSize(60, 60));
            new_black_bishop1->setFlat(0);
            new_black_bishop1->setStyleSheet("background-color:rgb(225, 110, 110);");
            new_black_bishop1->show();
        }
        if(black_queen->x() == can_move->x() && black_queen->y() == can_move->y()) {
            new_black_queen->setParent(this);
            new_black_queen->setGeometry(black_queen->x(), black_queen->y(), 80, 80);
            new_black_queen->setIcon(QIcon(":/pic/black_queen.png"));
            new_black_queen->setIconSize(QSize(60, 60));
            new_black_queen->setFlat(0);
            new_black_queen->setStyleSheet("background-color:rgb(225, 110, 110);");
            new_black_queen->show();
        }
        if(black_king->x() == can_move->x() && black_king->y() == can_move->y()) {
            new_black_king->setParent(this);
            new_black_king->setGeometry(black_king->x(), black_king->y(), 80, 80);
            new_black_king->setIcon(QIcon(":/pic/black_king.png"));
            new_black_king->setIconSize(QSize(60, 60));
            new_black_king->setFlat(0);
            new_black_king->setStyleSheet("background-color:rgb(225, 110, 110);");
            new_black_king->show();
        }
        if(black_bishop2->x() == can_move->x() && black_bishop2->y() == can_move->y()) {
            new_black_bishop2->setParent(this);
            new_black_bishop2->setGeometry(black_bishop2->x(), black_bishop2->y(), 80, 80);
            new_black_bishop2->setIcon(QIcon(":/pic/black_bishop.png"));
            new_black_bishop2->setIconSize(QSize(60, 60));
            new_black_bishop2->setFlat(0);
            new_black_bishop2->setStyleSheet("background-color:rgb(225, 110, 110);");
            new_black_bishop2->show();
        }
        if(black_knight2->x() == can_move->x() && black_knight2->y() == can_move->y()) {
            new_black_knight2->setParent(this);
            new_black_knight2->setGeometry(black_knight2->x(), black_knight2->y(), 80, 80);
            new_black_knight2->setIcon(QIcon(":/pic/black_knight.png"));
            new_black_knight2->setIconSize(QSize(60, 60));
            new_black_knight2->setFlat(0);
            new_black_knight2->setStyleSheet("background-color:rgb(225, 110, 110);");
            new_black_knight2->show();
        }
        if(black_rook2->x() == can_move->x() && black_rook2->y() == can_move->y()) {
            new_black_rook2->setParent(this);
            new_black_rook2->setGeometry(black_rook2->x(), black_rook2->y(), 80, 80);
            new_black_rook2->setIcon(QIcon(":/pic/black_rook.png"));
            new_black_rook2->setIconSize(QSize(60, 60));
            new_black_rook2->setFlat(0);
            new_black_rook2->setStyleSheet("background-color:rgb(225, 110, 110);");
            new_black_rook2->show();
        }
        if(black_pawn1->x() == can_move->x() && black_pawn1->y() == can_move->y()) {
            new_black_pawn1->setParent(this);
            new_black_pawn1->setGeometry(black_pawn1->x(), black_pawn1->y(), 80, 80);
            new_black_pawn1->setIcon(QIcon(":/pic/black_pawn.png"));
            new_black_pawn1->setIconSize(QSize(60, 60));
            new_black_pawn1->setFlat(0);
            new_black_pawn1->setStyleSheet("background-color:rgb(225, 110, 110);");
            new_black_pawn1->show();
        }
        if(black_pawn2->x() == can_move->x() && black_pawn2->y() == can_move->y()) {
            new_black_pawn2->setParent(this);
            new_black_pawn2->setGeometry(black_pawn2->x(), black_pawn2->y(), 80, 80);
            new_black_pawn2->setIcon(QIcon(":/pic/black_pawn.png"));
            new_black_pawn2->setIconSize(QSize(60, 60));
            new_black_pawn2->setFlat(0);
            new_black_pawn2->setStyleSheet("background-color:rgb(225, 110, 110);");
            new_black_pawn2->show();
        }
        if(black_pawn3->x() == can_move->x() && black_pawn3->y() == can_move->y()) {
            new_black_pawn3->setParent(this);
            new_black_pawn3->setGeometry(black_pawn3->x(), black_pawn3->y(), 80, 80);
            new_black_pawn3->setIcon(QIcon(":/pic/black_pawn.png"));
            new_black_pawn3->setIconSize(QSize(60, 60));
            new_black_pawn3->setFlat(0);
            new_black_pawn3->setStyleSheet("background-color:rgb(225, 110, 110);");
            new_black_pawn3->show();
        }
        if(black_pawn4->x() == can_move->x() && black_pawn4->y() == can_move->y()) {
            new_black_pawn4->setParent(this);
            new_black_pawn4->setGeometry(black_pawn4->x(), black_pawn4->y(), 80, 80);
            new_black_pawn4->setIcon(QIcon(":/pic/black_pawn.png"));
            new_black_pawn4->setIconSize(QSize(60, 60));
            new_black_pawn4->setFlat(0);
            new_black_pawn4->setStyleSheet("background-color:rgb(225, 110, 110);");
            new_black_pawn4->show();
        }
        if(black_pawn5->x() == can_move->x() && black_pawn5->y() == can_move->y()) {
            new_black_pawn5->setParent(this);
            new_black_pawn5->setGeometry(black_pawn5->x(), black_pawn5->y(), 80, 80);
            new_black_pawn5->setIcon(QIcon(":/pic/black_pawn.png"));
            new_black_pawn5->setIconSize(QSize(60, 60));
            new_black_pawn5->setFlat(0);
            new_black_pawn5->setStyleSheet("background-color:rgb(225, 110, 110);");
            new_black_pawn5->show();
        }
        if(black_pawn6->x() == can_move->x() && black_pawn6->y() == can_move->y()) {
            new_black_pawn6->setParent(this);
            new_black_pawn6->setGeometry(black_pawn6->x(), black_pawn6->y(), 80, 80);
            new_black_pawn6->setIcon(QIcon(":/pic/black_pawn.png"));
            new_black_pawn6->setIconSize(QSize(60, 60));
            new_black_pawn6->setFlat(0);
            new_black_pawn6->setStyleSheet("background-color:rgb(225, 110, 110);");
            new_black_pawn6->show();
        }
        if(black_pawn7->x() == can_move->x() && black_pawn7->y() == can_move->y()) {
            new_black_pawn7->setParent(this);
            new_black_pawn7->setGeometry(black_pawn7->x(), black_pawn7->y(), 80, 80);
            new_black_pawn7->setIcon(QIcon(":/pic/black_pawn.png"));
            new_black_pawn7->setIconSize(QSize(60, 60));
            new_black_pawn7->setFlat(0);
            new_black_pawn7->setStyleSheet("background-color:rgb(225, 110, 110);");
            new_black_pawn7->show();
        }
        if(black_pawn8->x() == can_move->x() && black_pawn8->y() == can_move->y()) {
            new_black_pawn8->setParent(this);
            new_black_pawn8->setGeometry(black_pawn8->x(), black_pawn8->y(), 80, 80);
            new_black_pawn8->setIcon(QIcon(":/pic/black_pawn.png"));
            new_black_pawn8->setIconSize(QSize(60, 60));
            new_black_pawn8->setFlat(0);
            new_black_pawn8->setStyleSheet("background-color:rgb(225, 110, 110);");
            new_black_pawn8->show();
        }
        if(promote_black_queen1->x() == can_move->x() && promote_black_queen1->y() == can_move->y()) {
            new_promote_black_queen1->setParent(this);
            new_promote_black_queen1->setGeometry(promote_black_queen1->x(), promote_black_queen1->y(), 80, 80);
            new_promote_black_queen1->setIcon(QIcon(":/pic/black_queen.png"));
            new_promote_black_queen1->setIconSize(QSize(60, 60));
            new_promote_black_queen1->setFlat(0);
            new_promote_black_queen1->setStyleSheet("background-color:rgb(225, 110, 110);");
            new_promote_black_queen1->show();
        }
        if(promote_black_queen2->x() == can_move->x() && promote_black_queen2->y() == can_move->y()) {
            new_promote_black_queen2->setParent(this);
            new_promote_black_queen2->setGeometry(promote_black_queen2->x(), promote_black_queen2->y(), 80, 80);
            new_promote_black_queen2->setIcon(QIcon(":/pic/black_queen.png"));
            new_promote_black_queen2->setIconSize(QSize(60, 60));
            new_promote_black_queen2->setFlat(0);
            new_promote_black_queen2->setStyleSheet("background-color:rgb(225, 110, 110);");
            new_promote_black_queen2->show();
        }
        if(promote_black_queen3->x() == can_move->x() && promote_black_queen3->y() == can_move->y()) {
            new_promote_black_queen3->setParent(this);
            new_promote_black_queen3->setGeometry(promote_black_queen3->x(), promote_black_queen3->y(), 80, 80);
            new_promote_black_queen3->setIcon(QIcon(":/pic/black_queen.png"));
            new_promote_black_queen3->setIconSize(QSize(60, 60));
            new_promote_black_queen3->setFlat(0);
            new_promote_black_queen3->setStyleSheet("background-color:rgb(225, 110, 110);");
            new_promote_black_queen3->show();
        }
        if(promote_black_queen4->x() == can_move->x() && promote_black_queen4->y() == can_move->y()) {
            new_promote_black_queen4->setParent(this);
            new_promote_black_queen4->setGeometry(promote_black_queen4->x(), promote_black_queen4->y(), 80, 80);
            new_promote_black_queen4->setIcon(QIcon(":/pic/black_queen.png"));
            new_promote_black_queen4->setIconSize(QSize(60, 60));
            new_promote_black_queen4->setFlat(0);
            new_promote_black_queen4->setStyleSheet("background-color:rgb(225, 110, 110);");
            new_promote_black_queen4->show();
        }
        if(promote_black_queen5->x() == can_move->x() && promote_black_queen5->y() == can_move->y()) {
            new_promote_black_queen5->setParent(this);
            new_promote_black_queen5->setGeometry(promote_black_queen5->x(), promote_black_queen5->y(), 80, 80);
            new_promote_black_queen5->setIcon(QIcon(":/pic/black_queen.png"));
            new_promote_black_queen5->setIconSize(QSize(60, 60));
            new_promote_black_queen5->setFlat(0);
            new_promote_black_queen5->setStyleSheet("background-color:rgb(225, 110, 110);");
            new_promote_black_queen5->show();
        }
        if(promote_black_queen6->x() == can_move->x() && promote_black_queen6->y() == can_move->y()) {
            new_promote_black_queen6->setParent(this);
            new_promote_black_queen6->setGeometry(promote_black_queen6->x(), promote_black_queen6->y(), 80, 80);
            new_promote_black_queen6->setIcon(QIcon(":/pic/black_queen.png"));
            new_promote_black_queen6->setIconSize(QSize(60, 60));
            new_promote_black_queen6->setFlat(0);
            new_promote_black_queen6->setStyleSheet("background-color:rgb(225, 110, 110);");
            new_promote_black_queen6->show();
        }
        if(promote_black_queen7->x() == can_move->x() && promote_black_queen7->y() == can_move->y()) {
            new_promote_black_queen7->setParent(this);
            new_promote_black_queen7->setGeometry(promote_black_queen7->x(), promote_black_queen7->y(), 80, 80);
            new_promote_black_queen7->setIcon(QIcon(":/pic/black_queen.png"));
            new_promote_black_queen7->setIconSize(QSize(60, 60));
            new_promote_black_queen7->setFlat(0);
            new_promote_black_queen7->setStyleSheet("background-color:rgb(225, 110, 110);");
            new_promote_black_queen7->show();
        }
        if(promote_black_queen8->x() == can_move->x() && promote_black_queen8->y() == can_move->y()) {
            new_promote_black_queen8->setParent(this);
            new_promote_black_queen8->setGeometry(promote_black_queen8->x(), promote_black_queen8->y(), 80, 80);
            new_promote_black_queen8->setIcon(QIcon(":/pic/black_queen.png"));
            new_promote_black_queen8->setIconSize(QSize(60, 60));
            new_promote_black_queen8->setFlat(0);
            new_promote_black_queen8->setStyleSheet("background-color:rgb(225, 110, 110);");
            new_promote_black_queen8->show();
        }
    }
}

void MainWindow::to_eat(QPushButton *can_eat, int n) {
    if(n == 1){black_rook1->move(can_eat->x(), can_eat->y());}
    if(n == 2){black_knight1->move(can_eat->x(), can_eat->y());}
    if(n == 3){black_bishop1->move(can_eat->x(), can_eat->y());}
    if(n == 4){black_queen->move(can_eat->x(), can_eat->y());}
    if(n == 5){black_king->move(can_eat->x(), can_eat->y());}
    if(n == 6){black_bishop2->move(can_eat->x(), can_eat->y());}
    if(n == 7){black_knight2->move(can_eat->x(), can_eat->y());}
    if(n == 8){black_rook2->move(can_eat->x(), can_eat->y());}
    if(n == 9){
        black_pawn1->move(can_eat->x(), can_eat->y());
        if(black_pawn1->y() == 0) {
            black_pawn1->move(0, 960);
            ++pb;
            promote(can_eat);
        }
    }
    if(n == 10){
        black_pawn2->move(can_eat->x(), can_eat->y());
        if(black_pawn2->y() == 0) {
            black_pawn2->move(0, 960);
            ++pb;
            promote(can_eat);
        }
    }
    if(n == 11){
        black_pawn3->move(can_eat->x(), can_eat->y());
        if(black_pawn3->y() == 0) {
            black_pawn3->move(0, 960);
            ++pb;
            promote(can_eat);
        }
    }
    if(n == 12){
        black_pawn4->move(can_eat->x(), can_eat->y());
        if(black_pawn4->y() == 0) {
            black_pawn4->move(0, 960);
            ++pb;
            promote(can_eat);
        }
    }
    if(n == 13){
        black_pawn5->move(can_eat->x(), can_eat->y());
        if(black_pawn5->y() == 0) {
            black_pawn5->move(0, 960);
            ++pb;
            promote(can_eat);
        }
    }
    if(n == 14){
        black_pawn6->move(can_eat->x(), can_eat->y());
        if(black_pawn6->y() == 0) {
            black_pawn6->move(0, 960);
            ++pb;
            promote(can_eat);
        }
    }
    if(n == 15){
        black_pawn7->move(can_eat->x(), can_eat->y());
        if(black_pawn7->y() == 0) {
            black_pawn7->move(0, 960);
            ++pb;
            promote(can_eat);
        }
    }
    if(n == 16){
        black_pawn8->move(can_eat->x(), can_eat->y());
        if(black_pawn8->y() == 0) {
            black_pawn8->move(0, 960);
            ++pb;
            promote(can_eat);
        }
    }
    if(n == 17){
        white_pawn1->move(can_eat->x(), can_eat->y());
        if(white_pawn1->y() == 0) {
            white_pawn1->move(0, 960);
            ++pw;
            promote(can_eat);
        }
    }
    if(n == 18){
        white_pawn2->move(can_eat->x(), can_eat->y());
        if(white_pawn2->y() == 0) {
            white_pawn2->move(0, 960);
            ++pw;
            promote(can_eat);
        }
    }
    if(n == 19){
        white_pawn3->move(can_eat->x(), can_eat->y());
        if(white_pawn3->y() == 0) {
            white_pawn3->move(0, 960);
            ++pw;
            promote(can_eat);
        }
    }
    if(n == 20){
        white_pawn4->move(can_eat->x(), can_eat->y());
        if(white_pawn4->y() == 0) {
            white_pawn4->move(0, 960);
            ++pw;
            promote(can_eat);
        }
    }
    if(n == 21){
        white_pawn5->move(can_eat->x(), can_eat->y());
        if(white_pawn5->y() == 0) {
            white_pawn5->move(0, 960);
            ++pw;
            promote(can_eat);
        }
    }
    if(n == 22){
        white_pawn6->move(can_eat->x(), can_eat->y());
        if(white_pawn6->y() == 0) {
            white_pawn6->move(0, 960);
            ++pw;
            promote(can_eat);
        }
    }
    if(n == 23){
        white_pawn7->move(can_eat->x(), can_eat->y());
        if(white_pawn7->y() == 0) {
            white_pawn7->move(0, 960);
            ++pw;
            promote(can_eat);
        }
    }
    if(n == 24){
        white_pawn8->move(can_eat->x(), can_eat->y());
        if(white_pawn8->y() == 0) {
            white_pawn8->move(0, 960);
            ++pw;
            promote(can_eat);
        }
    }
    if(n == 25){white_rook1->move(can_eat->x(), can_eat->y());}
    if(n == 26){white_knight1->move(can_eat->x(), can_eat->y());}
    if(n == 27){white_bishop1->move(can_eat->x(), can_eat->y());}
    if(n == 28){white_queen->move(can_eat->x(), can_eat->y());}
    if(n == 29){white_king->move(can_eat->x(), can_eat->y());}
    if(n == 30){white_bishop2->move(can_eat->x(), can_eat->y());}
    if(n == 31){white_knight2->move(can_eat->x(), can_eat->y());}
    if(n == 32){white_rook2->move(can_eat->x(), can_eat->y());}
    if(n == 33){promote_black_queen1->move(can_eat->x(), can_eat->y());}
    if(n == 34){promote_black_queen2->move(can_eat->x(), can_eat->y());}
    if(n == 35){promote_black_queen3->move(can_eat->x(), can_eat->y());}
    if(n == 36){promote_black_queen4->move(can_eat->x(), can_eat->y());}
    if(n == 37){promote_black_queen5->move(can_eat->x(), can_eat->y());}
    if(n == 38){promote_black_queen6->move(can_eat->x(), can_eat->y());}
    if(n == 39){promote_black_queen7->move(can_eat->x(), can_eat->y());}
    if(n == 40){promote_black_queen8->move(can_eat->x(), can_eat->y());}
    if(n == 41){promote_white_queen1->move(can_eat->x(), can_eat->y());}
    if(n == 42){promote_white_queen2->move(can_eat->x(), can_eat->y());}
    if(n == 43){promote_white_queen3->move(can_eat->x(), can_eat->y());}
    if(n == 44){promote_white_queen4->move(can_eat->x(), can_eat->y());}
    if(n == 45){promote_white_queen5->move(can_eat->x(), can_eat->y());}
    if(n == 46){promote_white_queen6->move(can_eat->x(), can_eat->y());}
    if(n == 47){promote_white_queen7->move(can_eat->x(), can_eat->y());}
    if(n == 48){promote_white_queen8->move(can_eat->x(), can_eat->y());}
}

void MainWindow::promote(QPushButton *can_move) {
    if(pb == 1){set_promote_b(promote_black_queen1, can_move);}
    else if(pb == 2){set_promote_b(promote_black_queen2, can_move);}
    else if(pb == 3){set_promote_b(promote_black_queen3, can_move);}
    else if(pb == 4){set_promote_b(promote_black_queen4, can_move);}
    else if(pb == 5){set_promote_b(promote_black_queen5, can_move);}
    else if(pb == 6){set_promote_b(promote_black_queen6, can_move);}
    else if(pb == 7){set_promote_b(promote_black_queen7, can_move);}
    else if(pb == 8){set_promote_b(promote_black_queen8, can_move);}

    if(pw == 1){set_promote_w(promote_white_queen1, can_move);}
    else if(pw == 2){set_promote_w(promote_white_queen2, can_move);}
    else if(pw == 3){set_promote_w(promote_white_queen3, can_move);}
    else if(pw == 4){set_promote_w(promote_white_queen4, can_move);}
    else if(pw == 5){set_promote_w(promote_white_queen5, can_move);}
    else if(pw == 6){set_promote_w(promote_white_queen6, can_move);}
    else if(pw == 7){set_promote_w(promote_white_queen7, can_move);}
    else if(pw == 8){set_promote_w(promote_white_queen8, can_move);}
}

void MainWindow::mousePressEvent(QMouseEvent *event) {
    if(event->button() == Qt::LeftButton) {
        this->X = event->x() / 80 * 80;
        this->Y = event->y() / 80 * 80;
    }
    if(n == 1 && black_rook1->x() > 560) {black_rook1->move(X, Y);}
    if(n == 2 && black_knight1->x() > 560) {black_knight1->move(X, Y);}
    if(n == 3 && black_bishop1->x() > 560) {black_bishop1->move(X, Y);}
    if(n == 4 && black_queen->x() > 560) {black_queen->move(X, Y);}
    if(n == 5 && black_king->x() > 560) {black_king->move(X, Y);}
    if(n == 6 && black_bishop2->x() > 560) {black_bishop2->move(X, Y);}
    if(n == 7 && black_knight2->x() > 560) {black_knight2->move(X, Y);}
    if(n == 8 && black_rook2->x() > 560) {black_rook2->move(X, Y);}
    if(n == 9 && black_pawn1->x() > 560) {black_pawn1->move(X, Y);}
    if(n == 10 && black_pawn2->x() > 560) {black_pawn2->move(X, Y);}
    if(n == 11 && black_pawn3->x() > 560) {black_pawn3->move(X, Y);}
    if(n == 12 && black_pawn4->x() > 560) {black_pawn4->move(X, Y);}
    if(n == 13 && black_pawn5->x() > 560) {black_pawn5->move(X, Y);}
    if(n == 14 && black_pawn6->x() > 560) {black_pawn6->move(X, Y);}
    if(n == 15 && black_pawn7->x() > 560) {black_pawn7->move(X, Y);}
    if(n == 16 && black_pawn8->x() > 560) {black_pawn8->move(X, Y);}
    if(n == 17 && white_pawn1->x() > 560) {white_pawn1->move(X, Y);}
    if(n == 18 && white_pawn2->x() > 560) {white_pawn2->move(X, Y);}
    if(n == 19 && white_pawn3->x() > 560) {white_pawn3->move(X, Y);}
    if(n == 20 && white_pawn4->x() > 560) {white_pawn4->move(X, Y);}
    if(n == 21 && white_pawn5->x() > 560) {white_pawn5->move(X, Y);}
    if(n == 22 && white_pawn6->x() > 560) {white_pawn6->move(X, Y);}
    if(n == 23 && white_pawn7->x() > 560) {white_pawn7->move(X, Y);}
    if(n == 24 && white_pawn8->x() > 560) {white_pawn8->move(X, Y);}
    if(n == 25 && white_rook1->x() > 560) {white_rook1->move(X, Y);}
    if(n == 26 && white_knight1->x() > 560) {white_knight1->move(X, Y);}
    if(n == 27 && white_bishop1->x() > 560) {white_bishop1->move(X, Y);}
    if(n == 28 && white_queen->x() > 560) {white_queen->move(X, Y);}
    if(n == 29 && white_king->x() > 560) {white_king->move(X, Y);}
    if(n == 30 && white_bishop2->x() > 560) {white_bishop2->move(X, Y);}
    if(n == 31 && white_knight2->x() > 560) {white_knight2->move(X, Y);}
    if(n == 32 && white_rook2->x() > 560) {white_rook2->move(X, Y);}
}

//slot
void MainWindow::click_black_rook1()
{
    n = 1;
    set_hide();
    if(black_rook1->x() <= 560) {
        set_move(black_rook1);
        to_show_can_move(n);
    }
}

void MainWindow::click_black_knight1()
{
    n = 2;
    set_hide();
    if(black_knight1->x() <= 560) {
        set_move(black_knight1);
        to_show_can_move(n);
    }
}

void MainWindow::click_black_bishop1()
{
    n = 3;
    set_hide();
    if(black_bishop1->x() <= 560) {
        set_move(black_bishop1);
        to_show_can_move(n);
    }
}

void MainWindow::click_black_queen()
{
    n = 4;
    set_hide();
    if(black_queen->x() <= 560) {
        set_move(black_queen);
        to_show_can_move(n);
    }
}

void MainWindow::click_black_king()
{
    n = 5;
    set_hide();
    if(black_king->x() <= 560) {
        set_move(black_king);
        to_show_can_move(n);
    }
}

void MainWindow::click_black_bishop2()
{
    n = 6;
    set_hide();
    if(black_bishop2->x() <= 560) {
        set_move(black_bishop2);
        to_show_can_move(n);
    }
}

void MainWindow::click_black_knight2()
{
    n = 7;
    set_hide();
    if(black_knight2->x() <= 560) {
        set_move(black_knight2);
        to_show_can_move(n);
    }
}

void MainWindow::click_black_rook2()
{
    n = 8;
    set_hide();
    if(black_rook2->x() <= 560) {
        set_move(black_rook2);
        to_show_can_move(n);
    }
}

void MainWindow::click_black_pawn1()
{
    n = 9;
    set_hide();
    if(black_pawn1->x() <= 560) {
        set_move(black_pawn1);
        to_show_can_move(n);
    }
}

void MainWindow::click_black_pawn2()
{
    n = 10;
    set_hide();
    if(black_pawn2->x() <= 560) {
        set_move(black_pawn2);
        to_show_can_move(n);
    }
}

void MainWindow::click_black_pawn3()
{
    n = 11;
    set_hide();
    if(black_pawn3->x() <= 560) {
        set_move(black_pawn3);
        to_show_can_move(n);
    }
}

void MainWindow::click_black_pawn4()
{
    n = 12;
    set_hide();
    if(black_pawn4->x() <= 560) {
        set_move(black_pawn4);
        to_show_can_move(n);
    }
}

void MainWindow::click_black_pawn5()
{
    n = 13;
    set_hide();
    if(black_pawn5->x() <= 560) {
        set_move(black_pawn5);
        to_show_can_move(n);
    }
}

void MainWindow::click_black_pawn6()
{
    n = 14;
    set_hide();
    if(black_pawn6->x() <= 560) {
        set_move(black_pawn6);
        to_show_can_move(n);
    }
}

void MainWindow::click_black_pawn7()
{
    n = 15;
    set_hide();
    if(black_pawn7->x() <= 560) {
        set_move(black_pawn7);
        to_show_can_move(n);
    }
}

void MainWindow::click_black_pawn8()
{
    n = 16;
    set_hide();
    if(black_pawn8->x() <= 560) {
        set_move(black_pawn8);
        to_show_can_move(n);
    }
}

void MainWindow::click_white_pawn1()
{
    n = 17;
    set_hide();
    if(white_pawn1->x() <= 560) {
        set_move(white_pawn1);
        to_show_can_move(n);
    }
}

void MainWindow::click_white_pawn2()
{
    n = 18;
    set_hide();
    if(white_pawn2->x() <= 560) {
        set_move(white_pawn2);
        to_show_can_move(n);
    }
}

void MainWindow::click_white_pawn3()
{
    n = 19;
    set_hide();
    if(white_pawn3->x() <= 560) {
        set_move(white_pawn3);
        to_show_can_move(n);
    }
}

void MainWindow::click_white_pawn4()
{
    n = 20;
    set_hide();
    if(white_pawn4->x() <= 560) {
        set_move(white_pawn4);
        to_show_can_move(n);
    }
}

void MainWindow::click_white_pawn5()
{
    n = 21;
    set_hide();
    if(white_pawn5->x() <= 560) {
        set_move(white_pawn5);
        to_show_can_move(n);
    }
}

void MainWindow::click_white_pawn6()
{
    n = 22;
    set_hide();
    if(white_pawn6->x() <= 560) {
        set_move(white_pawn6);
        to_show_can_move(n);
    }
}

void MainWindow::click_white_pawn7()
{
    n = 23;
    set_hide();
    if(white_pawn7->x() <= 560) {
        set_move(white_pawn7);
        to_show_can_move(n);
    }
}

void MainWindow::click_white_pawn8()
{
    n = 24;
    set_hide();
    if(white_pawn8->x() <= 560) {
        set_move(white_pawn8);
        to_show_can_move(n);
    }
}

void MainWindow::click_white_rook1()
{
    n = 25;
    set_hide();
    if(white_rook1->x() <= 560) {
        set_move(white_rook1);
        to_show_can_move(n);
    }
}

void MainWindow::click_white_knight1()
{
    n = 26;
    set_hide();
    if(white_knight1->x() <= 560) {
        set_move(white_knight1);
        to_show_can_move(n);
    }
}

void MainWindow::click_white_bishop1()
{
    n = 27;
    set_hide();
    if(white_bishop1->x() <= 560) {
        set_move(white_bishop1);
        to_show_can_move(n);
    }
}

void MainWindow::click_white_queen()
{
    n = 28;
    set_hide();
    if(white_queen->x() <= 560) {
        set_move(white_queen);
        to_show_can_move(n);
    }
}

void MainWindow::click_white_king()
{
    n = 29;
    set_hide();
    if(white_king->x() <= 560) {
        set_move(white_king);
        to_show_can_move(n);
    }
}

void MainWindow::click_white_bishop2()
{
    n = 30;
    set_hide();
    if(white_bishop2->x() <= 560) {
        set_move(white_bishop2);
        to_show_can_move(n);
    }
}

void MainWindow::click_white_knight2()
{
    n = 31;
    set_hide();
    if(white_knight2->x() <= 560) {
        set_move(white_knight2);
        to_show_can_move(n);
    }
}

void MainWindow::click_white_rook2()
{
    n = 32;
    set_hide();
    if(white_rook2->x() <= 560) {
        set_move(white_rook2);
        to_show_can_move(n);
    }
}

void MainWindow::click_promote_black_queen1() {
    n = 33;
    set_hide();
    set_move(promote_black_queen1);
    to_show_can_move(n);
}

void MainWindow::click_promote_black_queen2() {
    n = 34;
    set_hide();
    set_move(promote_black_queen2);
    to_show_can_move(n);
}

void MainWindow:: click_promote_black_queen3() {
    n = 35;
    set_hide();
    set_move(promote_black_queen3);
    to_show_can_move(n);
}

void MainWindow::click_promote_black_queen4() {
    n = 36;
    set_hide();
    set_move(promote_black_queen4);
    to_show_can_move(n);
}

void MainWindow:: click_promote_black_queen5() {
    n = 37;
    set_hide();
    set_move(promote_black_queen5);
    to_show_can_move(n);
}

void MainWindow::click_promote_black_queen6() {
    n = 38;
    set_hide();
    set_move(promote_black_queen6);
    to_show_can_move(n);
}

void MainWindow:: click_promote_black_queen7() {
    n = 39;
    set_hide();
    set_move(promote_black_queen7);
    to_show_can_move(n);
}

void MainWindow::click_promote_black_queen8() {
    n = 40;
    set_hide();
    set_move(promote_black_queen8);
    to_show_can_move(n);
}

void MainWindow:: click_promote_white_queen1() {
    n = 41;
    set_hide();
    set_move(promote_white_queen1);
    to_show_can_move(n);
    qDebug() << n;
}

void MainWindow::click_promote_white_queen2() {
    n = 42;
    set_hide();
    set_move(promote_white_queen2);
    to_show_can_move(n);
}

void MainWindow::click_promote_white_queen3() {
    n = 43;
    set_hide();
    set_move(promote_white_queen3);
    to_show_can_move(n);
}

void MainWindow::click_promote_white_queen4() {
    n = 44;
    set_hide();
    set_move(promote_white_queen4);
    to_show_can_move(n);
}

void MainWindow:: click_promote_white_queen5() {
    n = 45;
    set_hide();
    set_move(promote_white_queen5);
    to_show_can_move(n);
}

void MainWindow::click_promote_white_queen6() {
    n = 46;
    set_hide();
    set_move(promote_white_queen6);
    to_show_can_move(n);
}

void MainWindow::click_promote_white_queen7() {
    n = 47;
    set_hide();
    set_move(promote_white_queen7);
    to_show_can_move(n);
}

void MainWindow::click_promote_white_queen8() {
    n = 48;
    set_hide();
    set_move(promote_white_queen8);
    to_show_can_move(n);
}

//move
void MainWindow::to_move_up1()
{
    set_hide();
    if(n == 1) {black_rook1->move(move_up1->x(), move_up1->y());}
    else if(n == 4) {black_queen->move(move_up1->x(), move_up1->y());}
    else if(n == 5) {black_king->move(move_up1->x(), move_up1->y());}
    else if(n == 8) {black_rook2->move(move_up1->x(), move_up1->y());}
    else if(n == 17) {
        white_pawn1->move(move_up1->x(), move_up1->y());
        if(move_up1->y() == 0) {
            white_pawn1->move(0, 960);
            ++pw;
            promote(move_up1);
        }
    }
    else if(n == 18) {
        white_pawn2->move(move_up1->x(), move_up1->y());
        if(move_up1->y() == 0) {
            white_pawn2->move(0, 960);
            ++pw;
            promote(move_up1);
        }
    }
    else if(n == 19) {
        white_pawn3->move(move_up1->x(), move_up1->y());
        if(move_up1->y() == 0) {
            white_pawn3->move(0, 960);
            ++pw;
            promote(move_up1);
        }
    }
    else if(n == 20) {
        white_pawn4->move(move_up1->x(), move_up1->y());
        if(move_up1->y() == 0) {
            white_pawn4->move(0, 960);
            ++pw;
            promote(move_up1);
        }
    }
    else if(n == 21) {
        white_pawn5->move(move_up1->x(), move_up1->y());
        if(move_up1->y() == 0) {
            white_pawn5->move(0, 960);
            promote(move_up1);
            ++pw;
        }
    }
    else if(n == 22) {
        white_pawn6->move(move_up1->x(), move_up1->y());
        if(move_up1->y() == 0) {
            white_pawn6->move(0, 960);
            ++pw;
            promote(move_up1);
        }
    }
    else if(n == 23) {
        white_pawn7->move(move_up1->x(), move_up1->y());
        if(move_up1->y() == 0) {
            white_pawn7->move(0, 960);
            ++pw;
            promote(move_up1);
        }
    }
    else if(n == 24) {
        white_pawn8->move(move_up1->x(), move_up1->y());
        if(move_up1->y() == 0) {
            white_pawn8->move(0, 960);
            ++pw;
            promote(move_up1);
        }
    }
    else if(n == 25) {white_rook1->move(move_up1->x(), move_up1->y());}
    else if(n == 28) {white_queen->move(move_up1->x(), move_up1->y());}
    else if(n == 29) {white_king->move(move_up1->x(), move_up1->y());}
    else if(n == 32) {white_rook2->move(move_up1->x(), move_up1->y());}
}

void MainWindow::to_move_up2()
{
    set_hide();
    if(n == 1) {black_rook1->move(move_up2->x(), move_up2->y());}
    else if(n == 4) {black_queen->move(move_up2->x(), move_up2->y());}
    else if(n == 8) {black_rook2->move(move_up2->x(), move_up2->y());}
    else if(n == 17) {white_pawn1->move(move_up2->x(), move_up2->y());}
    else if(n == 18) {white_pawn2->move(move_up2->x(), move_up2->y());}
    else if(n == 19) {white_pawn3->move(move_up2->x(), move_up2->y());}
    else if(n == 20) {white_pawn4->move(move_up2->x(), move_up2->y());}
    else if(n == 21) {white_pawn5->move(move_up2->x(), move_up2->y());}
    else if(n == 22) {white_pawn6->move(move_up2->x(), move_up2->y());}
    else if(n == 23) {white_pawn7->move(move_up2->x(), move_up2->y());}
    else if(n == 24) {white_pawn8->move(move_up2->x(), move_up2->y());}
    else if(n == 25) {white_rook1->move(move_up2->x(), move_up2->y());}
    else if(n == 28) {white_queen->move(move_up2->x(), move_up2->y());}
    else if(n == 32) {white_rook2->move(move_up2->x(), move_up2->y());}
}

void MainWindow::to_move_up3() {
    set_hide();
    if(n == 1) {black_rook1->move(move_up3->x(), move_up3->y());}
    else if(n == 4) {black_queen->move(move_up3->x(), move_up3->y());}
    else if(n == 8) {black_rook2->move(move_up3->x(), move_up3->y());}
    else if(n == 25) {white_rook1->move(move_up3->x(), move_up3->y());}
    else if(n == 28) {white_queen->move(move_up3->x(), move_up3->y());}
    else if(n == 32) {white_rook2->move(move_up3->x(), move_up3->y());}
}

void MainWindow::to_move_up4() {
    set_hide();
    if(n == 1) {black_rook1->move(move_up4->x(), move_up4->y());}
    else if(n == 4) {black_queen->move(move_up4->x(), move_up4->y());}
    else if(n == 8) {black_rook2->move(move_up4->x(), move_up4->y());}
    else if(n == 25) {white_rook1->move(move_up4->x(), move_up4->y());}
    else if(n == 28) {white_queen->move(move_up4->x(), move_up4->y());}
    else if(n == 32) {white_rook2->move(move_up4->x(), move_up4->y());}
}

void MainWindow::to_move_up5() {
    set_hide();
    if(n == 1) {black_rook1->move(move_up5->x(), move_up5->y());}
    else if(n == 4) {black_queen->move(move_up5->x(), move_up5->y());}
    else if(n == 8) {black_rook2->move(move_up5->x(), move_up5->y());}
    else if(n == 25) {white_rook1->move(move_up5->x(), move_up5->y());}
    else if(n == 28) {white_queen->move(move_up5->x(), move_up5->y());}
    else if(n == 32) {white_rook2->move(move_up5->x(), move_up5->y());}
}

void MainWindow::to_move_up6() {
    set_hide();
    if(n == 1) {black_rook1->move(move_up6->x(), move_up6->y());}
    else if(n == 4) {black_queen->move(move_up6->x(), move_up6->y());}
    else if(n == 8) {black_rook2->move(move_up6->x(), move_up6->y());}
    else if(n == 25) {white_rook1->move(move_up6->x(), move_up6->y());}
    else if(n == 28) {white_queen->move(move_up6->x(), move_up6->y());}
    else if(n == 32) {white_rook2->move(move_up6->x(), move_up6->y());}
}

void MainWindow::to_move_up7() {
    set_hide();
    if(n == 1) {black_rook1->move(move_up7->x(), move_up7->y());}
    else if(n == 4) {black_queen->move(move_up7->x(), move_up7->y());}
    else if(n == 8) {black_rook2->move(move_up7->x(), move_up7->y());}
    else if(n == 25) {white_rook1->move(move_up7->x(), move_up7->y());}
    else if(n == 28) {white_queen->move(move_up7->x(), move_up7->y());}
    else if(n == 32) {white_rook2->move(move_up7->x(), move_up7->y());}
}

void MainWindow::to_move_down1()
{
    set_hide();
    if(n == 1) {black_rook1->move(move_down1->x(), move_down1->y());}
    else if(n == 4) {black_queen->move(move_down1->x(), move_down1->y());}
    else if(n == 5) {black_king->move(move_down1->x(), move_down1->y());}
    else if(n == 8) {black_rook2->move(move_down1->x(), move_down1->y());}
    else if(n == 9) {
        black_pawn1->move(move_down1->x(), move_down1->y());
        if(move_down1->y() == 560) {
            black_pawn1->move(0, 960);
            ++pb;
            promote(move_down1);
        }
    }
    else if(n == 10) {
        black_pawn2->move(move_down1->x(), move_down1->y());
        if(move_down1->y() == 560) {
            black_pawn2->move(0, 960);
            ++pb;
            promote(move_down1);
        }
    }
    else if(n == 11) {
        black_pawn3->move(move_down1->x(), move_down1->y());
        if(move_down1->y() == 560) {
            black_pawn3->move(0, 960);
            ++pb;
            promote(move_down1);
        }
    }
    else if(n == 12) {
        black_pawn4->move(move_down1->x(), move_down1->y());
        if(move_down1->y() == 560) {
            black_pawn4->move(0, 960);
            ++pb;
            promote(move_down1);
        }
    }
    else if(n == 13) {
        black_pawn5->move(move_down1->x(), move_down1->y());
        if(move_down1->y() == 560) {
            black_pawn5->move(0, 960);
            ++pb;
            promote(move_down1);
        }
    }
    else if(n == 14) {
        black_pawn6->move(move_down1->x(), move_down1->y());
        if(move_down1->y() == 560) {
            black_pawn6->move(0, 960);
            ++pb;
            promote(move_down1);
        }
    }
    else if(n == 15) {
        black_pawn7->move(move_down1->x(), move_down1->y());
        if(move_down1->y() == 560) {
            black_pawn7->move(0, 960);
            ++pb;
            promote(move_down1);
        }
    }
    else if(n == 16) {
        black_pawn8->move(move_down1->x(), move_down1->y());
        if(move_down1->y() == 560) {
            black_pawn8->move(0, 960);
            ++pb;
            promote(move_down1);
        }
    }
    else if(n == 25) {white_rook1->move(move_down1->x(), move_down1->y());}
    else if(n == 28) {white_queen->move(move_down1->x(), move_down1->y());}
    else if(n == 29) {white_king->move(move_down1->x(), move_down1->y());}
    else if(n == 32) {white_rook2->move(move_down1->x(), move_down1->y());}
}

void MainWindow::to_move_down2()
{
    set_hide();
    if(n == 1) {black_rook1->move(move_down2->x(), move_down2->y());}
    else if(n == 4) {black_queen->move(move_down2->x(), move_down2->y());}
    else if(n == 8) {black_rook2->move(move_down2->x(), move_down2->y());}
    else if(n == 9) {black_pawn1->move(move_down2->x(), move_down2->y());}
    else if(n == 10) {black_pawn2->move(move_down2->x(), move_down2->y());}
    else if(n == 11) {black_pawn3->move(move_down2->x(), move_down2->y());}
    else if(n == 12) {black_pawn4->move(move_down2->x(), move_down2->y());}
    else if(n == 13) {black_pawn5->move(move_down2->x(), move_down2->y());}
    else if(n == 14) {black_pawn6->move(move_down2->x(), move_down2->y());}
    else if(n == 15) {black_pawn7->move(move_down2->x(), move_down2->y());}
    else if(n == 16) {black_pawn8->move(move_down2->x(), move_down2->y());}
    else if(n == 25) {white_rook1->move(move_down2->x(), move_down2->y());}
    else if(n == 28) {white_queen->move(move_down2->x(), move_down2->y());}
    else if(n == 32) {white_rook2->move(move_down2->x(), move_down2->y());}
}

void MainWindow::to_move_down3()
{
    set_hide();
    if(n == 1) {black_rook1->move(move_down3->x(), move_down3->y());}
    else if(n == 4) {black_queen->move(move_down3->x(), move_down3->y());}
    else if(n == 8) {black_rook2->move(move_down3->x(), move_down3->y());}
    else if(n == 25) {white_rook1->move(move_down3->x(), move_down3->y());}
    else if(n == 28) {white_queen->move(move_down3->x(), move_down3->y());}
    else if(n == 32) {white_rook2->move(move_down3->x(), move_down3->y());}
}

void MainWindow::to_move_down4()
{
    set_hide();
    if(n == 1) {black_rook1->move(move_down4->x(), move_down4->y());}
    else if(n == 4) {black_queen->move(move_down4->x(), move_down4->y());}
    else if(n == 8) {black_rook2->move(move_down4->x(), move_down4->y());}
    else if(n == 25) {white_rook1->move(move_down4->x(), move_down4->y());}
    else if(n == 28) {white_queen->move(move_down4->x(), move_down4->y());}
    else if(n == 32) {white_rook2->move(move_down4->x(), move_down4->y());}
}

void MainWindow::to_move_down5()
{
    set_hide();
    if(n == 1) {black_rook1->move(move_down5->x(), move_down5->y());}
    else if(n == 4) {black_queen->move(move_down5->x(), move_down5->y());}
    else if(n == 8) {black_rook2->move(move_down5->x(), move_down5->y());}
    else if(n == 25) {white_rook1->move(move_down5->x(), move_down5->y());}
    else if(n == 28) {white_queen->move(move_down5->x(), move_down5->y());}
    else if(n == 32) {white_rook2->move(move_down5->x(), move_down5->y());}
}

void MainWindow::to_move_down6()
{
    set_hide();
    if(n == 1) {black_rook1->move(move_down6->x(), move_down6->y());}
    else if(n == 4) {black_queen->move(move_down6->x(), move_down6->y());}
    else if(n == 8) {black_rook2->move(move_down6->x(), move_down6->y());}
    else if(n == 25) {white_rook1->move(move_down6->x(), move_down6->y());}
    else if(n == 28) {white_queen->move(move_down6->x(), move_down6->y());}
    else if(n == 32) {white_rook2->move(move_down6->x(), move_down6->y());}
}

void MainWindow::to_move_down7()
{
    set_hide();
    if(n == 1) {black_rook1->move(move_down7->x(), move_down7->y());}
    else if(n == 4) {black_queen->move(move_down7->x(), move_down7->y());}
    else if(n == 8) {black_rook2->move(move_down7->x(), move_down7->y());}
    else if(n == 25) {white_rook1->move(move_down7->x(), move_down7->y());}
    else if(n == 28) {white_queen->move(move_down7->x(), move_down7->y());}
    else if(n == 32) {white_rook2->move(move_down7->x(), move_down7->y());}
}

void MainWindow::to_move_left1()
{
    set_hide();
    if(n == 1) {black_rook1->move(move_left1->x(), move_left1->y());}
    else if(n == 4) {black_queen->move(move_left1->x(), move_left1->y());}
    else if(n == 5) {black_king->move(move_left1->x(), move_left1->y());}
    else if(n == 8) {black_rook2->move(move_left1->x(), move_left1->y());}
    else if(n == 25) {white_rook1->move(move_left1->x(), move_left1->y());}
    else if(n == 28) {white_queen->move(move_left1->x(), move_left1->y());}
    else if(n == 29) {white_king->move(move_left1->x(), move_left1->y());}
    else if(n == 32) {white_rook2->move(move_left1->x(), move_left1->y());}
}

void MainWindow::to_move_left2()
{
    set_hide();
    if(n == 1) {black_rook1->move(move_left2->x(), move_left2->y());}
    else if(n == 4) {black_queen->move(move_left2->x(), move_left2->y());}
    else if(n == 5) {
        black_king->move(move_left2->x(), move_left2->y());
        black_rook1->move(240, 0);
    }
    else if(n == 8) {black_rook2->move(move_left2->x(), move_left2->y());}
    else if(n == 25) {white_rook1->move(move_left2->x(), move_left2->y());}
    else if(n == 28) {white_queen->move(move_left2->x(), move_left2->y());}
    else if(n == 29) {
        white_king->move(move_left2->x(), move_left2->y());
        white_rook1->move(240, 560);
    }
    else if(n == 32) {white_rook2->move(move_left2->x(), move_left2->y());}
}

void MainWindow::to_move_left3()
{
    set_hide();
    if(n == 1) {black_rook1->move(move_left3->x(), move_left3->y());}
    else if(n == 4) {black_queen->move(move_left3->x(), move_left3->y());}
    else if(n == 8) {black_rook2->move(move_left3->x(), move_left3->y());}
    else if(n == 25) {white_rook1->move(move_left3->x(), move_left3->y());}
    else if(n == 28) {white_queen->move(move_left3->x(), move_left3->y());}
    else if(n == 32) {white_rook2->move(move_left3->x(), move_left3->y());}
}

void MainWindow::to_move_left4()
{
    set_hide();
    if(n == 1) {black_rook1->move(move_left4->x(), move_left4->y());}
    else if(n == 4) {black_queen->move(move_left4->x(), move_left4->y());}
    else if(n == 8) {black_rook2->move(move_left4->x(), move_left4->y());}
    else if(n == 25) {white_rook1->move(move_left4->x(), move_left4->y());}
    else if(n == 28) {white_queen->move(move_left4->x(), move_left4->y());}
    else if(n == 32) {white_rook2->move(move_left4->x(), move_left4->y());}
}

void MainWindow::to_move_left5()
{
    set_hide();
    if(n == 1) {black_rook1->move(move_left5->x(), move_left5->y());}
    else if(n == 4) {black_queen->move(move_left5->x(), move_left5->y());}
    else if(n == 8) {black_rook2->move(move_left5->x(), move_left5->y());}
    else if(n == 25) {white_rook1->move(move_left5->x(), move_left5->y());}
    else if(n == 28) {white_queen->move(move_left5->x(), move_left5->y());}
    else if(n == 32) {white_rook2->move(move_left5->x(), move_left5->y());}
}

void MainWindow::to_move_left6()
{
    set_hide();
    if(n == 1) {black_rook1->move(move_left6->x(), move_left6->y());}
    else if(n == 4) {black_queen->move(move_left6->x(), move_left6->y());}
    else if(n == 8) {black_rook2->move(move_left6->x(), move_left6->y());}
    else if(n == 25) {white_rook1->move(move_left6->x(), move_left6->y());}
    else if(n == 28) {white_queen->move(move_left6->x(), move_left6->y());}
    else if(n == 32) {white_rook2->move(move_left6->x(), move_left6->y());}
}

void MainWindow::to_move_left7()
{
    set_hide();
    if(n == 1) {black_rook1->move(move_left7->x(), move_left7->y());}
    else if(n == 4) {black_queen->move(move_left7->x(), move_left7->y());}
    else if(n == 8) {black_rook2->move(move_left7->x(), move_left7->y());}
    else if(n == 25) {white_rook1->move(move_left7->x(), move_left7->y());}
    else if(n == 28) {white_queen->move(move_left7->x(), move_left7->y());}
    else if(n == 32) {white_rook2->move(move_left7->x(), move_left7->y());}
}

void MainWindow::to_move_right1()
{
    set_hide();
    if(n == 1) {black_rook1->move(move_right1->x(), move_right1->y());}
    else if(n == 4) {black_queen->move(move_right1->x(), move_right1->y());}
    else if(n == 5) {black_king->move(move_right1->x(), move_right1->y());}
    else if(n == 8) {black_rook2->move(move_right1->x(), move_right1->y());}
    else if(n == 25) {white_rook1->move(move_right1->x(), move_right1->y());}
    else if(n == 28) {white_queen->move(move_right1->x(), move_right1->y());}
    else if(n == 29) {white_king->move(move_right1->x(), move_right1->y());}
    else if(n == 32) {white_rook2->move(move_right1->x(), move_right1->y());}
}

void MainWindow::to_move_right2()
{
    set_hide();
    if(n == 1) {black_rook1->move(move_right2->x(), move_right2->y());}
    else if(n == 4) {black_queen->move(move_right2->x(), move_right2->y());}
    else if(n == 5) {
        black_king->move(move_right2->x(), move_right2->y());
        black_rook2->move(400, 0);
    }
    else if(n == 8) {black_rook2->move(move_right2->x(), move_right2->y());}
    else if(n == 25) {white_rook1->move(move_right2->x(), move_right2->y());}
    else if(n == 28) {white_queen->move(move_right2->x(), move_right2->y());}
    else if(n == 29) {
        white_king->move(move_right2->x(), move_right2->y());
        white_rook2->move(400, 560);
    }
    else if(n == 32) {white_rook2->move(move_right2->x(), move_right2->y());}
}

void MainWindow::to_move_right3()
{
    set_hide();
    if(n == 1) {black_rook1->move(move_right3->x(), move_right3->y());}
    else if(n == 4) {black_queen->move(move_right3->x(), move_right3->y());}
    else if(n == 8) {black_rook2->move(move_right3->x(), move_right3->y());}
    else if(n == 25) {white_rook1->move(move_right3->x(), move_right3->y());}
    else if(n == 28) {white_queen->move(move_right3->x(), move_right3->y());}
    else if(n == 32) {white_rook2->move(move_right3->x(), move_right3->y());}
}

void MainWindow::to_move_right4()
{
    set_hide();
    if(n == 1) {black_rook1->move(move_right4->x(), move_right4->y());}
    else if(n == 4) {black_queen->move(move_right4->x(), move_right4->y());}
    else if(n == 8) {black_rook2->move(move_right4->x(), move_right4->y());}
    else if(n == 25) {white_rook1->move(move_right4->x(), move_right4->y());}
    else if(n == 28) {white_queen->move(move_right4->x(), move_right4->y());}
    else if(n == 32) {white_rook2->move(move_right4->x(), move_right4->y());}
}

void MainWindow::to_move_right5()
{
    set_hide();
    if(n == 1) {black_rook1->move(move_right5->x(), move_right5->y());}
    else if(n == 4) {black_queen->move(move_right5->x(), move_right5->y());}
    else if(n == 8) {black_rook2->move(move_right5->x(), move_right5->y());}
    else if(n == 25) {white_rook1->move(move_right5->x(), move_right5->y());}
    else if(n == 28) {white_queen->move(move_right5->x(), move_right5->y());}
    else if(n == 32) {white_rook2->move(move_right5->x(), move_right5->y());}
}

void MainWindow::to_move_right6()
{
    set_hide();
    if(n == 1) {black_rook1->move(move_right6->x(), move_right6->y());}
    else if(n == 4) {black_queen->move(move_right6->x(), move_right6->y());}
    else if(n == 8) {black_rook2->move(move_right6->x(), move_right6->y());}
    else if(n == 25) {white_rook1->move(move_right6->x(), move_right6->y());}
    else if(n == 28) {white_queen->move(move_right6->x(), move_right6->y());}
    else if(n == 32) {white_rook2->move(move_right6->x(), move_right6->y());}
}

void MainWindow::to_move_right7()
{
    set_hide();
    if(n == 1) {black_rook1->move(move_right7->x(), move_right7->y());}
    else if(n == 4) {black_queen->move(move_right7->x(), move_right7->y());}
    else if(n == 8) {black_rook2->move(move_right7->x(), move_right7->y());}
    else if(n == 25) {white_rook1->move(move_right7->x(), move_right7->y());}
    else if(n == 28) {white_queen->move(move_right7->x(), move_right7->y());}
    else if(n == 32) {white_rook2->move(move_right7->x(), move_right7->y());}
}

void MainWindow::to_move_left_up1()
{
    set_hide();
    if(n == 3) {black_bishop1->move(move_left_up1->x(), move_left_up1->y());}
    else if(n == 4) {black_queen->move(move_left_up1->x(), move_left_up1->y());}
    else if(n == 5) {black_king->move(move_left_up1->x(), move_left_up1->y());}
    else if(n == 6) {black_bishop2->move(move_left_up1->x(), move_left_up1->y());}
    else if(n == 27) {white_bishop1->move(move_left_up1->x(), move_left_up1->y());}
    else if(n == 28) {white_queen->move(move_left_up1->x(), move_left_up1->y());}
    else if(n == 29) {white_king->move(move_left_up1->x(), move_left_up1->y());}
    else if(n == 30) {white_bishop2->move(move_left_up1->x(), move_left_up1->y());}
}

void MainWindow::to_move_left_up2()
{
    set_hide();
    if(n == 3) {black_bishop1->move(move_left_up2->x(), move_left_up2->y());}
    else if(n == 4) {black_queen->move(move_left_up2->x(), move_left_up2->y());}
    else if(n == 6) {black_bishop2->move(move_left_up2->x(), move_left_up2->y());}
    else if(n == 27) {white_bishop1->move(move_left_up2->x(), move_left_up2->y());}
    else if(n == 28) {white_queen->move(move_left_up2->x(), move_left_up2->y());}
    else if(n == 30) {white_bishop2->move(move_left_up2->x(), move_left_up2->y());}
}

void MainWindow::to_move_left_up3()
{
    set_hide();
    if(n == 3) {black_bishop1->move(move_left_up3->x(), move_left_up3->y());}
    else if(n == 4) {black_queen->move(move_left_up3->x(), move_left_up3->y());}
    else if(n == 6) {black_bishop2->move(move_left_up3->x(), move_left_up3->y());}
    else if(n == 27) {white_bishop1->move(move_left_up3->x(), move_left_up3->y());}
    else if(n == 28) {white_queen->move(move_left_up3->x(), move_left_up3->y());}
    else if(n == 30) {white_bishop2->move(move_left_up3->x(), move_left_up3->y());}
}

void MainWindow::to_move_left_up4()
{
    set_hide();
    if(n == 3) {black_bishop1->move(move_left_up4->x(), move_left_up4->y());}
    else if(n == 4) {black_queen->move(move_left_up4->x(), move_left_up4->y());}
    else if(n == 6) {black_bishop2->move(move_left_up4->x(), move_left_up4->y());}
    else if(n == 27) {white_bishop1->move(move_left_up4->x(), move_left_up4->y());}
    else if(n == 28) {white_queen->move(move_left_up4->x(), move_left_up4->y());}
    else if(n == 30) {white_bishop2->move(move_left_up4->x(), move_left_up4->y());}
}

void MainWindow::to_move_left_up5()
{
    set_hide();
    if(n == 3) {black_bishop1->move(move_left_up5->x(), move_left_up5->y());}
    else if(n == 4) {black_queen->move(move_left_up5->x(), move_left_up5->y());}
    else if(n == 6) {black_bishop2->move(move_left_up5->x(), move_left_up5->y());}
    else if(n == 27) {white_bishop1->move(move_left_up5->x(), move_left_up5->y());}
    else if(n == 28) {white_queen->move(move_left_up5->x(), move_left_up5->y());}
    else if(n == 30) {white_bishop2->move(move_left_up5->x(), move_left_up5->y());}
}

void MainWindow::to_move_left_up6()
{
    set_hide();
    if(n == 3) {black_bishop1->move(move_left_up6->x(), move_left_up6->y());}
    else if(n == 4) {black_queen->move(move_left_up6->x(), move_left_up6->y());}
    else if(n == 6) {black_bishop2->move(move_left_up6->x(), move_left_up6->y());}
    else if(n == 27) {white_bishop1->move(move_left_up6->x(), move_left_up6->y());}
    else if(n == 28) {white_queen->move(move_left_up6->x(), move_left_up6->y());}
    else if(n == 30) {white_bishop2->move(move_left_up6->x(), move_left_up6->y());}
}

void MainWindow::to_move_left_up7()
{
    set_hide();
    if(n == 3) {black_bishop1->move(move_left_up7->x(), move_left_up7->y());}
    else if(n == 4) {black_queen->move(move_left_up7->x(), move_left_up7->y());}
    else if(n == 6) {black_bishop2->move(move_left_up7->x(), move_left_up7->y());}
    else if(n == 27) {white_bishop1->move(move_left_up7->x(), move_left_up7->y());}
    else if(n == 28) {white_queen->move(move_left_up7->x(), move_left_up7->y());}
    else if(n == 30) {white_bishop2->move(move_left_up7->x(), move_left_up7->y());}
}

void MainWindow::to_move_left_down1()
{
    set_hide();
    if(n == 3) {black_bishop1->move(move_left_down1->x(), move_left_down1->y());}
    else if(n == 4) {black_queen->move(move_left_down1->x(), move_left_down1->y());}
    else if(n == 5) {black_king->move(move_left_down1->x(), move_left_down1->y());}
    else if(n == 6) {black_bishop2->move(move_left_down1->x(), move_left_down1->y());}
    else if(n == 27) {white_bishop1->move(move_left_down1->x(), move_left_down1->y());}
    else if(n == 28) {white_queen->move(move_left_down1->x(), move_left_down1->y());}
    else if(n == 29) {white_king->move(move_left_down1->x(), move_left_down1->y());}
    else if(n == 30) {white_bishop2->move(move_left_down1->x(), move_left_down1->y());}
}

void MainWindow::to_move_left_down2()
{
    set_hide();
    if(n == 3) {black_bishop1->move(move_left_down2->x(), move_left_down2->y());}
    else if(n == 4) {black_queen->move(move_left_down2->x(), move_left_down2->y());}
    else if(n == 6) {black_bishop2->move(move_left_down2->x(), move_left_down2->y());}
    else if(n == 27) {white_bishop1->move(move_left_down2->x(), move_left_down2->y());}
    else if(n == 28) {white_queen->move(move_left_down2->x(), move_left_down2->y());}
    else if(n == 30) {white_bishop2->move(move_left_down2->x(), move_left_down2->y());}
}

void MainWindow::to_move_left_down3()
{
    set_hide();
    if(n == 3) {black_bishop1->move(move_left_down3->x(), move_left_down3->y());}
    else if(n == 4) {black_queen->move(move_left_down3->x(), move_left_down3->y());}
    else if(n == 6) {black_bishop2->move(move_left_down3->x(), move_left_down3->y());}
    else if(n == 27) {white_bishop1->move(move_left_down3->x(), move_left_down3->y());}
    else if(n == 28) {white_queen->move(move_left_down3->x(), move_left_down3->y());}
    else if(n == 30) {white_bishop2->move(move_left_down3->x(), move_left_down3->y());}
}

void MainWindow::to_move_left_down4()
{
    set_hide();
    if(n == 3) {black_bishop1->move(move_left_down4->x(), move_left_down4->y());}
    else if(n == 4) {black_queen->move(move_left_down4->x(), move_left_down4->y());}
    else if(n == 6) {black_bishop2->move(move_left_down4->x(), move_left_down4->y());}
    else if(n == 27) {white_bishop1->move(move_left_down4->x(), move_left_down4->y());}
    else if(n == 28) {white_queen->move(move_left_down4->x(), move_left_down4->y());}
    else if(n == 30) {white_bishop2->move(move_left_down4->x(), move_left_down4->y());}
}

void MainWindow::to_move_left_down5()
{
    set_hide();
    if(n == 3) {black_bishop1->move(move_left_down5->x(), move_left_down5->y());}
    else if(n == 4) {black_queen->move(move_left_down5->x(), move_left_down5->y());}
    else if(n == 6) {black_bishop2->move(move_left_down5->x(), move_left_down5->y());}
    else if(n == 27) {white_bishop1->move(move_left_down5->x(), move_left_down5->y());}
    else if(n == 28) {white_queen->move(move_left_down5->x(), move_left_down5->y());}
    else if(n == 30) {white_bishop2->move(move_left_down5->x(), move_left_down5->y());}
}

void MainWindow::to_move_left_down6()
{
    set_hide();
    if(n == 3) {black_bishop1->move(move_left_down6->x(), move_left_down6->y());}
    else if(n == 4) {black_queen->move(move_left_down6->x(), move_left_down6->y());}
    else if(n == 6) {black_bishop2->move(move_left_down6->x(), move_left_down6->y());}
    else if(n == 27) {white_bishop1->move(move_left_down6->x(), move_left_down6->y());}
    else if(n == 28) {white_queen->move(move_left_down6->x(), move_left_down6->y());}
    else if(n == 30) {white_bishop2->move(move_left_down6->x(), move_left_down6->y());}
}

void MainWindow::to_move_left_down7()
{
    set_hide();
    if(n == 3) {black_bishop1->move(move_left_down7->x(), move_left_down7->y());}
    else if(n == 4) {black_queen->move(move_left_down7->x(), move_left_down7->y());}
    else if(n == 6) {black_bishop2->move(move_left_down7->x(), move_left_down7->y());}
    else if(n == 27) {white_bishop1->move(move_left_down7->x(), move_left_down7->y());}
    else if(n == 28) {white_queen->move(move_left_down7->x(), move_left_down7->y());}
    else if(n == 30) {white_bishop2->move(move_left_down7->x(), move_left_down7->y());}
}

void MainWindow::to_move_right_up1()
{
    set_hide();
    if(n == 3) {black_bishop1->move(move_right_up1->x(), move_right_up1->y());}
    else if(n == 4) {black_queen->move(move_right_up1->x(), move_right_up1->y());}
    else if(n == 5) {black_king->move(move_right_up1->x(), move_right_up1->y());}
    else if(n == 6) {black_bishop2->move(move_right_up1->x(), move_right_up1->y());}
    else if(n == 27) {white_bishop1->move(move_right_up1->x(), move_right_up1->y());}
    else if(n == 28) {white_queen->move(move_right_up1->x(), move_right_up1->y());}
    else if(n == 29) {white_king->move(move_right_up1->x(), move_right_up1->y());}
    else if(n == 30) {white_bishop2->move(move_right_up1->x(), move_right_up1->y());}
}

void MainWindow::to_move_right_up2()
{
    set_hide();
    if(n == 3) {black_bishop1->move(move_right_up2->x(), move_right_up2->y());}
    else if(n == 4) {black_queen->move(move_right_up2->x(), move_right_up2->y());}
    else if(n == 6) {black_bishop2->move(move_right_up2->x(), move_right_up2->y());}
    else if(n == 27) {white_bishop1->move(move_right_up2->x(), move_right_up2->y());}
    else if(n == 28) {white_queen->move(move_right_up2->x(), move_right_up2->y());}
    else if(n == 30) {white_bishop2->move(move_right_up2->x(), move_right_up2->y());}
}

void MainWindow::to_move_right_up3()
{
    set_hide();
    if(n == 3) {black_bishop1->move(move_right_up3->x(), move_right_up3->y());}
    else if(n == 4) {black_queen->move(move_right_up3->x(), move_right_up3->y());}
    else if(n == 6) {black_bishop2->move(move_right_up3->x(), move_right_up3->y());}
    else if(n == 27) {white_bishop1->move(move_right_up3->x(), move_right_up3->y());}
    else if(n == 28) {white_queen->move(move_right_up3->x(), move_right_up3->y());}
    else if(n == 30) {white_bishop2->move(move_right_up3->x(), move_right_up3->y());}
}

void MainWindow::to_move_right_up4()
{
    set_hide();
    if(n == 3) {black_bishop1->move(move_right_up4->x(), move_right_up4->y());}
    else if(n == 4) {black_queen->move(move_right_up4->x(), move_right_up4->y());}
    else if(n == 6) {black_bishop2->move(move_right_up4->x(), move_right_up4->y());}
    else if(n == 27) {white_bishop1->move(move_right_up4->x(), move_right_up4->y());}
    else if(n == 28) {white_queen->move(move_right_up4->x(), move_right_up4->y());}
    else if(n == 30) {white_bishop2->move(move_right_up4->x(), move_right_up4->y());}
}

void MainWindow::to_move_right_up5()
{
    set_hide();
    if(n == 3) {black_bishop1->move(move_right_up5->x(), move_right_up5->y());}
    else if(n == 4) {black_queen->move(move_right_up5->x(), move_right_up5->y());}
    else if(n == 6) {black_bishop2->move(move_right_up5->x(), move_right_up5->y());}
    else if(n == 27) {white_bishop1->move(move_right_up5->x(), move_right_up5->y());}
    else if(n == 28) {white_queen->move(move_right_up5->x(), move_right_up5->y());}
    else if(n == 30) {white_bishop2->move(move_right_up5->x(), move_right_up5->y());}
}

void MainWindow::to_move_right_up6()
{
    set_hide();
    if(n == 3) {black_bishop1->move(move_right_up6->x(), move_right_up6->y());}
    else if(n == 4) {black_queen->move(move_right_up6->x(), move_right_up6->y());}
    else if(n == 6) {black_bishop2->move(move_right_up6->x(), move_right_up6->y());}
    else if(n == 27) {white_bishop1->move(move_right_up6->x(), move_right_up6->y());}
    else if(n == 28) {white_queen->move(move_right_up6->x(), move_right_up6->y());}
    else if(n == 30) {white_bishop2->move(move_right_up6->x(), move_right_up6->y());}
}

void MainWindow::to_move_right_up7()
{
    set_hide();
    if(n == 3) {black_bishop1->move(move_right_up7->x(), move_right_up7->y());}
    else if(n == 4) {black_queen->move(move_right_up7->x(), move_right_up7->y());}
    else if(n == 6) {black_bishop2->move(move_right_up7->x(), move_right_up7->y());}
    else if(n == 27) {white_bishop1->move(move_right_up7->x(), move_right_up7->y());}
    else if(n == 28) {white_queen->move(move_right_up7->x(), move_right_up7->y());}
    else if(n == 30) {white_bishop2->move(move_right_up7->x(), move_right_up7->y());}
}

void MainWindow::to_move_right_down1()
{
    set_hide();
    if(n == 3) {black_bishop1->move(move_right_down1->x(), move_right_down1->y());}
    else if(n == 4) {black_queen->move(move_right_down1->x(), move_right_down1->y());}
    else if(n == 5) {black_king->move(move_right_down1->x(), move_right_down1->y());}
    else if(n == 6) {black_bishop2->move(move_right_down1->x(), move_right_down1->y());}
    else if(n == 27) {white_bishop1->move(move_right_down1->x(), move_right_down1->y());}
    else if(n == 28) {white_queen->move(move_right_down1->x(), move_right_down1->y());}
    else if(n == 29) {white_king->move(move_right_down1->x(), move_right_down1->y());}
    else if(n == 30) {white_bishop2->move(move_right_down1->x(), move_right_down1->y());}
}

void MainWindow::to_move_right_down2()
{
    set_hide();
    if(n == 3) {black_bishop1->move(move_right_down2->x(), move_right_down2->y());}
    else if(n == 4) {black_queen->move(move_right_down2->x(), move_right_down2->y());}
    else if(n == 6) {black_bishop2->move(move_right_down2->x(), move_right_down2->y());}
    else if(n == 27) {white_bishop1->move(move_right_down2->x(), move_right_down2->y());}
    else if(n == 28) {white_queen->move(move_right_down2->x(), move_right_down2->y());}
    else if(n == 30) {white_bishop2->move(move_right_down2->x(), move_right_down2->y());}
}

void MainWindow::to_move_right_down3()
{
    set_hide();
    if(n == 3) {black_bishop1->move(move_right_down3->x(), move_right_down3->y());}
    else if(n == 4) {black_queen->move(move_right_down3->x(), move_right_down3->y());}
    else if(n == 6) {black_bishop2->move(move_right_down3->x(), move_right_down3->y());}
    else if(n == 27) {white_bishop1->move(move_right_down3->x(), move_right_down3->y());}
    else if(n == 28) {white_queen->move(move_right_down3->x(), move_right_down3->y());}
    else if(n == 30) {white_bishop2->move(move_right_down3->x(), move_right_down3->y());}
}

void MainWindow::to_move_right_down4()
{
    set_hide();
    if(n == 3) {black_bishop1->move(move_right_down4->x(), move_right_down4->y());}
    else if(n == 4) {black_queen->move(move_right_down4->x(), move_right_down4->y());}
    else if(n == 6) {black_bishop2->move(move_right_down4->x(), move_right_down4->y());}
    else if(n == 27) {white_bishop1->move(move_right_down4->x(), move_right_down4->y());}
    else if(n == 28) {white_queen->move(move_right_down4->x(), move_right_down4->y());}
    else if(n == 30) {white_bishop2->move(move_right_down4->x(), move_right_down4->y());}
}

void MainWindow::to_move_right_down5()
{
    set_hide();
    if(n == 3) {black_bishop1->move(move_right_down5->x(), move_right_down5->y());}
    else if(n == 4) {black_queen->move(move_right_down5->x(), move_right_down5->y());}
    else if(n == 6) {black_bishop2->move(move_right_down5->x(), move_right_down5->y());}
    else if(n == 27) {white_bishop1->move(move_right_down5->x(), move_right_down5->y());}
    else if(n == 28) {white_queen->move(move_right_down5->x(), move_right_down5->y());}
    else if(n == 30) {white_bishop2->move(move_right_down5->x(), move_right_down5->y());}
}

void MainWindow::to_move_right_down6()
{
    set_hide();
    if(n == 3) {black_bishop1->move(move_right_down6->x(), move_right_down6->y());}
    else if(n == 4) {black_queen->move(move_right_down6->x(), move_right_down6->y());}
    else if(n == 6) {black_bishop2->move(move_right_down6->x(), move_right_down6->y());}
    else if(n == 27) {white_bishop1->move(move_right_down6->x(), move_right_down6->y());}
    else if(n == 28) {white_queen->move(move_right_down6->x(), move_right_down6->y());}
    else if(n == 30) {white_bishop2->move(move_right_down6->x(), move_right_down6->y());}
}

void MainWindow::to_move_right_down7()
{
    set_hide();
    if(n == 3) {black_bishop1->move(move_right_down7->x(), move_right_down7->y());}
    else if(n == 4) {black_queen->move(move_right_down7->x(), move_right_down7->y());}
    else if(n == 6) {black_bishop2->move(move_right_down7->x(), move_right_down7->y());}
    else if(n == 27) {white_bishop1->move(move_right_down7->x(), move_right_down7->y());}
    else if(n == 28) {white_queen->move(move_right_down7->x(), move_right_down7->y());}
    else if(n == 30) {white_bishop2->move(move_right_down7->x(), move_right_down7->y());}
}

void MainWindow::to_move_left_up_up()
{
    set_hide();
    if(n == 2) {black_knight1->move(move_left_up_up->x(), move_left_up_up->y());}
    else if(n == 7) {black_knight2->move(move_left_up_up->x(), move_left_up_up->y());}
    else if(n == 26) {white_knight1->move(move_left_up_up->x(), move_left_up_up->y());}
    else if(n == 31) {white_knight2->move(move_left_up_up->x(), move_left_up_up->y());}
}

void MainWindow::to_move_left_up_left()
{
    set_hide();
    if(n == 2) {black_knight1->move(move_left_up_left->x(), move_left_up_left->y());}
    else if(n == 7) {black_knight2->move(move_left_up_left->x(), move_left_up_left->y());}
    else if(n == 26) {white_knight1->move(move_left_up_left->x(), move_left_up_left->y());}
    else if(n == 31) {white_knight2->move(move_left_up_left->x(), move_left_up_left->y());}
}

void MainWindow::to_move_left_down_down()
{
    set_hide();
    if(n == 2) {black_knight1->move(move_left_down_down->x(), move_left_down_down->y());}
    else if(n == 7) {black_knight2->move(move_left_down_down->x(), move_left_down_down->y());}
    else if(n == 26) {white_knight1->move(move_left_down_down->x(), move_left_down_down->y());}
    else if(n == 31) {white_knight2->move(move_left_down_down->x(), move_left_down_down->y());}
}

void MainWindow::to_move_left_down_left()
{
    set_hide();
    if(n == 2) {black_knight1->move(move_left_down_left->x(), move_left_down_left->y());}
    else if(n == 7) {black_knight2->move(move_left_down_left->x(), move_left_down_left->y());}
    else if(n == 26) {white_knight1->move(move_left_down_left->x(), move_left_down_left->y());}
    else if(n == 31) {white_knight2->move(move_left_down_left->x(), move_left_down_left->y());}
}

void MainWindow::to_move_right_up_up()
{
    set_hide();
    if(n == 2) {black_knight1->move(move_right_up_up->x(), move_right_up_up->y());}
    else if(n == 7) {black_knight2->move(move_right_up_up->x(), move_right_up_up->y());}
    else if(n == 26) {white_knight1->move(move_right_up_up->x(), move_right_up_up->y());}
    else if(n == 31) {white_knight2->move(move_right_up_up->x(), move_right_up_up->y());}
}

void MainWindow::to_move_right_up_right()
{
    set_hide();
    if(n == 2) {black_knight1->move(move_right_up_right->x(), move_right_up_right->y());}
    else if(n == 7) {black_knight2->move(move_right_up_right->x(), move_right_up_right->y());}
    else if(n == 26) {white_knight1->move(move_right_up_right->x(), move_right_up_right->y());}
    else if(n == 31) {white_knight2->move(move_right_up_right->x(), move_right_up_right->y());}
}

void MainWindow::to_move_right_down_down()
{
    set_hide();
    if(n == 2) {black_knight1->move(move_right_down_down->x(), move_right_down_down->y());}
    else if(n == 7) {black_knight2->move(move_right_down_down->x(), move_right_down_down->y());}
    else if(n == 26) {white_knight1->move(move_right_down_down->x(), move_right_down_down->y());}
    else if(n == 31) {white_knight2->move(move_right_down_down->x(), move_right_down_down->y());}
}

void MainWindow::to_move_right_down_right()
{
    set_hide();
    if(n == 2) {black_knight1->move(move_right_down_right->x(), move_right_down_right->y());}
    else if(n == 7) {black_knight2->move(move_right_down_right->x(), move_right_down_right->y());}
    else if(n == 26) {white_knight1->move(move_right_down_right->x(), move_right_down_right->y());}
    else if(n == 31) {white_knight2->move(move_right_down_right->x(), move_right_down_right->y());}
}
//eat
void MainWindow::click_new_black_rook1() {
    set_hide();
    to_eat(black_rook1, n);
    black_rook1->setGeometry(680, 0, 80, 80);
}

void MainWindow::click_new_black_knight1() {
    set_hide();
    to_eat(black_knight1, n);
    black_knight1->setGeometry(680, 80, 80, 80);
}

void MainWindow::click_new_black_bishop1() {
    set_hide();
    to_eat(black_bishop1, n);
    black_bishop1->setGeometry(680, 160, 80, 80);
}

void MainWindow::click_new_black_queen() {
    set_hide();
    to_eat(black_queen, n);
    black_queen->setGeometry(680, 240, 80, 80);
}

void MainWindow::click_new_black_king() {
    set_hide();
    to_eat(black_king, n);
    black_king->setGeometry(680, 320, 80, 80);
    if(black_king->x() == 680) {
        emit white_win();
        this->hide();
    }
}

void MainWindow::click_new_black_bishop2() {
    set_hide();
    to_eat(black_bishop2, n);
    black_bishop2->setGeometry(680, 400, 80, 80);
}

void MainWindow::click_new_black_knight2() {
    set_hide();
    to_eat(black_knight2, n);
    black_knight2->setGeometry(680, 480, 80, 80);
}

void MainWindow::click_new_black_rook2() {
    set_hide();
    to_eat(black_rook2, n);
    black_rook2->setGeometry(680, 560, 80, 80);
}

void MainWindow::click_new_black_pawn1() {
    set_hide();
    to_eat(black_pawn1, n);
    black_pawn1->setGeometry(760, 0, 80, 80);
}

void MainWindow::click_new_black_pawn2() {
    set_hide();
    to_eat(black_pawn2, n);
    black_pawn2->setGeometry(760, 80, 80, 80);
}

void MainWindow::click_new_black_pawn3() {
    set_hide();
    to_eat(black_pawn3, n);
    black_pawn3->setGeometry(760, 160, 80, 80);
}

void MainWindow::click_new_black_pawn4() {
    set_hide();
    to_eat(black_pawn4, n);
    black_pawn4->setGeometry(760, 240, 80, 80);
}

void MainWindow::click_new_black_pawn5() {
    set_hide();
    to_eat(black_pawn5, n);
    black_pawn5->setGeometry(760, 320, 80, 80);
}

void MainWindow::click_new_black_pawn6() {
    set_hide();
    to_eat(black_pawn6, n);
    black_pawn6->setGeometry(760, 400, 80, 80);
}

void MainWindow::click_new_black_pawn7() {
    set_hide();
    to_eat(black_pawn7, n);
    black_pawn7->setGeometry(760, 480, 80, 80);
}

void MainWindow::click_new_black_pawn8() {
    set_hide();
    to_eat(black_pawn8, n);
    black_pawn8->setGeometry(760, 560, 80, 80);
}

void MainWindow::click_new_white_pawn1() {
    set_hide();
    to_eat(white_pawn1, n);
    white_pawn1->setGeometry(920, 0, 80, 80);
}

void MainWindow::click_new_white_pawn2() {
    set_hide();
    to_eat(white_pawn2, n);
    white_pawn2->setGeometry(920, 80, 80, 80);
}

void MainWindow::click_new_white_pawn3() {
    set_hide();
    to_eat(white_pawn3, n);
    white_pawn3->setGeometry(920, 160, 80, 80);
}

void MainWindow::click_new_white_pawn4() {
    set_hide();
    to_eat(white_pawn4, n);
    white_pawn4->setGeometry(920, 240, 80, 80);
}

void MainWindow::click_new_white_pawn5() {
    set_hide();
    to_eat(white_pawn5, n);
    white_pawn5->setGeometry(920, 320, 80, 80);
}

void MainWindow::click_new_white_pawn6() {
    set_hide();
    to_eat(white_pawn6, n);
    white_pawn6->setGeometry(920, 400, 80, 80);
}

void MainWindow::click_new_white_pawn7() {
    set_hide();
    to_eat(white_pawn7, n);
    white_pawn7->setGeometry(920, 480, 80, 80);
}

void MainWindow::click_new_white_pawn8() {
    set_hide();
    to_eat(white_pawn8, n);
    white_pawn8->setGeometry(920, 560, 80, 80);
}

void MainWindow::click_new_white_rook1() {
    set_hide();
    to_eat(white_rook1, n);
    white_rook1->setGeometry(840, 0, 80, 80);
}

void MainWindow::click_new_white_knight1() {
    set_hide();
    to_eat(white_knight1, n);
    white_knight1->setGeometry(840, 80, 80, 80);
}

void MainWindow::click_new_white_bishop1() {
    set_hide();
    to_eat(white_bishop1, n);
    white_bishop1->setGeometry(840, 160, 80, 80);
}

void MainWindow::click_new_white_queen() {
    set_hide();
    to_eat(white_queen, n);
    white_queen->setGeometry(840, 240, 80, 80);
}

void MainWindow::click_new_white_king() {
    set_hide();
    to_eat(white_king, n);
    white_king->setGeometry(840, 320, 80, 80);
    if(white_king->x() == 840) {
        emit black_win();
        this->hide();
    }
}

void MainWindow::click_new_white_bishop2() {
    set_hide();
    to_eat(white_bishop2, n);
    white_bishop2->setGeometry(840, 400, 80, 80);
}

void MainWindow::click_new_white_knight2() {
    set_hide();
    to_eat(white_knight2, n);
    white_knight2->setGeometry(840, 480, 80, 80);
}

void MainWindow::click_new_white_rook2() {
    set_hide();
    to_eat(white_rook2, n);
    white_rook2->setGeometry(840, 560, 80, 80);
}

void MainWindow::click_new_promote_black_queen1() {
    set_hide();
    to_eat(promote_black_queen1, n);
    promote_black_queen1->setGeometry(0, 960, 80, 80);
}

void MainWindow::click_new_promote_black_queen2() {
    set_hide();
    to_eat(promote_black_queen2, n);
    promote_black_queen2->setGeometry(0, 960, 80, 80);
}

void MainWindow::click_new_promote_black_queen3() {
    set_hide();
    to_eat(promote_black_queen3, n);
    promote_black_queen3->setGeometry(0, 960, 80, 80);
}

void MainWindow::click_new_promote_black_queen4() {
    set_hide();
    to_eat(promote_black_queen4, n);
    promote_black_queen4->setGeometry(0, 960, 80, 80);
}

void MainWindow::click_new_promote_black_queen5() {
    set_hide();
    to_eat(promote_black_queen5, n);
    promote_black_queen5->setGeometry(0, 960, 80, 80);
}

void MainWindow::click_new_promote_black_queen6() {
    set_hide();
    to_eat(promote_black_queen6, n);
    promote_black_queen6->setGeometry(0, 960, 80, 80);
}

void MainWindow::click_new_promote_black_queen7() {
    set_hide();
    to_eat(promote_black_queen7, n);
    promote_black_queen7->setGeometry(0, 960, 80, 80);
}

void MainWindow::click_new_promote_black_queen8() {
    set_hide();
    to_eat(promote_black_queen8, n);
    promote_black_queen8->setGeometry(0, 960, 80, 80);
}

void MainWindow::click_new_promote_white_queen1() {
    set_hide();
    to_eat(promote_white_queen1, n);
    promote_white_queen1->setGeometry(0, 960, 80, 80);
}

void MainWindow::click_new_promote_white_queen2() {
    set_hide();
    to_eat(promote_white_queen2, n);
    promote_white_queen2->setGeometry(0, 960, 80, 80);
}

void MainWindow::click_new_promote_white_queen3() {
    set_hide();
    to_eat(promote_white_queen3, n);
    promote_white_queen3->setGeometry(0, 960, 80, 80);
}

void MainWindow::click_new_promote_white_queen4() {
    set_hide();
    to_eat(promote_white_queen4, n);
    promote_white_queen4->setGeometry(0, 960, 80, 80);
}

void MainWindow::click_new_promote_white_queen5() {
    set_hide();
    to_eat(promote_white_queen5, n);
    promote_white_queen5->setGeometry(0, 960, 80, 80);
}

void MainWindow::click_new_promote_white_queen6() {
    set_hide();
    to_eat(promote_white_queen6, n);
    promote_white_queen6->setGeometry(0, 960, 80, 80);
}

void MainWindow::click_new_promote_white_queen7() {
    set_hide();
    to_eat(promote_white_queen7, n);
    promote_white_queen7->setGeometry(0, 960, 80, 80);
}

void MainWindow::click_new_promote_white_queen8() {
    set_hide();
    to_eat(promote_white_queen8, n);
    promote_white_queen8->setGeometry(0, 960, 80, 80);
}
//switch
void MainWindow::receivestart() {
    ui->restart->show();
    ui->edit->show();
    set_chess_play();
    this->show();
}

void MainWindow::receiveedit() {
    set_hide();
    ui->restart->hide();
    ui->edit->hide();
    set_chess_edit();
    this->show();
}

void MainWindow::receiveagain() {
    set_hide();
    set_chess_play();
    this->show();
}

void MainWindow::on_restart_clicked()
{
    set_chess_play();
}

void MainWindow::on_edit_clicked()
{
    ui->restart->hide();
    ui->edit->hide();
    set_chess_edit();
}

void MainWindow::on_back_clicked() {
    emit showbegin();
    this->hide();
}

void MainWindow::on_end_clicked()
{
    emit quit();
}

#include "begin.h"
#include "mainwindow.h"
//#include "edit.h"
#include "b_win.h"
#include "w_win.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    begin b;
    MainWindow w;
    //edit e;
    b_win bw;
    w_win ww;
    b.show();

    QObject::connect(&b, SIGNAL(showmainwindow()), &w, SLOT(receivestart()));
    //QObject::connect(&b, SIGNAL(showedit()), &e, SLOT(receiveedit()));
    QObject::connect(&b, SIGNAL(showedit()), &w, SLOT(receiveedit()));

    QObject::connect(&w, SIGNAL(showbegin()), &b, SLOT(receiveback_w()));
    //QObject::connect(&e, SIGNAL(showbegin()), &b, SLOT(receiveback_e()));

    QObject::connect(&w, SIGNAL(white_win()), &ww, SLOT(receivewhite_win()));
    QObject::connect(&w, SIGNAL(black_win()), &bw, SLOT(receiveblack_win()));

    QObject::connect(&bw, SIGNAL(showMainWindow()), &w, SLOT(receiveagain()));
    QObject::connect(&ww, SIGNAL(showMainWindow()), &w, SLOT(receiveagain()));

    QObject::connect(&b, SIGNAL(quit()), &a, SLOT(quit()));
    QObject::connect(&w, SIGNAL(quit()), &a, SLOT(quit()));
    //QObject::connect(&e, SIGNAL(quit()), &a, SLOT(quit()));
    QObject::connect(&bw, SIGNAL(quit()), &a, SLOT(quit()));
    QObject::connect(&ww, SIGNAL(quit()), &a, SLOT(quit()));

    return a.exec();
}

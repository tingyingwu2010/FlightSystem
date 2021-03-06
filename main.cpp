#include "mainwindow.h"
#include <QApplication>
#include "login.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    Login login;// 新建一个登陆实例
    w.setWindowTitle("FightSystem");// 修改窗口名称
    login.setWindowTitle("FightSystem - 入口");
    if(login.exec() == QDialog::Accepted)// 模式对话框结束后
    {
        w.show();
        return a.exec();
    }
    return 0;
}


// 关于信号与槽机制的补充
// 本程序中不使用connect进行信号与槽的链接
// 原因如下：
// 就是说如果槽的命名是这样的话：void on_<widget name>_<signal name>(<signal parameters>);
// 就会自动将widget name中的信号signal name和这个槽void on_<widget name>_<signal name>(<signal parameters>)链接起来。

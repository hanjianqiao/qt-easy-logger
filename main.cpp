#include <QApplication>
#include "samplewindow.h"
#include "logger.h" // 这里引入头文件

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    // 使用这个函数启用功能
    qInstallMessageHandler(h::Logger::messageHandler);

    // 然后在项目内就可以使用输出了
    qDebug() << "这是测试输出";
    qCritical() << "This is a critical message!";
    qWarning() << "添加一条警告信息！";

    SampleWindow w;
    w.show();

    return a.exec();
}

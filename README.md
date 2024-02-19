# QtEasyLogger 简单易用的Qt格式化日志库

## 使用方式
1. 将本项目添加到你的项目，注意配置引用路径
2. 调用`qInstallMessageHandler(h::Logger::messageHandler);`，即可启用功能。

## 例子
### 代码
```c++
#include "samplewindow.h"
#include <QApplication>
#include "logger.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    qInstallMessageHandler(h::Logger::messageHandler);

    qDebug() << "这是测试输出";
    qCritical() << "This is a critical message!";

    SampleWindow w;
    w.show();

    return a.exec();
}
```
### 效果
![image](https://github.com/hanjianqiao/qt-easy-logger/assets/7146341/feb20cf7-814e-4176-a728-d0d242d55b0e)

## 更多
本项目使用MIT协议，欢迎使用、提建议、参与贡献。

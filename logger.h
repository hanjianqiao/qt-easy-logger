#ifndef LOGGER_H
#define LOGGER_H

#include <QObject>
#include "logview.h"

namespace h {
class Logger : public QObject
{
    Q_OBJECT
public:
    static void messageHandler(QtMsgType type, const QMessageLogContext &context, const QString &msg);

    static Logger *instance();
    static void openLogView();
    static void setFilePathSkipCharCount(int count);

signals:

private:
    static LogView *s_logView;
    static int s_filePathSkipCharCount;
};

}
#endif // LOGGER_H

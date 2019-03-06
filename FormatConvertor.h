#ifndef __FORMAT_CONVERTOR_H__
#define __FORMAT_CONVERTOR_H__

#include <QWidget>
#include <QVBoxLayout>

class FormatConvertor : public QWidget
{
    Q_OBJECT

public:
    explicit FormatConvertor(QWidget *parent = 0);
    ~FormatConvertor();

private:
    QVBoxLayout * _main_layout;
};

#endif // __FORMAT_CONVERTOR_H__

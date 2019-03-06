#pragma once

#include <QWidget>
#include <QHBoxLayout>

class Navigate : public QWidget
{
    Q_OBJECT

public:
    explicit Navigate(QWidget *parent = 0);
    ~Navigate();

private:
    QHBoxLayout * _layout;
};

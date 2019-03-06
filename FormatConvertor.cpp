#include "FormatConvertor.h"

#include <QStringList> 

FormatConvertor::FormatConvertor(QWidget *parent) :
    QWidget(parent)    
{
    if (this->objectName().isEmpty())
    {
        this->setObjectName(QStringLiteral("format_convertor"));
    }

    this->resize(400, 200);
    this->setWindowTitle(QStringLiteral("PDF-Word×ª»»Æ÷"));
}

FormatConvertor::~FormatConvertor()
{
}

#include "iexceldocument.h"

void IExcelDocument::setFileName(const QString &fileName)
{
    m_fileName = fileName;
}

QString IExcelDocument::fileName() const
{
    return m_fileName;
}

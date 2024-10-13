#ifndef IEXCELDOCUMENT_H
#define IEXCELDOCUMENT_H

#include <QString>

class IExcelDocument
{
public:
    virtual void save() = 0;
    void setFileName(const QString &fileName);
    QString fileName() const;
protected:
    QString m_fileName;
};

#endif // IEXCELDOCUMENT_H

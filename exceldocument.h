#ifndef EXCELDOCUMENT_H
#define EXCELDOCUMENT_H

#include "iexceldocument.h"

class QTableWidget;

class ExcelDocument : public IExcelDocument
{
public:
    ExcelDocument();
    void save() override;
    void setTableWidget(QTableWidget *tableWidget);
    QTableWidget* tableWidget() const;
private:
    QTableWidget *m_tableWidget;
};

#endif // EXCELDOCUMENT_H

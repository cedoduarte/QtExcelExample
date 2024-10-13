#include "exceldocument.h"

#include <xlsxwriter.h>
#include <QTableWidget>
#include <QTableWidgetItem>

ExcelDocument::ExcelDocument()
{
    m_tableWidget = nullptr;
}

void ExcelDocument::save()
{
    if (!m_tableWidget)
    {
        return;
    }
    int rowCount = m_tableWidget->rowCount();
    int columnCount = m_tableWidget->columnCount();
    if (rowCount == 0 || columnCount == 0)
    {
        return;
    }
    lxw_workbook  *workbook  = workbook_new(m_fileName.toStdString().c_str());
    lxw_worksheet *worksheet = workbook_add_worksheet(workbook, nullptr);
    for (int iColumn = 0; iColumn < columnCount; iColumn++)
    {
        for (int iRow = 0; iRow < rowCount; iRow++)
        {
            QTableWidgetItem *item = m_tableWidget->item(iRow, iColumn);
            QString itemText = "";
            if (item)
            {
                itemText = item->text();
            }
            worksheet_write_string(worksheet, iRow, iColumn, itemText.toStdString().c_str(), nullptr);
        }
    }
    workbook_close(workbook);
}

void ExcelDocument::setTableWidget(QTableWidget *tableWidget)
{
    m_tableWidget = tableWidget;
}

QTableWidget *ExcelDocument::tableWidget() const
{
    return m_tableWidget;
}

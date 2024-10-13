#include "exampledocument.h"

#include <xlsxwriter.h>

ExampleDocument::ExampleDocument() {}

void ExampleDocument::save()
{
    // Create a new workbook
    lxw_workbook  *workbook  = workbook_new(m_fileName.toStdString().c_str());

    // Add a new worksheet
    lxw_worksheet *worksheet = workbook_add_worksheet(workbook, nullptr);

    // Write some data to the worksheet
    worksheet_write_string(worksheet, 0, 0, "Hello", nullptr);          // A1
    worksheet_write_string(worksheet, 0, 1, "World", nullptr);          // B1
    worksheet_write_number(worksheet, 1, 0, 123, nullptr);              // A2
    worksheet_write_number(worksheet, 1, 1, 456.78, nullptr);           // B2

    // Create a simple formula
    worksheet_write_formula(worksheet, 2, 0, "A2 + B2", nullptr);       // A3

    // Close the workbook to save it
    workbook_close(workbook);
}

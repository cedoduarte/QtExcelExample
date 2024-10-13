#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "exampledocument.h"
#include "exceldocument.h"

#include <QMessageBox>
#include <QFileDialog>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionClose_triggered()
{
    close();
}

void MainWindow::on_buttonSaveDocument_clicked()
{
    int rowCount = ui->tableWidget->rowCount();
    int columnCount = ui->tableWidget->columnCount();
    if (rowCount == 0 || columnCount == 0)
    {
        return;
    }
    QString fileName = QFileDialog::getSaveFileName(this, "Save file", "/", "Excel file (*.xlsx)");
    if (fileName.isEmpty())
    {
        return;
    }
    ExcelDocument doc;
    doc.setFileName(fileName);
    doc.setTableWidget(ui->tableWidget);
    doc.save();
    QMessageBox::information(this, "OK", "Done");
}

void MainWindow::on_buttonSaveExampleDocument_clicked()
{
    ExampleDocument doc;
    doc.setFileName("example.xlsx");
    doc.save();
    QMessageBox::information(this, "OK", "Done");
}

void MainWindow::on_buttonNewRow_clicked()
{
    ui->tableWidget->insertRow(ui->tableWidget->rowCount());
}

void MainWindow::on_buttonNewColumn_clicked()
{
    ui->tableWidget->insertColumn(ui->tableWidget->columnCount());
}

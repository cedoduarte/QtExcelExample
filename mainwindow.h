#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui
{
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private slots:
    void on_actionClose_triggered();
    void on_buttonSaveDocument_clicked();
    void on_buttonSaveExampleDocument_clicked();
    void on_buttonNewRow_clicked();
    void on_buttonNewColumn_clicked();
private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H

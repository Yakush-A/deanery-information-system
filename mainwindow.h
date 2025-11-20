#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QWidget>
#include <QTableWidget>
#include <QTableWidgetItem>
#include <QStringList>

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr)
    {
        this->setWindowTitle("Информационная система деканата");

        int rows{10}, cols{5};

        table = new QTableWidget(rows, cols, this);
        table->setMinimumSize(1000, 1000);


        for(int i{}; i<rows; i++)
        {
            for(int j{}; j<cols; j++)
            {
                QTableWidgetItem *newItem = new QTableWidgetItem(tr("%1").arg(
                    (i+1)*(j+1)));
                table->setItem(i, j, newItem);
            }
        }


    }

signals:


private:
    QTableWidget* table;

    void createUI(const QStringList &headers);
};

#endif // MAINWINDOW_H

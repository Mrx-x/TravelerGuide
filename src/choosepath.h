#ifndef CHOOSEPATH_H
#define CHOOSEPATH_H

#include <QWidget>
#include <QFileDialog>
#include <QDebug>

namespace Ui {
class ChoosePath;
}

class ChoosePath : public QWidget
{
    Q_OBJECT

public:
    explicit ChoosePath(QWidget *parent = 0);

    QString path;

    ~ChoosePath();

private:
    Ui::ChoosePath *ui;

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

signals:
    void transferPath(QString path);
};

#endif // CHOOSEPATH_H

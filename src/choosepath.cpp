#include "choosepath.h"
#include "ui_choosepath.h"

ChoosePath::ChoosePath(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ChoosePath)
{
    ui->setupUi(this);
}

ChoosePath::~ChoosePath()
{
    delete ui;
}

void ChoosePath::on_pushButton_clicked()
{
    emit transferPath(path);
    this->close();
}

void ChoosePath::on_pushButton_2_clicked()
{
    path = QFileDialog::getSaveFileName(this, tr("Save file"), "database/", tr("DataBase (*.db)"));
    qDebug() << "[path] - " << path;
}

#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    MyDatabase* myDatabase = new MyDatabase();
    myDatabase->connection();
    ui->statusBar->showMessage(myDatabase->database.lastError().text());
    //myDatabase.request_to_create_minimal_records(db);

    model = new QSqlTableModel(this, myDatabase->database);
    model->setTable("Trip");
    //model->setEditStrategy(QSqlTableModel::OnManualSubmit);
    model->select();
    ui->tableView->setModel(model);

    //Create treeWidget
    QTreeWidget* pTreeWidget = ui->treeWidget;
    QStringList lst;

    lst << tr("Список вещей") << tr("положил/не положил");
    pTreeWidget->setHeaderLabels(lst);
    //pTreeWidget->setSortingEnabled(true);

    QTreeWidgetItem* pOuterwear = new QTreeWidgetItem(pTreeWidget);
    pOuterwear->setText(0, tr("Верхняя одежда"));
    pOuterwear->setExpanded(true);
    QTreeWidgetItem* pUnderwear = new QTreeWidgetItem(pTreeWidget);
    pUnderwear->setText(0, tr("Нижняя одежда"));
    pUnderwear->setExpanded(true);
    QTreeWidgetItem* pDocument = new QTreeWidgetItem(pTreeWidget);
    pDocument->setText(0, tr("Документы"));
    pDocument->setExpanded(true);

    QStringList lstItem;
    lstItem << tr("Шапка") << tr("Куртка") << tr("Футболки") << tr("Кофты");

    for(int i = 0; i < lstItem.size(); ++i) {
        QTreeWidgetItem* pOuterwearItem = new QTreeWidgetItem(pOuterwear);
        pOuterwearItem->setText(0, lstItem[i]);
        pOuterwearItem->setText(1, QString());
        pOuterwearItem->setCheckState(1, Qt::Unchecked);
        pOuterwearItem->setFlags(pOuterwearItem->flags() | Qt::ItemIsEditable);
    }
    lstItem.clear();
    lstItem << tr("Штаны") << tr("Носки");

    for(int i = 0; i < lstItem.size(); ++i) {
        QTreeWidgetItem* pUnderwearItem = new QTreeWidgetItem(pUnderwear);
        pUnderwearItem->setText(0, lstItem[i]);
        pUnderwearItem->setText(1, QString());
        pUnderwearItem->setCheckState(1, Qt::Unchecked);
        pUnderwearItem->setFlags(pUnderwearItem->flags() | Qt::ItemIsEditable);
    }
    lstItem.clear();
    lstItem << tr("Паспорт") << tr("Водительское удостоверение");

    for(int i = 0; i < lstItem.size(); ++i) {
        QTreeWidgetItem* pDocumentItem = new QTreeWidgetItem(pDocument);
        pDocumentItem->setText(0, lstItem[i]);
        pDocumentItem->setText(1, QString());
        pDocumentItem->setCheckState(1, Qt::Unchecked);
        pDocumentItem->setFlags(pDocumentItem->flags() | Qt::ItemIsEditable);
    }
    //--

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_buttonTrips_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_pushButtonAdd_clicked()
{
    model->insertRow(model->rowCount());
}

void MainWindow::on_pushButtonDelete_clicked()
{
        model->removeRow(row);
}

void MainWindow::on_tableView_clicked(const QModelIndex &index)
{
    row = index.row();
}

void MainWindow::on_pushButtonSearch_clicked()
{
    if(ui->radioButtonAll->isChecked()) {
        model->setFilter(QString("Страна = '%1' "
                                 "OR Город = '%1' "
                                 "OR Маршрут = '%1' "
                                 "OR 'Минимальный список вещей' = '%1' "
                                 "OR Погода = '%1' "
                                 "OR 'Время в пути' = '%1' "
                                 "OR Вебсайт = '%1'").arg(ui->lineEdit->text()));
    }else if(ui->radioButtonCity->isChecked()) {
        model->setFilter(QString("Город = '%1'").arg(ui->lineEdit->text()));
    }else{
        model->setFilter(QString("Страна = '%1'").arg(ui->lineEdit->text()));
    }
}

void MainWindow::on_pushButtonCancel_clicked()
{
    model->setFilter(QString());
}

void MainWindow::on_buttonListOfThings_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

void MainWindow::on_pbAddTreeWidgetItem_clicked()
{
    QTreeWidgetItem* newItem = new QTreeWidgetItem(ui->treeWidget->currentItem());
    newItem->setText(0, tr("Введите название"));
    newItem->setFlags(newItem->flags() | Qt::ItemIsEditable);
}

void MainWindow::on_pbRemoteWidgetItem_clicked()
{
    delete ui->treeWidget->currentItem();

}

#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(0);
    ui->tableWidget->setFocusPolicy(Qt::NoFocus);

    formChoosePath = new ChoosePath; //форма выбора пути БД
    connect(formChoosePath, &ChoosePath::transferPath, this, &MainWindow::getPath);

    MyDatabase* myDatabase = new MyDatabase();
    myDatabase->connection();
    ui->statusBar->showMessage(myDatabase->database.lastError().text());
    //myDatabase.request_to_create_minimal_records(db);

    model = new QSqlTableModel(this, myDatabase->database);
    model->setTable("Trip");
    //model->setEditStrategy(QSqlTableModel::OnManualSubmit);
    model->select();
    ui->tableView->setModel(model);

    //Создание бд для фото
    //createConnetion();
    //createTables();

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

//---Переход по страницам
void MainWindow::on_buttonTrips_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_buttonListOfThings_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

void MainWindow::on_buttonTravelerCard_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}

void MainWindow::on_ButtonTripPlan_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);
}
//---

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

void MainWindow::on_pbAddPhoto_clicked()
{
    pathPhoto = QFileDialog::getOpenFileName(this, "Open file", "./", tr("Images (*.png *.jpg *.xmp)"));
    QPixmap photo(pathPhoto);
    ui->profileLogo->setPixmap(photo);
}

void MainWindow::on_pbAddPassport_clicked()
{
    pathPassport = QFileDialog::getOpenFileName(this, "Open file", "./", tr("Images (*.png *.jpg *.xmp)"));
}

void MainWindow::on_pbViewPassport_clicked()
{
    QLabel* lViewPassport = new QLabel();
    lViewPassport->resize(800, 800);
    lViewPassport->setAlignment(Qt::AlignCenter);
    lViewPassport->setPixmap(QPixmap(pathPassport));
    lViewPassport->show();
}

void MainWindow::on_pbAddTicket_clicked()
{
    pathTicket = QFileDialog::getOpenFileName(this, "Open file", "./", tr("Images (*.png *.jpg *.xmp)"));
}

void MainWindow::on_pbViewTicket_clicked()
{
    QLabel* lViewTicket = new QLabel();
    lViewTicket->resize(800, 800);
    lViewTicket->setAlignment(Qt::AlignCenter);
    lViewTicket->setPixmap(QPixmap(pathTicket));
    lViewTicket->show();
}

void MainWindow::on_pbSaveCard_clicked()
{
    this->saveFileXml(this);
}


void MainWindow::saveFileXml(MainWindow* obj) {
    QDomDocument doc("Profile");
    QDomElement domElement = doc.createElement("Profile");
    doc.appendChild(domElement);

    QDomElement photo = doc.createElement("Photo");
    photo.setAttribute("Path", obj->pathPhoto);
    domElement.appendChild(photo);

    QDomElement aboutMe = doc.createElement("AboutMe");
    aboutMe.setAttribute("Text", ui->leAboutMe->text());
    domElement.appendChild(aboutMe);

    QDomElement notes = doc.createElement("Notes");
    notes.setAttribute("Text", ui->leNotes->text());
    domElement.appendChild(notes);

    QDomElement myReferences = doc.createElement("References");
    myReferences.setAttribute("Text", ui->leReferences->text());
    domElement.appendChild(myReferences);

    QDomElement passport = doc.createElement("Passport");
    passport.setAttribute("Path", obj->pathPassport);
    domElement.appendChild(passport);

    QDomElement ticket = doc.createElement("Ticket");
    ticket.setAttribute("Path", obj->pathTicket);
    domElement.appendChild(ticket);

    QString path = QFileDialog::getSaveFileName(this, tr("Save file"), "./", tr("Xml (*.xml)"));
    QFile file(path);
    if(!file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        qDebug() << "failed to open file for writing";

    }else {
        QTextStream stream(&file);
        stream << doc.toString();
        file.close();
        qDebug() << "File save";
    }
}


void MainWindow::on_pbLoadCard_clicked()
{
    QDomComment document;
    QString path = QFileDialog::getOpenFileName(this, tr("Open file"), "./", tr("Xml (*.xml)"));
    QFile file(path);
    if(!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        qDebug() << "failed to open file for reading";
    }else{
    QByteArray buff = file.readAll();
    QXmlStreamReader xmlDoc(buff);

    while(!xmlDoc.atEnd() && !xmlDoc.hasError()) {
        QXmlStreamReader::TokenType token = xmlDoc.readNext();
        if(token == QXmlStreamReader::StartElement) {
            if(xmlDoc.name() == "Photo") {
                QXmlStreamAttributes attrb = xmlDoc.attributes();
                ui->profileLogo->setPixmap(QPixmap(attrb.value("Path").toString()));
                //qDebug() << attrb.value("Path").toString();
            }

            if(xmlDoc.name() == "AboutMe") {
                QXmlStreamAttributes attrb = xmlDoc.attributes();
                ui->leAboutMe->setText(attrb.value("Text").toString());
                //qDebug() << attrb.value("Text").toString();
            }

            if(xmlDoc.name() == "Notes") {
                QXmlStreamAttributes attrb = xmlDoc.attributes();
                ui->leNotes->setText(attrb.value("Text").toString());
                //qDebug() << attrb.value("Text").toString();
            }

            if(xmlDoc.name() == "References") {
                QXmlStreamAttributes attrb = xmlDoc.attributes();
                ui->leReferences->setText(attrb.value("Text").toString());
                //qDebug() << attrb.value("Text").toString();
            }

            if(xmlDoc.name() == "Passport") {
                QXmlStreamAttributes attrb = xmlDoc.attributes();
                pathPassport = attrb.value("Path").toString();
                //qDebug() << attrb.value("Path").toString();
            }

            if(xmlDoc.name() == "Ticket") {
                QXmlStreamAttributes attrb = xmlDoc.attributes();
                pathTicket = attrb.value("Path").toString();
                //qDebug() << attrb.value("Path").toString();
            }
        }
    }
    }

}
//---План поездки
//Сохранить изображение в БД
void MainWindow::on_ButtonLoadingTripPhoto_clicked()
{
    PhotoTripPath = QFileDialog::getOpenFileName(0, "Изображения (*.jpg *.png *.bmp *.jpeg)");

    if(PhotoTripPath.isEmpty()) {
        return;
    }
    //QMessageBox::information(0, tr("Изображение"), tr("Изображение открыто"));
    QPixmap pix(PhotoTripPath);
    qDebug() << PhotoTripPath;
    PhotoTripName = QFileInfo(PhotoTripPath).baseName();

    QSqlQuery query;
    query.prepare("INSERT INTO img (filename, imagepath) VALUES (:fileName, :imagePath)");
    query.bindValue(":fileName", PhotoTripName);
    query.bindValue(":imagePath", PhotoTripPath);

    if(!query.exec()) {
        qDebug() << "Error inserting image into table" << query.lastError();
    }
}

//Считать БД
void MainWindow::on_ButtonViewTripPhoto_clicked()
{
    ui->tableWidget->setColumnCount(3);
    QStringList headerName;
    headerName << "id" << "имя файла" << "миниатюра";
    ui->tableWidget->setHorizontalHeaderLabels(headerName);

    QSqlQuery query;
    QString strQuery("SELECT * FROM img");
    query.exec(strQuery);

    int rowCount = 0;

    while(query.next()) {
        ui->tableWidget->insertRow(rowCount);

        QTableWidgetItem* id = new QTableWidgetItem;
        QTableWidgetItem* fileName = new QTableWidgetItem;
        QTableWidgetItem* imagePath = new QTableWidgetItem;

        id->setText(query.value(0).toString());
        fileName->setText(query.value(1).toString());

        QString img_path = query.value(2).toString();
        imagePath->setData(Qt::DecorationRole, QPixmap(img_path).scaled(150, 100, Qt::KeepAspectRatio, Qt::SmoothTransformation));
        imagePath->setText(query.value(2).toString());
        ui->tableWidget->setItem(rowCount, 0, id);
        ui->tableWidget->setItem(rowCount, 1, fileName);
        ui->tableWidget->setItem(rowCount, 2, imagePath);

        fileName->setTextAlignment(Qt::AlignCenter | Qt::AlignVCenter);
        ui->tableWidget->setRowHeight(rowCount, 100);
        ui->tableWidget->setColumnWidth(1, 150);
        ui->tableWidget->setColumnWidth(2, 150);

        rowCount++;
    }
    ui->tableWidget->setColumnHidden(0, true); //Скрыл столбец id
}
//---Выбор плана поездки Загрузить/Создать
void MainWindow::on_ButtonNewPlanTrips_clicked()
{
    formChoosePath->show();
}

void MainWindow::on_ButtonSavePlanTrips_clicked()
{
    QDomDocument doc("PlanTrips");
    QDomElement domElement = doc.createElement("Plan");
    doc.appendChild(domElement);

    QDomElement record = doc.createElement("Record");
    record.setAttribute("Text", ui->lePlanTrips->text());
    domElement.appendChild(record);

    QDomElement pathPhoto = doc.createElement("pathDB");
    pathPhoto.setAttribute("Path", pathPhotoDB);
    domElement.appendChild(pathPhoto);

    QString path = QFileDialog::getSaveFileName(this, tr("Save file"), "./", tr("Xml (*.xml)"));
    QFile file(path);
    if(!file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        qDebug() << "failed to open file for writing";

    }else {
        QTextStream stream(&file);
        stream << doc.toString();
        file.close();
        qDebug() << "File save";
    }
}

void MainWindow::getPath(QString path)
{
    pathPhotoDB = path;
    ui->stackedWidget->setCurrentIndex(4);
    createConnetion(pathPhotoDB);
    createTables();
}

void MainWindow::on_ButtonLoadPlanTrips_clicked()
{
    QDomComment document;
    QString path = QFileDialog::getOpenFileName(this, tr("Open file"), "./", tr("Xml (*.xml)"));
    QFile file(path);
    if(!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        qDebug() << "failed to open file for reading";
    }else{

    QByteArray buff = file.readAll();
    QXmlStreamReader xmlDoc(buff);

    while(!xmlDoc.atEnd() && !xmlDoc.hasError()) {
            QXmlStreamReader::TokenType token = xmlDoc.readNext();
            if(token == QXmlStreamReader::StartElement) {
                if(xmlDoc.name() == "Record") {
                    QXmlStreamAttributes attrb = xmlDoc.attributes();
                    ui->lePlanTrips->setText(attrb.value("Text").toString());
                }
                if(xmlDoc.name() == "pathDB") {
                    QXmlStreamAttributes attrb = xmlDoc.attributes();
                    createConnetion(attrb.value("Path").toString());
                    createTables();
                    MainWindow::on_ButtonViewTripPhoto_clicked();
                }
            }
        }
    }
    ui->stackedWidget->setCurrentIndex(4);
}

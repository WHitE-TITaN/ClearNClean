#include "smartfolder.h"
#include "ui_smartfolder.h"

SmartFolder::SmartFolder(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::SmartFolder)
{
    ui->setupUi(this);
}

SmartFolder::~SmartFolder()
{
    delete ui;
}

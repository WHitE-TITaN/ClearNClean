#ifndef SMARTFOLDER_H
#define SMARTFOLDER_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class SmartFolder;
}
QT_END_NAMESPACE

class SmartFolder : public QMainWindow
{
    Q_OBJECT

public:
    SmartFolder(QWidget *parent = nullptr);
    ~SmartFolder();

private:
    Ui::SmartFolder *ui;
};
#endif // SMARTFOLDER_H

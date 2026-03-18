#ifndef MASTERWINDOW_H
#define MASTERWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MasterWindow;
}
QT_END_NAMESPACE

class MasterWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MasterWindow(QWidget *parent = nullptr);
    ~MasterWindow() override;

private:
    Ui::MasterWindow *ui;
};
#endif // MASTERWINDOW_H

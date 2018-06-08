#ifndef SQUARE1_H
#define SQUARE1_H

#include <QMainWindow>
#include <QtMath>

namespace Ui {
class square1;
}

class square1 : public QMainWindow
{
    Q_OBJECT

public:
    explicit square1(QWidget *parent = 0);
    ~square1();

private slots:
    void on_toolButton_pressed();

private:
    Ui::square1 *ui;
};

#endif // SQUARE1_H

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsEllipseItem>
#include <QGraphicsScene>
#include <QWheelEvent>
#include <QPolygonF>
#include <QFileDialog>
#include <QPainter>
#include <QImage>
#include <QShortcut>
enum userColor {
  blackCol = 0,
  redCol = 1,
  blue = 2,
  white = 3,
  yellow = 4
};

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_drawText_clicked();

    void on_rotateButton_clicked();

    void on_saveButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();
    void ShortcutDelete();
public:
     QShortcut * keyDelete;
private:
    Ui::MainWindow *ui;
    QGraphicsScene *scene;
    QGraphicsEllipseItem *ellipse;
    QGraphicsPolygonItem *polygon;
    QGraphicsRectItem *rect;
    QGraphicsSimpleTextItem *textItem;
    QGraphicsLineItem *line;

protected:
    virtual void wheelEvent(QWheelEvent* event);
};

#endif // MAINWINDOW_H

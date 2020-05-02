#ifndef GRAPHICSCUSTOM_H
#define GRAPHICSCUSTOM_H

#include <QWidget>
#include <QMouseEvent>
#include <QGraphicsView>
#include <QPoint>
#include <QList>


#define GRAPHICSVIEWDIMS QRect(400,30,645,480)


class GraphicsCustom : public QGraphicsView
{
    Q_OBJECT
public:
    explicit GraphicsCustom(QWidget *parent = nullptr);
    void FinaliseShape();

    QGraphicsScene *scene;
    bool drawingPoly = false;
    QPolygonF poly;





public slots:
    void mousePressEvent(QMouseEvent *e);







};

#endif // GRAPHICSCUSTOM_H

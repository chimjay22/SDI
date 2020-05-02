#include "graphicscustom.h"
#include <QMessageBox>
#include <QGraphicsItem>



// Custom Graphics View widget with enhanced click featuresb
GraphicsCustom::GraphicsCustom(QWidget *parent) : QGraphicsView(parent)
{
    scene = new QGraphicsScene();
    this->setGeometry(GRAPHICSVIEWDIMS);
    this->setSceneRect(QRect(0,0,GRAPHICSVIEWDIMS.width(), GRAPHICSVIEWDIMS.height()));
    this->setScene(scene);
}

void GraphicsCustom::FinaliseShape()
{
    if(drawingPoly && poly.count() >= 3)
    {
        // add shape to the screen
        QPen redPen(Qt::red);
        redPen.setWidth(2);
        auto newshape = this->scene->addPolygon(poly, redPen);
        newshape->setFlag(QGraphicsItem::ItemIsSelectable, true);
        newshape->setFlag(QGraphicsItem::ItemIsMovable, true);
    }
    else // only draw poly with min of 3 pts
    {
        QMessageBox::information(this, "ERROR", "Need a minimum of 3 points to create a polygon, try again.");
    }

    foreach (QGraphicsItem* item, scene->items())
    {
        // remove the polygon points
        if(item->type() == QGraphicsEllipseItem::Type)
        {
            scene->removeItem(item); // release memory
            delete item;
        }
    }

    // release memory and reset flag
    poly.clear();
    drawingPoly = false;
}

void GraphicsCustom::mousePressEvent(QMouseEvent *e)
{
    QGraphicsView::mousePressEvent(e);
    if (drawingPoly && poly.count() < 8)
    {
        double rad = 5;
                QPointF pt = mapToScene(e->pos());
                scene->addEllipse(pt.x()-rad, pt.y()-rad, rad*2.0, rad*2.0,
                    QPen(Qt::red), QBrush(Qt::SolidPattern));
                poly.append(pt);
    }

}



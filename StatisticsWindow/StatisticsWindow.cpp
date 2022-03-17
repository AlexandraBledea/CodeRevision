//
// Created by Alexandra on 6/17/2021.
//

#include <QPainter>
#include "StatisticsWindow.h"
#include <QMessageBox>

StatisticsWindow::StatisticsWindow(RepoProgrammers &repoProgrammers,Files& files, QWidget *parent):repoProgrammers{repoProgrammers}, files{files},
                                                                                      QWidget{parent} {
    this->files.addObserver(this);
    this->setWindowTitle(QString::fromStdString("Statistics"));
    this->show();
}

StatisticsWindow::~StatisticsWindow() {

}

void StatisticsWindow::update() {
    this->repaint();
}

void StatisticsWindow::paintEvent(QPaintEvent *event) {
    this->x=0;
    this->y=0;
    for(auto & p: this->repoProgrammers.getAll()){
        drawCircle(p);
    }
}

void StatisticsWindow::drawCircle(Programmer &p) {
    QPainter painter{this};
    if(p.getNrRevisedFiles() >= p.getTotalFiles()){
        QPen pen{Qt::blue, 1, Qt::SolidLine, Qt::RoundCap};
        painter.setPen(pen);
        QBrush brush{Qt::blue, Qt::FDiagPattern};
        painter.setBrush(brush);
    }
    else
    {
        QPen pen{Qt::black, 1, Qt::SolidLine, Qt::RoundCap};
        painter.setPen(pen);
        QBrush brush{Qt::black, Qt::FDiagPattern};
        painter.setBrush(brush);
    }

    int size = p.getNrRevisedFiles();
    this->x+=size*5;
    this->y+=size*5;
    QString name = QString::fromStdString(p.getName());
    painter.drawEllipse(this->x,this->y, size*10, size*10);
    painter.drawText(this->x+size*15,this->y+size*5, name);
    this->y+=size*10;
    this->x=0;
}

QSize StatisticsWindow::sizeHint() const {
    return QSize{ 600, 400 };
}

void StatisticsWindow::resizeEvent(QResizeEvent *event) {
    this->x=0;
    this->y=0;
}

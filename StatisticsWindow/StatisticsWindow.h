//
// Created by Alexandra on 6/17/2021.
//

#pragma once
#include "Observer.h"
#include <QWidget>
#include "RepoProgrammers.h"
#include "Files.h"
#include <QPushButton>
#include <QLineEdit>
#include <QListWidget>
#include <QLabel>
#include "TableModel.h"
#include <QTableView>
#include <QVBoxLayout>

class StatisticsWindow: public  QWidget, public  Observer{
private:
    RepoProgrammers& repoProgrammers;
    Files& files;
    int x=0;
    int y=0;

public:
    StatisticsWindow(RepoProgrammers& repoProgrammers, Files& files, QWidget*parent=Q_NULLPTR);
    ~StatisticsWindow();
    void update() override;
    QSize sizeHint() const Q_DECL_OVERRIDE;
    void drawCircle(Programmer& p);
    void resizeEvent(QResizeEvent *event);
    void paintEvent(QPaintEvent *event);

};

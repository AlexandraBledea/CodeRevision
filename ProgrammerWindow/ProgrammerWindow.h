//
// Created by Alexandra on 6/16/2021.
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
#include <QSortFilterProxyModel>

class ProgrammerWindow: public QWidget, public Observer{

public:
    Programmer& p;
    Files& files;
    QLineEdit* fileNameLineEdit;
    QVBoxLayout* mainLayout;
    QGridLayout* buttonsLayout;
    QPushButton* addFileButton, *reviseFileButton;
    QLabel* nrReviewedFilesLabel , *nrLeftFilesLabel;
    TableModel* tableModel;
    QTableView* sourceFilesTableView;
    QSortFilterProxyModel* filterModel;
    ProgrammerWindow(Files& files, Programmer& p, QWidget*parent = Q_NULLPTR);
    ~ProgrammerWindow();
    void update() override;
    void notifyModel();
    void checkIfReviseAvailable();
    void revise();
    int getSelectedIndex();
    void connectSignals();
    void initGUI();

public slots:
    void addSourceFile();
};


//    void populateList(vector<SourceFile> files);
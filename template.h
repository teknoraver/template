#ifndef TEMPLATE_H
#define TEMPLATE_H

#include <QMainWindow>

#include "ui_templatewidget.h"

class Template: public QMainWindow, private Ui::MainWindow
{
	Q_OBJECT
public:
	Template();
	~Template();
private slots:
	void about();
};

#endif

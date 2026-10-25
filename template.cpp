#include <QMessageBox>

#include "template.h"

Template::Template(QWidget *parent) : QMainWindow(parent)
{
	setupUi(this);
	connect(actionAbout, &QAction::triggered, this, &Template::about);
	connect(actionAbout_Qt, &QAction::triggered, qApp, &QApplication::aboutQt);
}

Template::~Template()
{
}

void Template::about()
{
	QMessageBox::about(this, "About Template", "Template - a Qt Template application<br>by Matteo Croce <a href=\"http://teknoraver.net/\">http://teknoraver.net/</a>");
}

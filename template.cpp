#include <QMessageBox>

#include "template.h"

Template::Template() : QMainWindow(0)
{
	setupUi(this);
	connect(actionAbout, SIGNAL(triggered()), SLOT(about()));
	connect(actionAbout_Qt, SIGNAL(triggered()), QCoreApplication::instance(), SLOT(aboutQt()));
}

Template::~Template()
{
}

void Template::about()
{
	QMessageBox::about(this, "About Template", "Template - a Qt Template application<br>by Matteo Croce <a href=\"http://teknoraver.net/\">http://teknoraver.net/</a>");
}

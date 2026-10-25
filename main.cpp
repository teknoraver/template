#include <QApplication>
#include <QScreen>
#include "template.h"

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	a.setOrganizationName("TemplateSoft");
	a.setApplicationName("Template");
	Template app;
	app.move(app.screen()->availableGeometry().center() - app.rect().center());
	app.show();
	return a.exec();
}

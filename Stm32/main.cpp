
//#include "dialog.h"
#include "stm32.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication app(argc, argv);
	//Dialog dialog;
	//dialog.show();
	Stm32 stm;
	stm.show();
	return app.exec();
}

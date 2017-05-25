#include "LIBPRO.h"
#include "Librarian.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	Librarian w;
	w.show();
	return a.exec();
}

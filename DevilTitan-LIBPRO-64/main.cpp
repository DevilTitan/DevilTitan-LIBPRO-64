#include "LIBPRO.h"
#include "Librarian.h"
#include "Reader.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
    Reader w;
	w.show();
	return a.exec();
}

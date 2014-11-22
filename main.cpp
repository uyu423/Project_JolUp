#include "QApplication"

#include "JolUpMain.h"

int main(int argc, char *argv[]) {
				QApplication app(argc, argv);
				JolUpMain *main_w = new JolUpMain();

				main_w->show();

				return app.exec();
}

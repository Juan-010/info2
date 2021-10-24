#include <QApplication>
#include <QWidget>	
int main(int argc, char *argv[]){
	QApplication app(argc, argv);
	QWidget window;
	window.resize(400, 200);
	window.setWindowTitle("Mi primer programa Qt");
	window.show();
	return app.exec();
}

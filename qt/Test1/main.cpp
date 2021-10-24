#include <QApplication>
#include <QPushButton>
int main(int argc, char **argv){
    QApplication app(argc, argv);
    QPushButton button;
    QFont font("Courier");
    button.setFont(font);
    button.setText("My text");
    button.setToolTip("A tooltip");
    button.resize(400,400);
    button.show();
    return app.exec();
}

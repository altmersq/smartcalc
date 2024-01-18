#include <locale.h>

#include <QApplication>
#include <QLocale>

#include "mainwindow.h"

int main(int argc, char *argv[]) {
  setlocale(LC_NUMERIC, "");
  QApplication a(argc, argv);
  MainWindow w;
  w.show();
  return a.exec();
}

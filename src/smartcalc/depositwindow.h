#ifndef DEPOSITWINDOW_H
#define DEPOSITWINDOW_H

#include <QWidget>

namespace Ui {
class depositwindow;
}

class depositwindow : public QWidget {
  Q_OBJECT

 public:
  explicit depositwindow(QWidget *parent = nullptr);
  ~depositwindow();

 private slots:
  void on_button_goToCalc_clicked();

  void on_button_goToCredit_clicked();

  void on_button_calculateDeposit_clicked();

 private:
  Ui::depositwindow *ui;
};

#endif  // DEPOSITWINDOW_H

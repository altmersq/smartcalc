#ifndef CREDITCALCWINDOW_H
#define CREDITCALCWINDOW_H

#include <QWidget>

namespace Ui {
class creditcalcWindow;
}

class creditcalcWindow : public QWidget {
  Q_OBJECT

 public:
  explicit creditcalcWindow(QWidget *parent = nullptr);
  ~creditcalcWindow();

 private slots:
  void on_button_goToCalc_clicked();

  void on_button_calculateLoan_clicked();

  void on_button_goToDeposit_clicked();

 private:
  Ui::creditcalcWindow *ui;
};

#endif  // CREDITCALCWINDOW_H

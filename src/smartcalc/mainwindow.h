#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QLineEdit>
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
  Q_OBJECT

 public:
  explicit MainWindow(QWidget *parent = nullptr);
  ~MainWindow();

 private slots:

  void on_button_0_clicked();

  void on_button_1_clicked();

  void on_button_2_clicked();

  void on_button_3_clicked();

  void on_button_4_clicked();

  void on_button_5_clicked();

  void on_button_6_clicked();

  void on_button_7_clicked();

  void on_button_8_clicked();

  void on_button_9_clicked();

  void on_button_point_clicked();

  void on_button_eq_clicked();

  void on_button_c_clicked();

  void on_button_plus_clicked();

  void on_button_minus_clicked();

  void on_button_mul_clicked();
  void on_button_graph_clicked();
  void on_button_div_clicked();
  void calculateExpression();
  void on_button_back_clicked();
  void on_button_cos_clicked();
  void on_button_sin_clicked();
  void on_button_tan_clicked();
  void on_button_acos_clicked();
  void on_button_asin_clicked();
  void on_button_atan_clicked();
  void on_button_sqrt_clicked();
  void on_button_ln_clicked();
  void on_button_log_clicked();
  void on_button_close_bracket_clicked();
  void on_button_open_bracket_clicked();

  void on_button_goToCredit_clicked();

  void on_button_x_clicked();

  void on_button_mod_clicked();

  void on_button_goToDeposit_clicked();

 protected:
  bool eventFilter(QObject *obj, QEvent *event) override;
  void displayFunctionGraph();

 private:
  Ui::MainWindow *ui;
  QLineEdit *inputField;
  // void openCreditCalculatorWindow();
};
#endif  // MAINWINDOW_H

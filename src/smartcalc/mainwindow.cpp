#include "mainwindow.h"

#include <qcustomplot/qcustomplot.h>
#include <qdebug.h>

#include <QGraphicsView>
#include <QKeyEvent>
#include <QLineEdit>

#include "creditcalcwindow.h"
#include "depositwindow.h"
#include "ui_mainwindow.h"
//#include <QCPGraph>
extern "C" {
#include "../functions/s21_smartcalc.h"
}

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow) {
  ui->setupUi(this);
  ui->inputField->clear();
  ui->inputField->setMaxLength(1024);
  QString creditIcon = ":/img/monetki.png";

  ui->button_goToCredit->setIcon(QIcon(creditIcon));
  this->installEventFilter(this);
}

MainWindow::~MainWindow() { delete ui; }

void MainWindow::on_button_eq_clicked() { calculateExpression(); }

void MainWindow::on_button_graph_clicked() { displayFunctionGraph(); }

bool MainWindow::eventFilter(QObject *obj, QEvent *event) {
  if (event->type() == QEvent::KeyPress) {
    QKeyEvent *keyEvent = static_cast<QKeyEvent *>(event);

    if (keyEvent->key() == Qt::Key_Backspace) {
      QString text = ui->inputField->text();
      if (!text.isEmpty()) {
        text.remove(text.length() - 1, 1);
        ui->inputField->setText(text);
      }
      return true;
    } else if (keyEvent->key() == Qt::Key_Equal ||
               keyEvent->key() == Qt::Key_Enter) {
      calculateExpression();

      return true;
    } else {
      QString keyPressed = keyEvent->text();
      ui->inputField->insert(keyPressed);
    }
  }

  return QObject::eventFilter(obj, event);
}

void MainWindow::calculateExpression() {
  Stack_t stack;
  stack.head = stack.tail = NULL;
  QString expression = ui->inputField->text();
  QString xValue = ui->xInputField->text();
  expression.replace("x", xValue);
  std::string infixExpressionString = expression.toStdString();
  const char *infixExpression = infixExpressionString.c_str();

  if (inputValid(infixExpression)) {
    stack = parse(infixExpression);
    stack = infixToPostfix(&stack);
    double result = calculate(&stack);
    ui->inputField->setText(QString::number(result));
  }
}

void MainWindow::displayFunctionGraph() {
  QString expression = ui->inputField->text();
  if (expression.contains("x")) {
    QCustomPlot *plot = ui->customPlot;
    plot->clearGraphs();
    QCPGraph *graph = plot->addGraph();
    graph->setPen(QPen(Qt::blue));

    QVector<double> x, y;

    double xMin = ui->xMinInputField->text().toDouble();
    double xMax = ui->xMaxInputField->text().toDouble();
    double yMin = ui->yMinInputField->text().toDouble();
    double yMax = ui->yMaxInputField->text().toDouble();
    plot->xAxis->setRange(xMin, xMax);
    plot->yAxis->setRange(yMin, yMax);

    double step = 0.01;
    // double step = 0.01;
    for (double i = xMin; i <= xMax; i += step) {
      x.push_back(i);
      QString currentExpression = expression;
      currentExpression.replace("x", QString::number(i));

      Stack_t stack;
      stack.head = stack.tail = NULL;

      std::string infixExpressionString = currentExpression.toStdString();
      const char *infixExpression = infixExpressionString.c_str();

      if (inputValid(infixExpression)) {
        stack = parse(infixExpression);
        stack = infixToPostfix(&stack);
        double result = calculate(&stack);

        y.push_back(result);
      } else {
        y.push_back(std::numeric_limits<double>::quiet_NaN());
      }
    }

    QCPGraph *smoothGraph = new QCPGraph(plot->xAxis, plot->yAxis);
    smoothGraph->setPen(QPen(Qt::red));
    smoothGraph->setLineStyle(QCPGraph::lsLine);

    QVector<double> xData, yData;
    for (int i = 0; i < x.size(); ++i) {
      if (!std::isnan(y[i])) {
        xData.append(x[i]);
        yData.append(y[i]);
      }
    }
    smoothGraph->setData(xData, yData, true);

    plot->replot();
  }
}

void MainWindow::on_button_0_clicked() {
  ui->inputField->setText(ui->inputField->text() + "0");
}

void MainWindow::on_button_1_clicked() {
  ui->inputField->setText(ui->inputField->text() + "1");
}

void MainWindow::on_button_2_clicked() {
  ui->inputField->setText(ui->inputField->text() + "2");
}

void MainWindow::on_button_3_clicked() {
  ui->inputField->setText(ui->inputField->text() + "3");
}

void MainWindow::on_button_4_clicked() {
  ui->inputField->setText(ui->inputField->text() + "4");
}

void MainWindow::on_button_5_clicked() {
  ui->inputField->setText(ui->inputField->text() + "5");
}

void MainWindow::on_button_6_clicked() {
  ui->inputField->setText(ui->inputField->text() + "6");
}

void MainWindow::on_button_7_clicked() {
  ui->inputField->setText(ui->inputField->text() + "7");
}

void MainWindow::on_button_8_clicked() {
  ui->inputField->setText(ui->inputField->text() + "8");
}

void MainWindow::on_button_9_clicked() {
  ui->inputField->setText(ui->inputField->text() + "9");
}

void MainWindow::on_button_point_clicked() {
  ui->inputField->setText(ui->inputField->text() + ".");
}

void MainWindow::on_button_c_clicked() {
  ui->inputField->setText(ui->inputField->text() = "");
}

void MainWindow::on_button_back_clicked() {
  QString text = ui->inputField->text();
  if (!text.isEmpty()) {
    text.chop(1);
    ui->inputField->setText(text);
  }
}

void MainWindow::on_button_plus_clicked() {
  ui->inputField->setText(ui->inputField->text() + "+");
}

void MainWindow::on_button_minus_clicked() {
  ui->inputField->setText(ui->inputField->text() + "-");
}

void MainWindow::on_button_mul_clicked() {
  ui->inputField->setText(ui->inputField->text() + "*");
}

void MainWindow::on_button_div_clicked() {
  ui->inputField->setText(ui->inputField->text() + "/");
}

void MainWindow::on_button_cos_clicked() {
  ui->inputField->setText(ui->inputField->text() + "cos(");
}

void MainWindow::on_button_sin_clicked() {
  ui->inputField->setText(ui->inputField->text() + "sin(");
}

void MainWindow::on_button_tan_clicked() {
  ui->inputField->setText(ui->inputField->text() + "tan(");
}

void MainWindow::on_button_acos_clicked() {
  ui->inputField->setText(ui->inputField->text() + "acos(");
}

void MainWindow::on_button_asin_clicked() {
  ui->inputField->setText(ui->inputField->text() + "asin(");
}

void MainWindow::on_button_atan_clicked() {
  ui->inputField->setText(ui->inputField->text() + "atan(");
}

void MainWindow::on_button_sqrt_clicked() {
  ui->inputField->setText(ui->inputField->text() + "sqrt(");
}

void MainWindow::on_button_ln_clicked() {
  ui->inputField->setText(ui->inputField->text() + "ln(");
}

void MainWindow::on_button_log_clicked() {
  ui->inputField->setText(ui->inputField->text() + "log(");
}

void MainWindow::on_button_open_bracket_clicked() {
  ui->inputField->setText(ui->inputField->text() + "(");
}

void MainWindow::on_button_close_bracket_clicked() {
  ui->inputField->setText(ui->inputField->text() + ")");
}

void MainWindow::on_button_goToCredit_clicked() {
  this->hide();
  creditcalcWindow *ccWindow = new creditcalcWindow();
  ccWindow->show();
}

void MainWindow::on_button_x_clicked() {
  ui->inputField->setText(ui->inputField->text() + "x");
}

void MainWindow::on_button_mod_clicked() {
  ui->inputField->setText(ui->inputField->text() + "%");
}

void MainWindow::on_button_goToDeposit_clicked() {
  this->hide();
  depositwindow *depositWindow = new depositwindow();
  depositWindow->show();
}

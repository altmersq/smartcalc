#include <check.h>

#include "s21_smartcalc.h"
 
START_TEST(test_inputValid_01) {
  char* input = "2+2+2-14+42-42";
  ck_assert_int_eq(inputValid(input), 1);
}
END_TEST

START_TEST(test_inputValid_02) {
  char* input = "2+2+2-14+42-42+";
  ck_assert_int_eq(inputValid(input), 0);
}
END_TEST

START_TEST(test_inputValid_03) {
  char* input = "21     + 42";
  ck_assert_int_eq(inputValid(input), 1);
}
END_TEST

START_TEST(test_inputValid_04) {
  char* input = "(21 + 42";
  ck_assert_int_eq(inputValid(input), 0);
}
END_TEST

START_TEST(test_inputValid_05) {
  char* input = "21 + (42 - 21 * 42)";
  ck_assert_int_eq(inputValid(input), 1);
}
END_TEST

START_TEST(test_inputValid_06) {
  char* input = ") 21 + 43515- 429";
  ck_assert_int_eq(inputValid(input), 0);
}
END_TEST

START_TEST(test_inputValid_07) {
  char* input = "cos(1249) + 134";
  ck_assert_int_eq(inputValid(input), 1);
}
END_TEST

START_TEST(test_inputValid_08) {
  char* input = "cos(sin(sqrt(10)))";
  ck_assert_int_eq(inputValid(input), 1);
}
END_TEST

START_TEST(test_inputValid_09) {
  char* input = "cos(sin(sqrt(10))";
  ck_assert_int_eq(inputValid(input), 0);
}
END_TEST

START_TEST(test_inputValid_10) {
  char* input = "cos(34+425))";
  ck_assert_int_eq(inputValid(input), 0);
}
END_TEST

START_TEST(test_inputValid_11) {
  char* input = "";
  ck_assert_int_eq(inputValid(input), 0);
}
END_TEST

START_TEST(test_inputValid_12) {
  char* input = "++2 + 3 * 4";
  ck_assert_int_eq(inputValid(input), 0);
}
END_TEST

START_TEST(test_inputValid_13) {
  char* input = "2 + * 3";
  ck_assert_int_eq(inputValid(input), 0);
}
END_TEST

START_TEST(test_inputValid_14) {
  char* input = "( + 3 * 4";
  ck_assert_int_eq(inputValid(input), 0);
}
END_TEST

START_TEST(test_inputValid_15) {
  char* input = "2 + (3 * 4";
  ck_assert_int_eq(inputValid(input), 0);
}
END_TEST

START_TEST(test_inputValid_16) {
  char* input = "2 + a * 3";
  ck_assert_int_eq(inputValid(input), 0);
}
END_TEST

START_TEST(test_inputValid_17) {
  char* input = " (2 + 3 * 4) ";
  ck_assert_int_eq(inputValid(input), 1);
}
END_TEST

START_TEST(test_inputValid_18) {
  char* input = "3;14 + 2";
  ck_assert_int_eq(inputValid(input), 0);
}
END_TEST

START_TEST(test_inputValid_19) {
  char* input = "2 + -3 * 4";
  ck_assert_int_eq(inputValid(input), 1);
}
END_TEST

START_TEST(test_inputValid_20) {
  char* input = "2 + $3 * 4";
  ck_assert_int_eq(inputValid(input), 0);
}
END_TEST

START_TEST(test_inputValid_21) {
  char* input = "        ";
  ck_assert_int_eq(inputValid(input), 0);
}
END_TEST

START_TEST(test_inputValid_22) {
  char* input = "2.5 + 3 * 4";
  ck_assert_int_eq(inputValid(input), 1);
}
END_TEST

START_TEST(test_inputValid_23) {
  char* input = "2 + + 3 * 4";
  ck_assert_int_eq(inputValid(input), 1);
}
END_TEST

// START_TEST(test_inputValid_24) {
//   char* input = "2 3 + 4";
//   ck_assert_int_eq(inputValid(input), 0);
// }
// END_TEST

START_TEST(test_inputValid_25) {
  char* input = "2 +  * 4";
  ck_assert_int_eq(inputValid(input), 0);
}
END_TEST

START_TEST(test_inputValid_26) {
  char* input = "2(3 + 4)";
  ck_assert_int_eq(inputValid(input), 0);
}
END_TEST

START_TEST(test_inputValid_27) {
  char* input = "(2 + 3)4";
  ck_assert_int_eq(inputValid(input), 0);
}
END_TEST

START_TEST(test_inputValid_28) {
  char* input = "()";
  ck_assert_int_eq(inputValid(input), 0);
}
END_TEST

START_TEST(test_inputValid_29) {
  char* input = "cos + 3";
  ck_assert_int_eq(inputValid(input), 0);
}
END_TEST

START_TEST(test_inputValid_30) {
  char* input = "cos(3*)";
  ck_assert_int_eq(inputValid(input), 0);
}
END_TEST

Suite* inputValid_suite(void) {
  Suite* s;
  TCase* tc_core;
  s = suite_create("\033[35m====-{inputValid}-====\033[0m");
  tc_core = tcase_create("inputValid_Core");
  tcase_add_test(tc_core, test_inputValid_01);
  tcase_add_test(tc_core, test_inputValid_02);
  tcase_add_test(tc_core, test_inputValid_03);
  tcase_add_test(tc_core, test_inputValid_04);
  tcase_add_test(tc_core, test_inputValid_05);
  tcase_add_test(tc_core, test_inputValid_06);
  tcase_add_test(tc_core, test_inputValid_07);
  tcase_add_test(tc_core, test_inputValid_08);
  tcase_add_test(tc_core, test_inputValid_09);
  tcase_add_test(tc_core, test_inputValid_10);
  tcase_add_test(tc_core, test_inputValid_11);
  tcase_add_test(tc_core, test_inputValid_12);
  tcase_add_test(tc_core, test_inputValid_13);
  tcase_add_test(tc_core, test_inputValid_14);
  tcase_add_test(tc_core, test_inputValid_15);
  tcase_add_test(tc_core, test_inputValid_16);
  tcase_add_test(tc_core, test_inputValid_17);
  tcase_add_test(tc_core, test_inputValid_18);
  tcase_add_test(tc_core, test_inputValid_19);
  tcase_add_test(tc_core, test_inputValid_20);
  tcase_add_test(tc_core, test_inputValid_21);
  tcase_add_test(tc_core, test_inputValid_22);
  tcase_add_test(tc_core, test_inputValid_23);
  // tcase_add_test(tc_core, test_inputValid_24);
  tcase_add_test(tc_core, test_inputValid_25);
  tcase_add_test(tc_core, test_inputValid_26);
  tcase_add_test(tc_core, test_inputValid_27);
  tcase_add_test(tc_core, test_inputValid_28);
  tcase_add_test(tc_core, test_inputValid_29);
  tcase_add_test(tc_core, test_inputValid_30);
  suite_add_tcase(s, tc_core);

  return s;
}

START_TEST(test_calc_01) {
  Stack_t stack;
  stack.head = stack.tail = NULL;
  char* input = "2+2";
  stack = parse(input);
  stack = infixToPostfix(&stack);
  double result = calculate(&stack);
  ck_assert_double_eq(result, 4.0);
}
END_TEST

START_TEST(test_calc_02) {
  Stack_t stack;
  stack.head = stack.tail = NULL;
  char* input = "3*5";
  stack = parse(input);
  stack = infixToPostfix(&stack);
  double result = calculate(&stack);
  ck_assert_double_eq(result, 15.0);
}
END_TEST

START_TEST(test_calc_03) {
  Stack_t stack;
  stack.head = stack.tail = NULL;
  char* input = "10/2";
  stack = parse(input);
  stack = infixToPostfix(&stack);
  double result = calculate(&stack);
  ck_assert_double_eq(result, 5.0);
}
END_TEST

START_TEST(test_calc_04) {
  Stack_t stack;
  stack.head = stack.tail = NULL;
  char* input = "(3+4)*2";
  stack = parse(input);
  stack = infixToPostfix(&stack);
  double result = calculate(&stack);
  ck_assert_double_eq(result, 14.0);
}
END_TEST

START_TEST(test_calc_05) {
  Stack_t stack;
  stack.head = stack.tail = NULL;
  char* input = "10-5/5";
  stack = parse(input);
  stack = infixToPostfix(&stack);
  double result = calculate(&stack);
  ck_assert_double_eq(result, 9.0);
}
END_TEST

START_TEST(test_calc_06) {
  Stack_t stack;
  stack.head = stack.tail = NULL;
  char* input = "2^3+4";
  stack = parse(input);
  stack = infixToPostfix(&stack);
  double result = calculate(&stack);
  ck_assert_double_eq(result, 12.0);
}
END_TEST

START_TEST(test_calc_07) {
  Stack_t stack;
  stack.head = stack.tail = NULL;
  char* input = "sqrt(9)+ln(1)+log(100)";
  stack = parse(input);
  stack = infixToPostfix(&stack);
  double result = calculate(&stack);
  ck_assert_double_eq(result, 5.0);
}
END_TEST

START_TEST(test_calc_08) {
  Stack_t stack;
  stack.head = stack.tail = NULL;
  char* input = "5*6-(8/2)";
  stack = parse(input);
  stack = infixToPostfix(&stack);
  double result = calculate(&stack);
  ck_assert_double_eq(result, 26.0);
}
END_TEST

START_TEST(test_calc_09) {
  Stack_t stack;
  stack.head = stack.tail = NULL;
  char* input = "cos(0)+sin(0)+tan(0)";
  stack = parse(input);
  stack = infixToPostfix(&stack);
  double result = calculate(&stack);
  ck_assert_double_eq(result, 1.0);
}
END_TEST

START_TEST(test_calc_10) {
  Stack_t stack;
  stack.head = stack.tail = NULL;
  char* input = "2*(3+4)-(5-6)";
  stack = parse(input);
  stack = infixToPostfix(&stack);
  double result = calculate(&stack);
  ck_assert_double_eq(result, 15.0);
}
END_TEST

START_TEST(test_calc_11) {
  Stack_t stack;
  stack.head = stack.tail = NULL;
  char* input = "4+5*6/2-8^2";
  stack = parse(input);
  stack = infixToPostfix(&stack);
  double result = calculate(&stack);
  ck_assert_double_eq(result, -45.0);
}
END_TEST

START_TEST(test_calc_12) {
  Stack_t stack;
  stack.head = stack.tail = NULL;
  char* input = "2^(3-1)+sqrt(9)-ln(1)";
  stack = parse(input);
  stack = infixToPostfix(&stack);
  double result = calculate(&stack);
  ck_assert_double_eq(result, 7.0);
}
END_TEST

START_TEST(test_calc_13) {
  Stack_t stack;
  stack.head = stack.tail = NULL;
  char* input = "5-(2+3)+cos(0)-sin(0)";
  stack = parse(input);
  stack = infixToPostfix(&stack);
  double result = calculate(&stack);
  ck_assert_double_eq(result, 1.0);
}
END_TEST

START_TEST(test_calc_14) {
  Stack_t stack;
  stack.head = stack.tail = NULL;
  char* input = "2*(2+3)+5-(2+3)";
  stack = parse(input);
  stack = infixToPostfix(&stack);
  double result = calculate(&stack);
  ck_assert_double_eq(result, 10.0);
}
END_TEST

START_TEST(test_calc_15) {
  Stack_t stack;
  stack.head = stack.tail = NULL;
  char* input = "10+5-(7*2)";
  stack = parse(input);
  stack = infixToPostfix(&stack);
  double result = calculate(&stack);
  ck_assert_double_eq(result, 1.0);
}
END_TEST

START_TEST(test_calc_16) {
  Stack_t stack;
  stack.head = stack.tail = NULL;
  char* input = "2*3+4*5";
  stack = parse(input);
  stack = infixToPostfix(&stack);
  double result = calculate(&stack);
  ck_assert_double_eq(result, 26.0);
}
END_TEST

START_TEST(test_calc_17) {
  Stack_t stack;
  stack.head = stack.tail = NULL;
  char* input = "5*(4+(3-2))+1";
  stack = parse(input);
  stack = infixToPostfix(&stack);
  double result = calculate(&stack);
  ck_assert_double_eq(result, 26.0);
}
END_TEST

START_TEST(test_calc_18) {
  Stack_t stack;
  stack.head = stack.tail = NULL;
  char* input = "5*(3+(8-2)/2)-4";
  stack = parse(input);
  stack = infixToPostfix(&stack);
  double result = calculate(&stack);
  ck_assert_double_eq(result, 26.0);
}
END_TEST

START_TEST(test_calc_19) {
  Stack_t stack;
  stack.head = stack.tail = NULL;
  char* input = "3-2*3+4";
  stack = parse(input);
  stack = infixToPostfix(&stack);
  double result = calculate(&stack);
  ck_assert_double_eq(result, 1.0);
}
END_TEST

START_TEST(test_calc_20) {
  Stack_t stack;
  stack.head = stack.tail = NULL;
  char* input = "(3+4)*(2-1)";
  stack = parse(input);
  stack = infixToPostfix(&stack);
  double result = calculate(&stack);
  ck_assert_double_eq(result, 7.0);
}
END_TEST

START_TEST(test_calc_21) {
  Stack_t stack;
  stack.head = stack.tail = NULL;
  char* input = "(5-3)^2+(2+2)^2";
  stack = parse(input);
  stack = infixToPostfix(&stack);
  double result = calculate(&stack);
  ck_assert_double_eq(result, 20.0);
}
END_TEST

START_TEST(test_calc_22) {
  Stack_t stack;
  stack.head = stack.tail = NULL;
  char* input = "2+2*(2+2*2)";
  stack = parse(input);
  stack = infixToPostfix(&stack);
  double result = calculate(&stack);
  ck_assert_double_eq(result, 14.0);
}
END_TEST

START_TEST(test_calc_23) {
  Stack_t stack;
  stack.head = stack.tail = NULL;
  char* input = "(3+4)*(5+6)-(7+8)/(9-10)";
  stack = parse(input);
  stack = infixToPostfix(&stack);
  double result = calculate(&stack);
  ck_assert_double_eq(result, 92.0);
}
END_TEST

START_TEST(test_calc_24) {
  Stack_t stack;
  stack.head = stack.tail = NULL;
  char* input = "5*(2+(2+1)/3)-2";
  stack = parse(input);
  stack = infixToPostfix(&stack);
  double result = calculate(&stack);
  ck_assert_double_eq(result, 13.0);
}
END_TEST

START_TEST(test_calc_25) {
  Stack_t stack;
  stack.head = stack.tail = NULL;
  char* input = "sqrt(16)+ln(1)+log(1000)";
  stack = parse(input);
  stack = infixToPostfix(&stack);
  double result = calculate(&stack);
  ck_assert_double_eq(result, 7.0);
}
END_TEST

START_TEST(test_calc_26) {
  Stack_t stack;
  stack.head = stack.tail = NULL;
  char* input = "2^3+4-1";
  stack = parse(input);
  stack = infixToPostfix(&stack);
  double result = calculate(&stack);
  ck_assert_double_eq(result, 11.0);
}
END_TEST

START_TEST(test_calc_27) {
  Stack_t stack;
  stack.head = stack.tail = NULL;
  char* input = "cos(0)+sin(0)+tan(0)+ln(1)";
  stack = parse(input);
  stack = infixToPostfix(&stack);
  double result = calculate(&stack);
  ck_assert_double_eq(result, 1.0);
}
END_TEST

START_TEST(test_calc_28) {
  Stack_t stack;
  stack.head = stack.tail = NULL;
  char* input = "2*(3+4)-(5-6)+7";
  stack = parse(input);
  stack = infixToPostfix(&stack);
  double result = calculate(&stack);
  ck_assert_double_eq(result, 22.0);
}
END_TEST

START_TEST(test_calc_29) {
  Stack_t stack;
  stack.head = stack.tail = NULL;
  char* input = "4+5*6/2-8^2+10";
  stack = parse(input);
  stack = infixToPostfix(&stack);
  double result = calculate(&stack);
  ck_assert_double_eq(result, -35.0);
}
END_TEST

START_TEST(test_calc_30) {
  Stack_t stack;
  stack.head = stack.tail = NULL;
  char* input = "2^(3-1)+sqrt(16)-ln(1)+log(10)";
  stack = parse(input);
  stack = infixToPostfix(&stack);
  double result = calculate(&stack);
  ck_assert_double_eq(result, 9.0);
}
END_TEST

START_TEST(test_calc_31) {
  Stack_t stack;
  stack.head = stack.tail = NULL;
  char* input = "(5*(3+2))/5";
  stack = parse(input);
  stack = infixToPostfix(&stack);
  double result = calculate(&stack);
  ck_assert_double_eq(result, 5.0);
}
END_TEST

START_TEST(test_calc_32) {
  Stack_t stack;
  stack.head = stack.tail = NULL;
  char* input = "(2*3+(4*5))";
  stack = parse(input);
  stack = infixToPostfix(&stack);
  double result = calculate(&stack);
  ck_assert_double_eq(result, 26.0);
}
END_TEST

START_TEST(test_calc_33) {
  Stack_t stack;
  stack.head = stack.tail = NULL;
  char* input = "(2^3-5)+1";
  stack = parse(input);
  stack = infixToPostfix(&stack);
  double result = calculate(&stack);
  ck_assert_double_eq(result, 4.0);
}
END_TEST

START_TEST(test_calc_34) {
  Stack_t stack;
  stack.head = stack.tail = NULL;
  char* input = "sqrt(25)+ln(1)+log(1000)";
  stack = parse(input);
  stack = infixToPostfix(&stack);
  double result = calculate(&stack);
  ck_assert_double_eq(result, 8.0);
}
END_TEST

START_TEST(test_calc_35) {
  Stack_t stack;
  stack.head = stack.tail = NULL;
  char* input = "sin(0)+cos(0)+tan(0)";
  stack = parse(input);
  stack = infixToPostfix(&stack);
  double result = calculate(&stack);
  ck_assert_double_eq(result, 1.0);
}
END_TEST

START_TEST(test_calc_36) {
  Stack_t stack;
  stack.head = stack.tail = NULL;
  char* input = "(3-2)/(4-3)";
  stack = parse(input);
  stack = infixToPostfix(&stack);
  double result = calculate(&stack);
  ck_assert_double_eq(result, 1.0);
}
END_TEST

START_TEST(test_calc_37) {
  Stack_t stack;
  stack.head = stack.tail = NULL;
  char* input = "5*(2+(2+1))/5";
  stack = parse(input);
  stack = infixToPostfix(&stack);
  double result = calculate(&stack);
  ck_assert_double_eq(result, 5.0);
}
END_TEST

START_TEST(test_calc_38) {
  Stack_t stack;
  stack.head = stack.tail = NULL;
  char* input = "(3+4)*(5+6)-(7+8)/(9-10)";
  stack = parse(input);
  stack = infixToPostfix(&stack);
  double result = calculate(&stack);
  ck_assert_double_eq(result, 92.0);
}
END_TEST

START_TEST(test_calc_39) {
  Stack_t stack;
  stack.head = stack.tail = NULL;
  char* input = "2^(3+1)*sqrt(4)-ln(1)+log(100)";
  stack = parse(input);
  stack = infixToPostfix(&stack);
  double result = calculate(&stack);
  ck_assert_double_eq(result, 34.0);
}
END_TEST

START_TEST(test_calc_40) {
  Stack_t stack;
  stack.head = stack.tail = NULL;
  char* input = "cos(0)+sin(0)+tan(0)+ln(1)";
  stack = parse(input);
  stack = infixToPostfix(&stack);
  double result = calculate(&stack);
  ck_assert_double_eq(result, 1.0);
}
END_TEST

START_TEST(test_calc_41) {
  Stack_t stack;
  stack.head = stack.tail = NULL;
  char* input = "(2*3+4*5)/(1+2)";
  stack = parse(input);
  stack = infixToPostfix(&stack);
  double result = calculate(&stack);
  ck_assert_double_eq(result, 8.66666666666666666667);
}
END_TEST

START_TEST(test_calc_42) {
  Stack_t stack;
  stack.head = stack.tail = NULL;
  char* input = "((2^3)+4)-1";
  stack = parse(input);
  stack = infixToPostfix(&stack);
  double result = calculate(&stack);
  ck_assert_double_eq(result, 11.0);
}
END_TEST

START_TEST(test_calc_43) {
  Stack_t stack;
  stack.head = stack.tail = NULL;
  char* input = "3-2*3+4";
  stack = parse(input);
  stack = infixToPostfix(&stack);
  double result = calculate(&stack);
  ck_assert_double_eq(result, 1.0);
}
END_TEST

START_TEST(test_calc_44) {
  Stack_t stack;
  stack.head = stack.tail = NULL;
  char* input = "(3+4)*(5+6)-(7+8)/(9-10)";
  stack = parse(input);
  stack = infixToPostfix(&stack);
  double result = calculate(&stack);
  ck_assert_double_eq(result, 92.0);
}
END_TEST

START_TEST(test_calc_45) {
  Stack_t stack;
  stack.head = stack.tail = NULL;
  char* input = "5*(2+(2+1)/3)-2";
  stack = parse(input);
  stack = infixToPostfix(&stack);
  double result = calculate(&stack);
  ck_assert_double_eq(result, 13.0);
}
END_TEST

START_TEST(test_calc_46) {
  Stack_t stack;
  stack.head = stack.tail = NULL;
  char* input = "sqrt(16)+ln(1)+log(1000)";
  stack = parse(input);
  stack = infixToPostfix(&stack);
  double result = calculate(&stack);
  ck_assert_double_eq(result, 7.0);
}
END_TEST

START_TEST(test_calc_47) {
  Stack_t stack;
  stack.head = stack.tail = NULL;
  char* input = "(2*3+(4*5))";
  stack = parse(input);
  stack = infixToPostfix(&stack);
  double result = calculate(&stack);
  ck_assert_double_eq(result, 26.0);
}
END_TEST

START_TEST(test_calc_48) {
  Stack_t stack;
  stack.head = stack.tail = NULL;
  char* input = "2^(3-1)+sqrt(16)-ln(1)+log(10)";
  stack = parse(input);
  stack = infixToPostfix(&stack);
  double result = calculate(&stack);
  ck_assert_double_eq(result, 9.0);
}
END_TEST

START_TEST(test_calc_49) {
  Stack_t stack;
  stack.head = stack.tail = NULL;
  char* input = "( 21     +4)*( 5 + 3 ) + 21-cos(12+sin( 3 ))";
  stack = parse(input);
  stack = infixToPostfix(&stack);
  double result = calculate(&stack);
  ck_assert_double_eq_tol(result, 220.089, 1e-3);
}
END_TEST

START_TEST(test_calc_50) {
  Stack_t stack;
  stack.head = stack.tail = NULL;
  char* input = "5 + (123 % 10)";
  stack = parse(input);
  stack = infixToPostfix(&stack);
  double result = calculate(&stack);
  ck_assert_double_eq(result, 8.0);
}
END_TEST

START_TEST(test_calc_51) {
  Stack_t stack;
  stack.head = stack.tail = NULL;
  char* input = "5 + (123.456 * cos(14.51)) - 1359.245";
  stack = parse(input);
  stack = infixToPostfix(&stack);
  double result = calculate(&stack);
  ck_assert_double_eq_tol(result, -1399.21, 1e-2);
}
END_TEST

START_TEST(test_calc_52) {
  Stack_t stack;
  stack.head = stack.tail = NULL;
  char* input = "5 + - 9+ 1";
  stack = parse(input);
  stack = infixToPostfix(&stack);
  double result = calculate(&stack);
  ck_assert_double_eq(result, -3);
}
END_TEST

START_TEST(test_calc_53) {
  Stack_t stack;
  stack.head = stack.tail = NULL;
  char* input = "-10+21-2+4";
  stack = parse(input);
  stack = infixToPostfix(&stack);
  double result = calculate(&stack);
  ck_assert_double_eq(result, 13);
}
END_TEST

START_TEST(test_calc_54) {
  Stack_t stack;
  stack.head = stack.tail = NULL;
  char* input = "3+4-(-5)";
  stack = parse(input);
  stack = infixToPostfix(&stack);
  double result = calculate(&stack);
  ck_assert_double_eq(result, 12);
}
END_TEST

START_TEST(test_calc_55) {
  Stack_t stack;
  stack.head = stack.tail = NULL;
  char* input = "-5/2";
  stack = parse(input);
  stack = infixToPostfix(&stack);
  double result = calculate(&stack);
  ck_assert_double_eq(result, -2.5);
}
END_TEST

START_TEST(test_calc_56) {
  Stack_t stack;
  stack.head = stack.tail = NULL;
  char* input = "2*-3";
  stack = parse(input);
  stack = infixToPostfix(&stack);
  double result = calculate(&stack);
  ck_assert_double_eq(result, -6);
}
END_TEST

START_TEST(test_calc_57) {
  Stack_t stack;
  stack.head = stack.tail = NULL;
  char* input = "acos(0.5)";
  stack = parse(input);
  stack = infixToPostfix(&stack);
  double result = calculate(&stack);
  ck_assert_double_eq_tol(result, 1.0472, 1e-4);
}
END_TEST

START_TEST(test_calc_58) {
  Stack_t stack;
  stack.head = stack.tail = NULL;
  char* input = "asin(1)";
  stack = parse(input);
  stack = infixToPostfix(&stack);
  double result = calculate(&stack);
  ck_assert_double_eq_tol(result, 1.5708, 1e-4);
}
END_TEST

START_TEST(test_calc_59) {
  Stack_t stack;
  stack.head = stack.tail = NULL;
  char* input = "atan(1)";
  stack = parse(input);
  stack = infixToPostfix(&stack);
  double result = calculate(&stack);
  ck_assert_double_eq_tol(result, 0.785398, 1e-6);
}
END_TEST

Suite* calc_suite(void) {
  Suite* s;
  TCase* tc_core;
  s = suite_create("\033[35m====-{calc}-====\033[0m");
  tc_core = tcase_create("calc_Core");
  tcase_add_test(tc_core, test_calc_01);
  tcase_add_test(tc_core, test_calc_02);
  tcase_add_test(tc_core, test_calc_03);
  tcase_add_test(tc_core, test_calc_04);
  tcase_add_test(tc_core, test_calc_05);
  tcase_add_test(tc_core, test_calc_06);
  tcase_add_test(tc_core, test_calc_07);
  tcase_add_test(tc_core, test_calc_08);
  tcase_add_test(tc_core, test_calc_09);
  tcase_add_test(tc_core, test_calc_10);
  tcase_add_test(tc_core, test_calc_11);
  tcase_add_test(tc_core, test_calc_12);
  tcase_add_test(tc_core, test_calc_13);
  tcase_add_test(tc_core, test_calc_14);
  tcase_add_test(tc_core, test_calc_15);
  tcase_add_test(tc_core, test_calc_16);
  tcase_add_test(tc_core, test_calc_17);
  tcase_add_test(tc_core, test_calc_18);
  tcase_add_test(tc_core, test_calc_19);
  tcase_add_test(tc_core, test_calc_20);
  tcase_add_test(tc_core, test_calc_21);
  tcase_add_test(tc_core, test_calc_22);
  tcase_add_test(tc_core, test_calc_23);
  tcase_add_test(tc_core, test_calc_24);
  tcase_add_test(tc_core, test_calc_25);
  tcase_add_test(tc_core, test_calc_26);
  tcase_add_test(tc_core, test_calc_27);
  tcase_add_test(tc_core, test_calc_28);
  tcase_add_test(tc_core, test_calc_29);
  tcase_add_test(tc_core, test_calc_30);
  tcase_add_test(tc_core, test_calc_31);
  tcase_add_test(tc_core, test_calc_32);
  tcase_add_test(tc_core, test_calc_33);
  tcase_add_test(tc_core, test_calc_34);
  tcase_add_test(tc_core, test_calc_35);
  tcase_add_test(tc_core, test_calc_36);
  tcase_add_test(tc_core, test_calc_37);
  tcase_add_test(tc_core, test_calc_38);
  tcase_add_test(tc_core, test_calc_39);
  tcase_add_test(tc_core, test_calc_40);
  tcase_add_test(tc_core, test_calc_41);
  tcase_add_test(tc_core, test_calc_42);
  tcase_add_test(tc_core, test_calc_43);
  tcase_add_test(tc_core, test_calc_44);
  tcase_add_test(tc_core, test_calc_45);
  tcase_add_test(tc_core, test_calc_46);
  tcase_add_test(tc_core, test_calc_47);
  tcase_add_test(tc_core, test_calc_48);
  tcase_add_test(tc_core, test_calc_49);
  tcase_add_test(tc_core, test_calc_50);
  tcase_add_test(tc_core, test_calc_51);
  tcase_add_test(tc_core, test_calc_52);
  tcase_add_test(tc_core, test_calc_53);
  tcase_add_test(tc_core, test_calc_54);
  tcase_add_test(tc_core, test_calc_55);
  tcase_add_test(tc_core, test_calc_56);
  tcase_add_test(tc_core, test_calc_57);
  tcase_add_test(tc_core, test_calc_58);
  tcase_add_test(tc_core, test_calc_59);
  suite_add_tcase(s, tc_core);

  return s;
}

START_TEST(test_annuity_payment_calculation) {
    Credit_t credit;
    double amount = 1000.0;
    double interestRate = 10.0;
    int months = 3;
    int type = 1;

    creditcalc(&credit, amount, interestRate, months, type);

    ck_assert_double_eq_tol(credit.monthlyPayment, 338.90, 1e-2);
    ck_assert_double_eq_tol(credit.totalPayment, 1016.71, 1e-2);
    ck_assert_double_eq_tol(credit.overpayment, 16.71, 1e-2);
}
END_TEST 

START_TEST(test_diff_payment_calculation) {
    Credit_t credit;
    double amount = 10000.0;
    double interestRate = 10.0;
    int months = 12;
    int type = 2;

    creditcalc(&credit, amount, interestRate, months, type);

    ck_assert_double_eq_tol(credit.firstPayment, 916.67, 1e-2);
    ck_assert_double_eq_tol(credit.lastPayment, 840.28, 1e-2);
    ck_assert_double_eq_tol(credit.overpayment, 541.67, 1e-2);
    ck_assert_double_eq_tol(credit.totalPayment, 10541.67, 1e-2);
}
END_TEST 

Suite* loan_suite(void) {
  Suite* s;
  TCase* tc_core;
  s = suite_create("\033[35m====-{loan}-====\033[0m");
  tc_core = tcase_create("loan_Core");
  tcase_add_test(tc_core, test_annuity_payment_calculation);
  tcase_add_test(tc_core, test_diff_payment_calculation);
  suite_add_tcase(s, tc_core);

  return s;
}

START_TEST(test_deposit_02) {
    Deposit_t deposit;
    init_deposit(&deposit);

    Date startTerm[] = {{01, 01, 2023}};

  double depositAmount = 10000.0;
  double interestRate = 10.0;
  int depositTerm = 35;
  double taxRate = 0.0;
  int payoutFrequency = 2;
  int capitalization = 1;
  int termType = 1;

    calculateDeposit(&deposit, depositAmount, interestRate, depositTerm,
                   taxRate, payoutFrequency, capitalization, *startTerm,
                   termType);

    ck_assert_double_eq_tol(deposit.totalInterest, 96.26, 1e-2);
    ck_assert_double_eq_tol(deposit.totalTax, 0, 1e-2);
    ck_assert_double_eq_tol(deposit.finalAmount, 10096.26, 1e-2);
}
END_TEST 

START_TEST(test_deposit_01) {
    Deposit_t deposit;
    init_deposit(&deposit);

    Date startTerm[] = {{01, 01, 2023}};

  double depositAmount = 10000.0;
  double interestRate = 10.0;
  int depositTerm = 35;
  double taxRate = 0.0;
  int payoutFrequency = 1;
  int capitalization = 1;
  int termType = 1;

    calculateDeposit(&deposit, depositAmount, interestRate, depositTerm,
                   taxRate, payoutFrequency, capitalization, *startTerm,
                   termType);

    ck_assert_double_eq_tol(deposit.totalInterest, 96.34, 1e-2);
    ck_assert_double_eq_tol(deposit.totalTax, 0, 1e-2);
    ck_assert_double_eq_tol(deposit.finalAmount, 10096.34, 1e-2);
}
END_TEST 

START_TEST(test_deposit_03) {
    Deposit_t deposit;
    init_deposit(&deposit);

    Date startTerm[] = {{01, 01, 2023}};

  double depositAmount = 10000.0;
  double interestRate = 10.0;
  int depositTerm = 14;
  double taxRate = 0.0;
  int payoutFrequency = 3;
  int capitalization = 1;
  int termType = 2;

    calculateDeposit(&deposit, depositAmount, interestRate, depositTerm,
                   taxRate, payoutFrequency, capitalization, *startTerm,
                   termType);

    ck_assert_double_eq_tol(deposit.totalInterest, 1214.23, 1e-2);
    ck_assert_double_eq_tol(deposit.totalTax, 0, 1e-2);
    ck_assert_double_eq_tol(deposit.finalAmount, 11214.23, 1e-2);
}
END_TEST 

START_TEST(test_deposit_04) {
    Deposit_t deposit;
    init_deposit(&deposit);

    Date startTerm[] = {{01, 01, 2023}};

  double depositAmount = 10000.0;
  double interestRate = 10.0;
  int depositTerm = 14;
  double taxRate = 0.0;
  int payoutFrequency = 4;
  int capitalization = 1;
  int termType = 2;

    calculateDeposit(&deposit, depositAmount, interestRate, depositTerm,
                   taxRate, payoutFrequency, capitalization, *startTerm,
                   termType);

    ck_assert_double_eq_tol(deposit.totalInterest, 1023.38, 1e-2);
    ck_assert_double_eq_tol(deposit.totalTax, 0, 1e-2);
    ck_assert_double_eq_tol(deposit.finalAmount, 11023.38, 1e-2);
}
END_TEST 

START_TEST(test_deposit_05) {
    Deposit_t deposit;
    init_deposit(&deposit);

    Date startTerm[] = {{01, 01, 2023}};

  double depositAmount = 10000.0;
  double interestRate = 10.0;
  int depositTerm = 14;
  double taxRate = 0.0;
  int payoutFrequency = 5;
  int capitalization = 1;
  int termType = 2;

    calculateDeposit(&deposit, depositAmount, interestRate, depositTerm,
                   taxRate, payoutFrequency, capitalization, *startTerm,
                   termType);

    ck_assert_double_eq_tol(deposit.totalInterest, 1010.62, 1e-2);
    ck_assert_double_eq_tol(deposit.totalTax, 0, 1e-2);
    ck_assert_double_eq_tol(deposit.finalAmount, 11010.62, 1e-2);
}
END_TEST 


START_TEST(test_deposit_06) {
    Deposit_t deposit;
    init_deposit(&deposit);

    Date startTerm[] = {{01, 01, 2023}};

  double depositAmount = 10000.0;
  double interestRate = 10.0;
  int depositTerm = 14;
  double taxRate = 0.0;
  int payoutFrequency = 6;
  int capitalization = 1;
  int termType = 2;

    calculateDeposit(&deposit, depositAmount, interestRate, depositTerm,
                   taxRate, payoutFrequency, capitalization, *startTerm,
                   termType);

    ck_assert_double_eq_tol(deposit.totalInterest, 1000, 1e-2);
    ck_assert_double_eq_tol(deposit.totalTax, 0, 1e-2);
    ck_assert_double_eq_tol(deposit.finalAmount, 11000, 1e-2);
}
END_TEST 




Suite* deposit_suite(void) {
  Suite* s;
  TCase* tc_core;
  s = suite_create("\033[35m====-{deposit}-====\033[0m");
  tc_core = tcase_create("deposit_Core");
  tcase_add_test(tc_core, test_deposit_01);
  tcase_add_test(tc_core, test_deposit_02);
  tcase_add_test(tc_core, test_deposit_03);
  tcase_add_test(tc_core, test_deposit_04);
  tcase_add_test(tc_core, test_deposit_05);
  tcase_add_test(tc_core, test_deposit_06);
  suite_add_tcase(s, tc_core);

  return s;
}

int main() {
  int number_failed = 0;
  Suite* smartcalc_tests[] = {inputValid_suite(), calc_suite(), loan_suite(), deposit_suite(), NULL};
  for (int i = 0; smartcalc_tests[i] != NULL; i++) {
    SRunner* srunner;
    srunner = srunner_create(smartcalc_tests[i]);
    srunner_set_fork_status(srunner, CK_NOFORK);
    srunner_run_all(srunner, CK_NORMAL);
    number_failed += srunner_ntests_failed(srunner);
    srunner_free(srunner);
  }
  return (number_failed == 0) ? 0 : 1;
}
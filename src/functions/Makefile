CC =gcc
CFLAGS =-Wall -Werror -Wextra -std=c11 -lm	
GCOV_FLAGS =-fprofile-arcs -ftest-coverage
FLAGS_CHECK = $(shell pkg-config --cflags --libs check) -lm
all: s21_calc test gcov_report

s21_calc:
	$(CC) $(CFLAGS) -c s21_smartcalc.c validator.c stack_functions.c creditcalc.c deposit.c
	ar rc s21_calc.a s21_smartcalc.o validator.o stack_functions.o creditcalc.o deposit.o 
	ranlib s21_calc.a
	@-rm -rf *.o

debug: clean s21_calc
	$(CC) $(CFLAGS) -c debug.c -o debug.o -I.
	$(CC) -o debug debug.o s21_calc.a -lm
	./debug

test: s21_calc
	$(CC) $(CFLAGS) -c test.c 
	$(CC)  *.o s21_calc.a -o test $(FLAGS_CHECK)
	./test

gcov_report:
	gcc $(GCOV_FLAGS) *.c -o report.out $(FLAGS_CHECK)
	./report.out
	lcov -t "report" -o report.info -c -d .
	genhtml -o ./report report.info
	#open -a "Safari" report/index.html

dvi: 
	open ../../README.md

install:
	mkdir ../s21_SmartCalc
	cd ../s21_SmartCalc && qmake ../smartcalc/smartcalc.pro && make

uninstall:
	rm -rf ../s21_SmartCalc

dist: |install
	tar --totals -cvf smart_calc.tar .

clean:
	@-rm *.gcda *.gcno *.info *.out *.o *.a test *.tar *.gz
	@rm -rf report
	@rm -rf s21_SmartCalc

rebuild: clean s21_calc test gcov_report

style:
	cp ../materials/linters/.clang-format .
	clang-format -i *.c
	clang-format -i smartcalc/*.cpp
	clang-format -i smartcalc/*.h
	clang-format -i *.h
	rm .clang-format

valgrind:
	 @valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes -s --trace-children=yes --track-fds=yes --log-file=valgrind.log ./test || true
	 @grep -F "ERROR SUMMARY" valgrind.log

fsanitize: s21_calc
	$(CC) $(CFLAGS) -c -fsanitize=address s21_smartcalc.c validator.c stack_functions.c creditcalc.c deposit.c test.c
	$(CC) $(CFLAGS) -o test_sanitize *.o s21_calc.a -lasan $(FLAGS_CHECK)
	@echo "Running fsanitize..."
	./test_sanitize

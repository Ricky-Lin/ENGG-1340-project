main.o:main.cpp
  g++ -c main.cpp
budget.o:budget.cpp
  g++ -c budget.cpp
currency.o:currency.cpp
  g++ -c currency.cpp
statistical report.o:statistical report.cpp
  g++ -c statistical report.cpp
view expense.o:view expense.cpp
  g++ -c view expense.cpp
view income.o:view income.cpp
  g++ -c view income.cpp
main:main.o budget.o currency.o statistical report.o view expense.o view income.o
  g++ $^ -o $@

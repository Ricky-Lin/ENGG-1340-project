main.o:main.cpp
  g++ -c main.cpp
budget.o:budget.cpp
  g++ -c budget.cpp
currency.o:currency.cpp
  g++ -c currency.cpp
statisticalreport.o:statisticalreport.cpp
  g++ -c statistical report.cpp
viewexpense.o:viewexpense.cpp
  g++ -c view expense.cpp
viewincome.o:viewincome.cpp
  g++ -c view income.cpp
main:main.o budget.o currency.o statisticalreport.o viewexpense.o viewincome.o
  g++ $^ -o $@

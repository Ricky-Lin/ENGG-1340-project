# ENGG-1340-project
With the development of the economy, people's salaries are becoming higher and higher. However, many people do not know how to manage their finances well so that they fritter most money away and have few savings. Therefore, learning how to manage and allocate our money properly is of paramount importance to our daily life and can help us create more wealth. In this project, we are going to implement an accounting system to help people keep track of their daily expenses and incomes and help them form a good habit of managing money.

The following are some features about this account system:
1. People can add records of incomes, and expenses.
2. The records contain some basic information, such as the amount of money, date of record, type of income or expense (e.g., food, game, salary,etc.), type of account (e.g., cash, bank card, credit card, etc.).
3. The records can be deleted and edited at any time.
4. Users can view their records by date, type, and account.
5. The system can provide a statistical report of the user's financial state (e.g., monthly incomes and expenses, the percentage of food expenses, etc.).
6. The system allows a budget setting. When expenses reach the budget, there will be a warning from the system to remind users.
7. The system helps users find out exchange rate from Hong Kong Dollars to other currencies and change HKD to another currency when it is necessary.(Additional function) 

The following are some reasonable assumptions about this account system:
1. It is assumed that there is a max number of records that the system can handle.
2. it is assumed that the system can only record month by month. After next month, the previous record will not be counted.
3. It is assumed that the system can only handle some commonly used currencies (e.g., HKD, USD, RMB, YEN, EURO, GBP, KRW, etc.)

Input specifications:
The program requires the inputs of different data types, like string, double, which are subject to different functions.

Compilation instructions:
Use this command line to compile main.cpp.
g++ -pedantic-errors -std=c++11 main.cpp -o main

Execution instructions:
The input and output are clearly described in the code. Take main function as an example to illustrate. First,the program asks user to input a string, such as "INCOME" and then the user can start adding income records to the system by typing the amount of money, the type of money, account type and date. Adding expenses can be done similarly by entering "EXPENSE". The user can keep entering another keyword to use another function; for example, by entering "REPORT", the user can view his/her monthly incomes, expenses and the percentage of particular incomes and expenses. By entering "VIEWINCOME" or "VIEWEXPENSE", the user can view their incomes and expenses by different types.If the user wants to delete his/her income or expense records, he/she can do so by entering "DELETEIN" and "DELETEEX" repectively.

include<iostream>
include<string>
using namespace std;
//The expense and income records are of a structure type, containing the amonut of money, the account type, the type of money and date of records.
struct record{
  string accounttype;
  string moneytype;
  string date;
  double money;
};
main(){
  int const max=100;
  //Use dynamic memory to create an array of records in order to delete the records conveninently.
  record * a=new record [max];
  record * b=new record [max];
  int i=0,j=0;
  string x;
  cout<<"What do you want to do?"<<endl;
  cout<<"Please enter: 1.INCOME 2.EXPENSE 3.REPORT 4.VIEWINCOME 5.VIEWEXPENSE 6.CURRENCY 7.DELETEIN 8.DELETEEX 9.DONE"<<endl;
  cin>>x;
  while(true){
   if (x=="INCOME"){
     for (i;i<max;i++){
       //Get user's input of the amonut of money, the account type, the type of money and date of income records.
       cout<<"Please enter the amount of money."<<endl;
       cin>>a[i].money;
       cout<<"Please enter the type of money."<<endl;
       cin>>a[i].moneytype;
       cout<<"Please enter the account type."<<endl;
       cin>>a[i].accounttype;
       cout<<"Please enter the date."<<endl;
       cin>>a[i].date;
       cout<<"CONTINUE or FINISH?"<<endl;
       cin>>x;
       if (x=="FINISH"){
         i=i+1;
         break;
       }  
     }
   cout<<"What do you want to do?"<<endl;
   cout<<"Please enter: 1.INCOME 2.EXPENSE 3.REPORT 4.VIEWINCOME 5.VIEWEXPENSE 6.CURRENCY 7.DELETEIN 8.DELETEEX 9.DONE"<<endl;
   cin>>x; 
   }
   if (x=="EXPENSE"){
     double budget;
     cout<<"Please enter your budget."<<endl;
     cin>>budget;
     for (j;j<max;j++){
       //Get user's input of the amonut of money, the account type, the type of money and date of expense records.
       cout<<"Please enter the amount of money."<<endl;
       cin>>b[j].money;
       cout<<"Please enter the type of money."<<endl;
       cin>>b[j].moneytype;
       cout<<"Please enter the account type."<<endl;
       cin>>b[j].accounttype;
       cout<<"Please enter the date."<<endl;
       cin>>b[j].date;
       cout<<"CONTINUE or FINISH?"<<endl;
       cin>>x;
       if (x=="FINISH"){
         budget(b,j,budget);//Call the budget function to see if the user's expenses reach the budget.
         j=j+1
         break;
       }  
     }
   cout<<"What do you want to do?"<<endl;
   cout<<"Please enter: 1.INCOME 2.EXPENSE 3.REPORT 4.VIEWINCOME 5.VIEWEXPENSE 6.CURRENCY 7.DELETEIN 8.DELETEEX 9.DONE"<<endl;
   cin>>x;
   }
   if (x=="REPORT"){
     report(a,b,i,j);//Call the report function.
     cout<<"What do you want to do?"<<endl;
     cout<<"Please enter: 1.INCOME 2.EXPENSE 3.REPORT 4.VIEWINCOME 5.VIEWEXPENSE 6.CURRENCY 7.DELETEIN 8.DELETEEX 9.DONE"<<endl;
     cin>>x;
   }  
   if (x=="VIEWINCOME"){
     viewincome(a,max);//Call the viewincome function.
     cout<<"What do you want to do?"<<endl;
     cout<<"Please enter: 1.INCOME 2.EXPENSE 3.REPORT 4.VIEWINCOME 5.VIEWEXPENSE 6.CURRENCY 7.DELETEIN 8.DELETEEX 9.DONE"<<endl;
     cin>>x;
   } 
   if (x=="VIEWEXPENSE"){
     viewexpense(b,max);//Call the viewexpense function.
     cout<<"What do you want to do?"<<endl;
     cout<<"Please enter: 1.INCOME 2.EXPENSE 3.REPORT 4.VIEWINCOME 5.VIEWEXPENSE 6.CURRENCY 7.DELETEIN 8.DELETEEX 9.DONE"<<endl;
     cin>>x;
   }
   if (x=="CURRENCY"){
     currency();//Call the currency function.
     cout<<"What do you want to do?"<<endl;
     cout<<"Please enter: 1.INCOME 2.EXPENSE 3.REPORT 4.VIEWINCOME 5.VIEWEXPENSE 6.CURRENCY 7.DELETEIN 8.DELETEEX 9.DONE"<<endl;
     cin>>x;
   } 
   if (x=="DELETEIN"){
     delete [] a; //This line is to delete income records.
     cout<<"What do you want to do?"<<endl;
     cout<<"Please enter: 1.INCOME 2.EXPENSE 3.REPORT 4.VIEWINCOME 5.VIEWEXPENSE 6.CURRENCY 7.DELETEIN 8.DELETEEX 9.DONE"<<endl;
     cin>>x;
   }
   if (x=="DELETEEX"){
     delete [] b; //This line is to delete expense records.
     cout<<"What do you want to do?"<<endl;
     cout<<"Please enter: 1.INCOME 2.EXPENSE 3.REPORT 4.VIEWINCOME 5.VIEWEXPENSE 6.CURRENCY 7.DELETEIN 8.DELETEEX 9.DONE"<<endl;
     cin>>x;
   } 
   if (x=="DONE"){
     break;
   } 
 }
} 

//Function:main function

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
  int funct;
  double budget=10000;
  cout<<"Budget will be set as HKD10000 at first."<<endl;
  while(true){
   cout<<"Please select function."<<endl;
   cout<<"1.INCOME 2.BUDGET 3.EXPENSE 4.REPORT 5.VIEWINCOME 6.VIEWEXPENSE 7.CURRENCY 8.DELETEIN 9.DELETEEX 10.EXIT"<<endl;
   cin>>funct;
   if (funct==1){
     while (i<max){
       //Get user's input of the amonut of money, the account type, the type of money and date of income records.
       cout<<"Please enter the amount of money."<<endl;
       cin>>a[i].money;
       cout<<"Please enter the type of money."<<endl;
       cin>>a[i].moneytype;
       cout<<"Please enter the account type."<<endl;
       cin>>a[i].accounttype;
       cout<<"Please enter the date."<<endl;
       cin>>a[i].date;
       i+=1;
       if (i>max){
         cout<<"Record is full."<<endl;
         break;
       }
       cout<<"1.CONTINUE 2.FINISH"<<endl;
       cin>>funct;
       if (funct==2){
         break;
       }
     }
  
   if (funct==2){
     cout<<"Please enter your budget."<<endl;
     cin>>budget;
   }
     
   if (funct==3){
     while (j<max){
       //Get user's input of the amonut of money, the account type, the type of money and date of expense records.
       cout<<"Please enter the amount of money."<<endl;
       cin>>b[j].money;
       cout<<"Please enter the type of money."<<endl;
       cin>>b[j].moneytype;
       cout<<"Please enter the account type."<<endl;
       cin>>b[j].accounttype;
       cout<<"Please enter the date."<<endl;
       cin>>b[j].date;
       j+=1;
       if (j>max){
         cout<<"Record is full."<<endl;
         break;
       }
       cout<<"1.CONTINUE 2.FINISH"<<endl;
       cin>>funct;
       if (funct==2){
         budget(b,j,budget);//Call the budget function to see if the user's expenses reach the budget.
         break;
       }  
     }
   }
     
   if (funct==4){
     report(a,b,i,j);//Call the report function.
   }  
     
   if (funct==5){
     viewincome(a,max);//Call the viewincome function.
    } 
     
   if (funct==6){
     viewexpense(b,max);//Call the viewexpense function.
    }
     
   if (funct==7){
     currency();//Call the currency function.
     } 
     
   if (funct==8){
     delete [] a; //This line is to delete income records.
    }
     
   if (funct==9){
     delete [] b; //This line is to delete expense records.
     } 
     
   if (funct==10){
     break;
   } 
 }
} 

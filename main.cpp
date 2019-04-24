include<iostream>
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
  while(true){
   cin>>x;
   if (x=="INCOME"){
     for (i;i<max;i++){
       //Get user's input of the amonut of money, the account type, the type of money and date of income records.
       cin>>a[i].money;
       cin>>a[i].moneytype;
       cin>>a[i].accounttype;
       cin>>a[i].date;
       cout<<"CONTINUE or FINISH"<<endl;
       cin>>x;
       if (x=="FINISH"){
         i=i+1;
         break;
       }  
     }
   cout<<"What do you want to do?"<<endl;
   cin>>x; 
   }
   if (x=="EXPENSE"){
     for (j;j<max;j++){
       //Get user's input of the amonut of money, the account type, the type of money and date of expense records.
       cin>>b[j].money;
       cin>>b[j].moneytype;
       cin>>b[j].accounttype;
       cin>>b[j].date;
       cout<<"CONTINUE or FINISH"<<endl;
       cin>>x;
       if (x=="FINISH"){
         j=j+1;
         budget(b,j);//Call the budget function to see if the user's expenses reach the budget.
         break;
       }  
     }
   cout<<"What do you want to do?"<<endl;
   cin>>x;
   }
   if (x=="REPORT"){
     report(a,b,i,j);//Call the report function.
     cout<<"What do you want to do?"<<endl;
     cin>>x;
   }  
   if (x=="VIEWINCOME"){
     viewincome(a,max);//Call the viewincome function.
     cout<<"What do you want to do?"<<endl;
     cin>>x;
   } 
   if (x=="VIEWEXPENSE"){
     viewexpense(b,max);//Call the viewexpense function.
     cout<<"What do you want to do?"<<endl;
     cin>>x;
   }
   if (x=="CURRENCY"){
     currency();//Call the currency function.
     cout<<"What do you want to do?"<<endl;
     cin>>x;
   } 
   if (x=="DELETEIN"){
     delete [] a; //This line is to delete income records.
     cout<<"What do you want to do?"<<endl;
     cin>>x;
   }
   if (x=="DELETEEX"){
     delete [] b; //This line is to delete expense records.
     cout<<"What do you want to do?"<<endl;
     cin>>x;
   } 
   if (x=="DONE"){
     break;
   } 
 }
} 
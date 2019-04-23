include<iostream>
using namespace std;
//The expense and income records are of a structure type, containing the amonut of money, the account type, the type of money and date of records.
struct record{
  string accounttype;
  string moneytype;
  string date;
  double money;
};
mian(){
  int const max=100;
  //Use dynamic memory to create an array of records in order to delete the records conveninently.
  record * a=new record [max];
  record * b=new record [max];
  int i=0,j=0;
  string x;
  cout<<"What do you want to do?"<<endl;
  cin>>x;
  if (x=="INCOME"){
    for (i;i<max;i++){
      //Get user's input of the amonut of money, the account type, the type of money and date of income records.
      cin>>a[i].money;
      cin>>a[i].moneytype;
      cin>>a[i].accounttype;
      cin>>a[i].date;
      cin>>x;
      if (x=="FINISH"){
        i=i;
        break;
      }  
    }
  }
  if (x=="EXPENSE"){
    for (j;j<max;j++){
      //Get user's input of the amonut of money, the account type, the type of money and date of expense records.
      cin>>b[j].money;
      cin>>b[j].moneytype;
      cin>>b[j].accounttype;
      cin>>b[j].date;
      cin>>x;
      if (x=="FINISH"){
        j=j;
        break;
      }  
    }
  }
  if (x=="DELETEA"){
    delete [] a;
  } 
  if (x=="DELETEB"){
    delete [] b;
  } 
  cin>>x;
}

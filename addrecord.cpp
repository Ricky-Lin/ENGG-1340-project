include<iostream>
using namespace std;
struct record{
  string accounttype;
  string moneytype;
  string date;
  double money;
};
mian(){
  int const max=100;
  record * a=new record [max];
  record * b=new record [max];
  string x;
  cout<<"What do you want to do?"<<endl;
  cin>>x;
  if (x=="INCOME"){
    for (int i=0;i<max;i++){
      cin>>a[i].money;
      cin>>a[i].moneytype;
      cin>>a[i].accounttype;
      cin>>a[i].date;
      cin>>x;
      if (x=="FINISH"){
        break;
      }  
    }
  }
  if (x=="EXPENSE"){
    for (int i=0;i<max;i++){
      cin>>b[i].money;
      cin>>b[i].moneytype;
      cin>>b[i].accounttype;
      cin>>b[i].date;
      cin>>x;
      if (x=="FINISH"){
        break;
      }  
    }
  }
  if (x=="DELETE"){
    delete [] a;
  } 
  

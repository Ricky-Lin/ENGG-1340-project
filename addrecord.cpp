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
  int i=0,j=0;
  string x;
  cout<<"What do you want to do?"<<endl;
  cin>>x;
  if (x=="INCOME"){
    for (i;i<max;i++){
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
  if (x=="DELETE"){
    delete [] a;
  } 
  cin>>x;
}

//The user inputs the type of incomes he/she wants to check and then the system outputs the corresponding amount.
void viewincome(record * a[],int max){
  double sum1=0,sum2=0,sum3=0;
  string type;
  cout<<"What type of incomes do you want to check?"<<endl;
  cin>>type;
  for(int i=0;i<max;i++){
    if (a[i].moneytype==type){
      sum1+=a[i].money;
    }
  } 
  cout<<"You have got "<<sum1<<" from "<<type<<"."<<endl;
  for(int i=0;i<max;i++){
    if (a[i].account==type){
      sum2+=a[i].money;
    }
  }
  cout<<"You have "<<sum2<<" in terms of "<<type<<"."<<endl;
  for(int i=0;i<max;i++){
    if (a[i].date==type){
      sum3+=a[i].money;
    }
  }
  cout<<"You have reveived "<<sum3<<" on "<<type<<"."<<endl;
    
}

void viewincome(record * a[],max){
  int sum1=0,sum2=0,sum3=0;
  string type;
  cin>>type;
  for(int i=0;i<max;i++){
    if (a[i].moneytype==type){
      sum1+=a[i].money;
    }
  } 
  cout<<"You have got "<<sum1<<" from "<<type<<endl;
  for(int i=0;i<max;i++){
    if (a[i].account==type){
      sum2+=a[i].money;
    }
  }
  cout<<"You have "<<sum2<<" in terms of "<<type<<endl;
  for(int i=0;i<max;i++){
    if (a[i].date==type){
      sum3+=a[i].money;
    }
  }
  cout<<"You have reveived "<<sum3<<" on "<<type<<endl;
    
}
//The user inputs the type of expenses he/she wants to check and then the system outputs the corresponding amount.
void viewexpense(record * b[],max){
  double sum1=0,sum2=0,sum3=0;
  string type;
  cout<<"What type of expenses do you want to check?"<<endl;
  cin>>type;
  for(int i=0;i<max;i++){
    if (b[i].moneytype==type){
      sum1+=b[i].money;
    }
  } 
  cout<<"You have spent "<<sum1<<" on "<<type<<endl;
  for(int i=0;i<max;i++){
    if (b[i].account==type){
      sum2+=b[i].money;
    }
  }
  cout<<"You have used "<<sum2<<" in terms of "<<type<<endl;
  for(int i=0;i<max;i++){
    if (b[i].date==type){
      sum3+=b[i].money;
    }
  }
  cout<<"You have spent "<<sum3<<" on "<<type<<endl;
    
}


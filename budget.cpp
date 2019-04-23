// This function is used to issue an warning when user's expenses reach budget.
void (record * b, int num,){
  int budget=10000;
  double amount=0;
  for (int i=0;i<=num;i++){
    amount+=b[i].money;
  } 
  if (amonut>budget){
    cout<<"WARNING! YOU HAVE REACHED YOUR BUDGRT. PLEASE MANAGE YOUR WEALTH PROPERLY!!!"<<endl;
  }  
}  

// Function:issue an warning when user's expenses reach budget.
// Input:record,budget
// Output:warning if users's expenses reach budget

void budget(record * b, int num,double budget){
  double amount=0;
  for (int i=0;i<=num;i++){
    amount+=b[i].money;
  } 
  if (amount>budget){
    cout<<"WARNING! YOU HAVE REACHED YOUR BUDGRT. PLEASE MANAGE YOUR WEALTH PROPERLY!!!"<<endl;
  }  
}  

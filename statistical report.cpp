//Print user's monthly incomes, expensed and percentage of particular expenses or incomes.
void report(record * a, record * b,num1,num2){
  double t1=0,t2=0,t3=0,t4=0;
  string x,y;
  for (int i=0;i<=num1;i++){
    t1+=a[i].money;
  } 
  cout<<"Your monthly incomes are "<<t1<<endl;
  for (int j=0;j<=num2;j++){
    t2+=b[j].money;
  }
  cout<<"Your monthly expenses are "<<t2<<endl;
  
  cout<<"The percentage of what incomes do ypu want to check?"<<endl;
  cin>>x;
  for (int i=0;i<=num1;i++){
    if (a[i].moneytype==x){
      t3+=a[i].money;
    }  
  }
  cout<<"The percentage of the income"<<x<<" is "<<fixed<<setprecision(1)<<t3/t1*100<<"%."<<endl;
    
  cout<<"The percentage of what expenses do ypu want to check?"<<endl;
  cin>>y;
  for (int j=0;j<=num2;j++){
    if (b[j].moneytype==y){
      t4+=b[j].money;
    }  
  }
 cout<<"The percentage of the expense"<<x<<" is "<<fixed<<setprecision(1)<<t4/t2*100<<"%."<<endl;
}

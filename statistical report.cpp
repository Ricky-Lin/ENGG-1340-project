//Print user's monthly incomes, expensed and percentage of particular expenses or incomes.
void report(record * a, record * b,num1,num2){
  double t1=0,t2=0
  for (int i=0;i<num1;i++){
    t1+=a[i].money;
  } 
  cout<<"Your monthly incomes are "<<t1<<endl;
  for (int j=0;j<num2;j++){
    t2+=b[j].money;
  }
  cout<<"Your monthly expenses are "<<t2<<endl;
  
}

//Function:Print statistical report of users’ financial state.
//Input:income record,expense record
//Output:monthly income,monthly expense,percentage of selected incomes,percentage of selected expenses

void report(record * a, record * b,int num1,int num2){
  double t1=0,t2=0,t3=0,t4=0;
  string x,y;
  int continue;
  for (int i=0;i<=num1;i++){
    t1+=a[i].money;
  } 
  cout<<"Your monthly incomes are "<<t1<<"."<<endl;
  for (int j=0;j<=num2;j++){
    t2+=b[j].money;
  }
  cout<<"Your monthly expenses are "<<t2<<"."<<endl;
  while (true){
   cout<<"The percentage of what incomes do you want to check?"<<endl;
   cin>>x;
   for (int i=0;i<=num1;i++){
     if (a[i].moneytype==x){
       t3+=a[i].money;
     }  
   }
   cout<<"The percentage of the income"<<x<<" is "<<fixed<<setprecision(1)<<t3/t1*100<<"%."<<endl;
   cout<<"1.Continue 2.Exit"<<endl;
   cin>>continue;
   if (continue==2){
     break;
   }
  } 
  while (true){  
   cout<<"The percentage of what expenses do you want to check?"<<endl;
   cin>>y;
   for (int j=0;j<=num2;j++){
     if (b[j].moneytype==y){
       t4+=b[j].money;
     }  
   }
   cout<<"The percentage of the expense"<<y<<" is "<<fixed<<setprecision(1)<<t4/t2*100<<"%."<<endl;
   cout<<"1.Continue 2.Exit"<<endl;
   cin>>continue;
   if (continue==2){
     break;
   }
  }
}  


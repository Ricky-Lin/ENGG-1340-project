//Function:compute the total expense
//Input:record,type of expense
//Output:total expense of selected type

void viewexpense(record * b[],int max){
  double sum1=0,sum2=0,sum3=0;
  string x;
  int funct,continue;
  
  while(true){
    cout<<"1.View by type 2.View by account 3.View by date"<<endl;
    cout<<"Please select function."<<endl;
    cin>>funct;
    switch(funct){
      case 1:
        cout<<"Which type of expenses do you want to check?"<<endl;
        cin>>x;
        for(int i=0;i<max;i++){
          if (b[i].moneytype==x){
            sum1+=b[i].money;
          }
        } 
        cout<<"You have spent "<<sum1<<" on "<<x<<"."<<endl;
        break;
      case 2:
        cout<<"Which account do you want to check?"<<endl;
        cin>>x;
        for(int i=0;i<max;i++){
          if (b[i].account==x){
            sum2+=b[i].money;
          }
        }
        cout<<"You have used "<<sum2<<" in terms of "<<x<<"."<<endl;
        break;
      case 3:
        cout<<"Which date do you want to check?"<<endl;
        cin>>x;
        for(int i=0;i<max;i++){
          if (b[i].date==x){
            sum3+=b[i].money;
          }
        }
        cout<<"You have spent "<<sum3<<" on "<<x<<"."<<endl;
        break;
      default:
        cout<<"PLease select function 1-3"<<endl;
    }
    cout<<"1.Continue 2.Exit"<<endl;
    cin>>continue;
    if (continue==2){
      break;
    }
}


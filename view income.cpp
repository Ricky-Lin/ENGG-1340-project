//Function:compute the income of selected type
//Input:record,selected type
//Output:total income of selected type

void viewincome(record * a[],int max){
  double sum1=0,sum2=0,sum3=0;
  string x;
  int funct,continue;
  while(true){
    cout<<"1.View by type 2.View by account 3.View by date"<<endl;
    cout<<"Please select function."<<endl;
    cin>>funct;
    switch(funct){
      case 1:
        cout<<"What type of incomes do you want to check?"<<endl;
        cin>>x;
        for(int i=0;i<max;i++){
          if (a[i].moneytype==x){
            sum1+=a[i].money;
          }
        } 
        cout<<"You have got "<<sum1<<" from "<<type<<"."<<endl;
        break;
      case 2:
        cout<<"Which account do you want to check?"<<endl;
        cin>>x;
        for(int i=0;i<max;i++){
          if (a[i].account==x){
            sum2+=a[i].money;
          }
        }
        cout<<"You have "<<sum2<<" in terms of "<<type<<"."<<endl;
        break;
      case 3:
        cout<<"Which date do you want to check?"<<endl;
        cin>>x;
        for(int i=0;i<max;i++){
          if (a[i].date==x){
            sum3+=a[i].money;
          }
        }
        cout<<"You have reveived "<<sum3<<" on "<<type<<"."<<endl;
        break;
      default:
        cout<<"PLease select function 1-3"<<endl;
    }   
    cout<<"1.Continue 2.Exit"
    cin>>continue;
    if (continue==2){
      break;
    }
  }
}

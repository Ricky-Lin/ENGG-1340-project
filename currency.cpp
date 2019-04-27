//Function:currency exchange(HKD to other currencies)
//Input:the amount of HKD,the currency user wants to exchange
//Output:the amount of money in the currency user selected

void currency(){
  double HKD, changed;
  int currency;
  while (true){
    cout<<"Please input the amount of HKD and the selected currency type you want to exchange."<<endl;
    cout<<"1.USD 2.RMB 3.YEN 4.EURO 5.GBP 6.KRW"<<endl;
    cin>>HKD>>currency;
    switch(currency){
      case 1:
        cout<<"The exchanged money is USD "<<HKD*0.13<<currency<<"."<<endl;
        break;
      case 2:
        cout<<"The exchanged money is RMB "<<HKD*0.86<<currency<<"."<<endl;
        break;
      case 3:
        cout<<"The exchanged money is YEN "<<HKD*14.27<<currency<<"."<<endl;
        break;
      case 4:
        cout<<"The exchanged money is EURO "<<HKD*0.11<<currency<<"."<<endl;
        break;
      case 5:
        cout<<"The exchanged money is GBP "<<HKD*0.098<<currency<<"."<<endl;
        break;
      case 6:
        cout<<"The exchanged money is KRW "<<HKD*145.95<<currency<<"."<<endl;
        break;
      default:
        cout<<"Sorry for unsupported currency."<<endl;
    }
    cout<<"1.Continue 2.Exit"<<endl;
    cin>>currency;
    if(currency==2){
      break;
    }  
} 

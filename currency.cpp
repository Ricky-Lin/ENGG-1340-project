//Function:currency exchange(HKD to other currencies)
//Input:the amount of HKD,the currency user wants to exchange
//Output:the amount of money in the currency user selected

void currency(){
  double HKD, changed;
  string currency;
  cout<<"Input your HKD and the currency type you want to exchange."<<endl;
  cout<<"1.USD 2.RMB 3.YEN 4.EURO 5.GBP 6.KRW"<<endl;
  cin>>HKD>>currency;
  switch(currency){
    case 1:
      cout<<"The exchanged money is "<<HKD*0.13<<currency<<"."<<endl;
      break;
    case 2:
      cout<<"The exchanged money is "<<HKD*0.86<<currency<<"."<<endl;
      break;
    case 3:
      cout<<"The exchanged money is "<<HKD*14.27<<currency<<"."<<endl;
      break;
    case 4:
      cout<<"The exchanged money is "<<HKD*0.11<<currency<<"."<<endl;
      break;
    case 5:
      cout<<"The exchanged money is "<<HKD*0.098<<currency<<"."<<endl;
      break;
    case 6:
      cout<<"The exchanged money is "<<HKD*145.95<<currency<<"."<<endl;
      break;
    default:
      cout<<"Sorry for unsupported currency."<<endl;
  }
} 

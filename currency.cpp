//This function gets the amount of HKD and the currency the user wants to exchange and then exchanges HKD to some other currencies.
void currency(){
  double HKD, changed;
  string currency,x;
  while (true){
    cout<<"Input your HKD and the currency type you want to exchange."<<endl;
    cout<<"You can input 1.USD 2.RMB 3.YEN 4.EURO 5.GBP 6.KRW for currency type."<<endl;
    cin>>HKD>>currency;
    if (currency=="USD"){
      cout<<"The exchanged money is "<<HKD*0.13<<currency<<"."<<endl;
      cout<<"CONTINUE or FINISH?"<<endl;
      cin>>x;
      if (x=="CONTINUE"){
        cout<<"Input your HKD and the currency type you want to exchange."<<endl;
        cout<<"You can input 1.USD 2.RMB 3.YEN 4.EURO 5.GBP 6.KRW for currency type."<<endl;
        cin>>HKD>>currency;
      } 
      if (x=="FINISH"){
        break;
      }  
    }
    if (currency=="RMB"){
      cout<<"The exchanged money is "<<HKD*0.86<<currency<<"."<<endl;
      cout<<"CONTINUE or FINISH?"<<endl;
      cin>>x;
      if (x=="CONTINUE"){
        cout<<"Input your HKD and the currency type you want to exchange."<<endl;
        cout<<"You can input 1.USD 2.RMB 3.YEN 4.EURO 5.GBP 6.KRW for currency type."<<endl;
        cin>>HKD>>currency;
      } 
      if (x=="FINISH"){
        break;
      }  
    }
     if (currency=="YEN"){
      cout<<"The exchanged money is "<<HKD*14.27<<currency<<"."<<endl;
      cout<<"CONTINUE or FINISH?"<<endl;
      cin>>x;
      if (x=="CONTINUE"){
        cout<<"Input your HKD and the currency type you want to exchange."<<endl;
        cout<<"You can input 1.USD 2.RMB 3.YEN 4.EURO 5.GBP 6.KRW for currency type."<<endl;
        cin>>HKD>>currency;
      } 
      if (x=="FINISH"){
        break;
      }  
    }
    if (currency=="EURO"){
      cout<<"The exchanged money is "<<HKD*0.11<<currency<<"."<<endl;
      cout<<"CONTINUE or FINISH?"<<endl;
      cin>>x;
      if (x=="CONTINUE"){
        cout<<"Input your HKD and the currency type you want to exchange."<<endl;
        cout<<"You can input 1.USD 2.RMB 3.YEN 4.EURO 5.GBP 6.KRW for currency type."<<endl;
        cin>>HKD>>currency;
      } 
      if (x=="FINISH"){
        break;
      }  
    }
    if (currency=="GBP"){
      cout<<"The exchanged money is "<<HKD*0.098<<currency<<"."<<endl;
      cout<<"CONTINUE or FINISH?"<<endl;
      cin>>x;
      if (x=="CONTINUE"){
        cout<<"Input your HKD and the currency type you want to exchange."<<endl;
        cout<<"You can input 1.USD 2.RMB 3.YEN 4.EURO 5.GBP 6.KRW for currency type."<<endl;
        cin>>HKD>>currency;
      } 
      if (x=="FINISH"){
        break;
      }  
    }
    if (currency=="KRW"){
      cout<<"The exchanged money is "<<HKD*145.95<<currency<<"."<<endl;
      cout<<"CONTINUE or FINISH?"<<endl;
      cin>>x;
      if (x=="CONTINUE"){
        cout<<"Input your HKD and the currency type you want to exchange."<<endl;
        cout<<"You can input 1.USD 2.RMB 3.YEN 4.EURO 5.GBP 6.KRW for currency type."<<endl;
        cin>>HKD>>currency;
      } 
      if (x=="FINISH"){
        break;
      }  
    }
  } 
} 

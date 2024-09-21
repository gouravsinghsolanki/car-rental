
#include<iostream>
using namespace std;
class car_rent{
    string company,model;
    int year,price;
};
int main(){
int b=0;
int select_compay;
string s;
string name,driving,carname,carmodel,colour,A,B,C,D;
int daysforrentcar,amount,totalamount,aadharcard,mobileno,year;
char choice;
char a=0;
top:
do{
	system("CLS");
cout<<"\t\t\t\*****************WELLCOME TO SHIVV CAR RENT*******************\n"<<endl;
cout<<"\t\t\t*****************IF YOU WANT TO RENT A CAR*********************"<<endl;
cout<<"\t\t\t*************THEN PRESS S TO SEE THE  DETAIL OF CAR***********"<<endl;
cin>>s;
if(s=="s" || s=="S"){
  welcome: 
  system("CLS");
   cout<<"\t -------------------------------------------------\t"<<endl;
    cout<<"\t|            select car company                 | \t"<<endl;
    cout<<"\t --------------------------------------------------\t"<<endl;
   cout<<"\t |             Enter.1.HYUNDAI                    |\t  "<<endl;
   cout<<"\t |             Enter.2.TATA                       |\t  "<<endl;
   cout<<"\t |             Enter.3.FORD                       |\t  "<<endl;
   cout<<"\t |             Enter.4.MARUTI SUZUKI              |\t "<<endl;
   cout<<"\t |------------------------------------------------|\t"
   <<endl;
}
   else{
       cout<<"\tYOU CAN PRESS WRONG KEY"<<endl;
       system("PAUSE");
      goto top;
	  }
 mod:
    char model;
    cin>>model;
     if(model=='1'){
         cout<<"\twellcome to HYUNDAI"<<endl;
         cout<<"\tA.CRETA\t "<<endl;
         cout<<"\tB.VERNA\t"<<endl;
         cout<<"\tC.VENUE\t"<<endl;
         cout<<"\tD.AMAZE\t"<<endl;
         cin>>choice;
if(choice=='A' || choice=='a'){
cout<<"\t\tNAME        - CRETA"<<endl;
cout<<"\t\tMODEL       - S1.5petrol MT"<<endl;
cout<<"\t\tYEAR        - 2019"<<endl;
cout<<"\t\tCOLOUR      - black"<<endl;
cout<<"\t\tPER DAY RENT- 6000"<<endl;
A="CRETA";
B="S1.5 PETROL MT";
C="2019";
D="BALCK";
 
     }
     if(choice=='b' || choice=='B'){
cout<<"\t\tNAME        - VERNA"<<endl;
cout<<"\t\tMODEL       - 2020 SX"<<endl;
cout<<"\t\tYEAR        - 2022"<<endl;
cout<<"\t\tCOLOUR      - WHITE"<<endl;
cout<<"\t\tPER DAY RENT- 7500"<<endl;
A="VERNA";
B="2020 SX";
C="2022";
D="WHITE";
}
if(choice=='C' || choice=='c'){
cout<<"\t\tNAME        - VENUE"<<endl;
cout<<"\t\tMODEL       - S 1.2 PETROL BASE"<<endl;
cout<<"\t\tYEAR        - 2022"<<endl;
cout<<"\t\tCOLOUR      - RED"<<endl;
cout<<"\t\tPER DAY RENT- 8700"<<endl;
A="VENUE";
B="S1.2 PETROL BASE";
C="2022";
D="RED";
}
if(choice=='D' || choice=='d'){
cout<<"\t\tNAME        - AMAZE"<<endl;
cout<<"\t\tMODEL       - VX 1.2 CVC PETROL"<<endl;
cout<<"\t\tYEAR        - 2019"<<endl;
cout<<"\t\tCOLOUR      - blUE"<<endl;
cout<<"\t\tPER DAY RENT- 5600"<<endl;
A="AMAZE";
B="VX 1.2 CVC PETROL ";
C="2019";
D="BLUE";
}
else{
	cout<<"INVALID INPUT"<<endl;
	goto mod;
}}
 
         else if(model=='2'){
      del:
        cout<<"\tWELLCOME TO TATA"<<endl;
         cout<<"\tF.NEXON"<<endl;
         cout<<"\tG.PUCH"<<endl;
         cout<<"\tH.ALTROZ"<<endl;
         cout<<"\tI.HARRIER"<<endl;
         cin>>choice;

if(choice=='F' || choice=='f'){
cout<<"\t\tNAME        - NEXON"<<endl;
cout<<"\t\tMODEL       - XZ+(S)"<<endl;
cout<<"\t\tYEAR        - 2022"<<endl;
cout<<"\t\tCOLOUR      - DARK BLUE"<<endl;
cout<<"\t\tPER DAY RENT- 7000"<<endl;
A="NEXON";
B="XZ+(S)";
C="2022";
D="DARK BLUE";
}
 else if(choice=='G' || choice=='g'){
cout<<"\t\tNAME        - PUCH"<<endl;
cout<<"\t\tMODEL       -  DESIAL"<<endl;
cout<<"\t\tYEAR        - 2021"<<endl;
cout<<"\t\tCOLOUR      - black"<<endl;
cout<<"\t\tPER DAY RENT- 6000"<<endl;
A="PUCH";
B="DESIAL";
C="2021";
D="BLACK";
} 
else if(choice=='H' || choice=='h'){
cout<<"\t\tNAME        - ALTROZ"<<endl;
cout<<"\t\tMODEL       -  DESIAL"<<endl;
cout<<"\t\tYEAR        - 2022"<<endl;
cout<<"\t\tCOLOUR      - black"<<endl;
cout<<"\t\tPER DAY RENT- 10000"<<endl;   
A="ALTROZ";
B="DESIAL";
C="2022";
D="BALCK";
}
else if(choice=='I' || choice=='i'){
cout<<"\t\tNAME        - HERRIER"<<endl;
cout<<"\t\tMODEL       -  LX BASE"<<endl;
cout<<"\t\tYEAR        - 2020"<<endl;
cout<<"\t\tCOLOUR      - WHITE"<<endl;
cout<<"\\ttPER DAY RENT- 12000"<<endl;
A="HERRIER";
B="LX BASE";
C="2020";
D="WHITE";
}
else{
	cout<<"invalid input"<<endl;
	goto del;
	system("PAUSE");
}}

else if(model=='3'){
             cout<<"\twellcome to FORD"<<endl;
             cout<<"\tJ.EQUATOR"<<endl;
             cout<<"\tK.EDGE"<<endl;
             cout<<"\tL.ESCAPE"<<endl;
             cout<<"\tM.EVEREST"<<endl;
             cin>>choice;
         
             if(choice=='J' || choice=='j'){
cout<<"\t\tNAME        - EQUATOR"<<endl;
cout<<"\t\tMODEL       - HYBRID"<<endl;
cout<<"\t\tYEAR        - 2015"<<endl;
cout<<"\t\tCOLOUR      -  BLUE"<<endl;
cout<<"\t\tPER DAY RENT- 4500"<<endl;
A="EQUATOR";
B="HYBRID";
C="2015";
D="BLUE";
}
if(choice=='K' || choice=='k'){
cout<<"\t\tNAME        - EDGE"<<endl;
cout<<"\t\tMODEL       -  UV UNVELIED"<<endl;
cout<<"\t\tYEAR        - 2005"<<endl;
cout<<"\t\tCOLOUR      - GRAY"<<endl;
cout<<"\t\tPER DAY RENT- 4500"<<endl;
A="EDGE";
B="UV UNVELIED";
C="2005";
D="GRAY";
} 
if(choice=='L' || choice=='l'){
cout<<"\t\tNAME        - ESCAPE"<<endl;
cout<<"\t\tMODEL       -  DESIAL"<<endl;
cout<<"\t\tYEAR        - 2004"<<endl;
cout<<"\t\tCOLOUR      - SILVER"<<endl;
cout<<"\t\tPER DAY RENT- 3000"<<endl;   
A="ESCAPE";
B="DESIAL";
C="2004";
D="SILVER";
}
if(choice=='m' || choice=='M'){
cout<<"\t\tNAME        - EVEREST"<<endl;
cout<<"\t\tMODEL       - TOP VERIANT"<<endl;
cout<<"\t\tYEAR        - 2016"<<endl;
cout<<"\t\tCOLOUR      - WHITE"<<endl;
cout<<"\t\tPER DAY RENT- 15000"<<endl;
A="EVEREST";
B="TOP VERIANT";
C="2016";
D="WHITE";
}}
             else if(model=='4'){
                 cout<<"\twellcome to MARUTI SUZUKI"<<endl;
                 cout<<"\tN.ALTO K10"<<endl;
                 cout<<"\tO.BALENO"<<endl;
                 cout<<"\tP.BREZZA"<<endl;
                 cout<<"\tQ.IGNIS"<<endl;
                 cin>>choice;            
            
            if(choice=='N' || choice=='n'){
cout<<"\t\tNAME        - ALTO K10"<<endl;
cout<<"\t\tMODEL       - BASE MODEL"<<endl;
cout<<"\t\tYEAR        - 2021"<<endl;
cout<<"\t\tCOLOUR      - WHTIE"<<endl;
cout<<"\t\tPER DAY RENT- 5000"<<endl;
A="ALTO K10";
B="BASE MODEL";
C="2021";
D="WHITE";
}
if(choice=='o' || choice=='O'){
cout<<"\t\tNAME        - BALENO"<<endl;
cout<<"\t\tMODEL       -  DESIAL"<<endl;
cout<<"\t\tYEAR        - 2020"<<endl;
cout<<"\t\tCOLOUR      - black"<<endl;
cout<<"\t\tPER DAY RENT- 8000"<<endl;
A="BALENO";
B="DESIAL";
C="2020";
D="BALCK";
} 
if(choice=='P' || choice=='p'){
cout<<"\t\tNAME        - BREZZA"<<endl;
cout<<"\t\tMODEL       -  TOP MODEL"<<endl;
cout<<"\t\tYEAR        - 2023"<<endl;
cout<<"\t\tCOLOUR      - black"<<endl;
cout<<"\t\tPER DAY RENT- 10000"<<endl;   
A="BREZZA";
B="TOP MODEL";
C="2023";
D="BALCK";
}
if(choice=='Q' || choice=='q'){
cout<<"\t\tNAME        - IGNIS"<<endl;
cout<<"\t\tMODEL       -  BASE MODEL"<<endl;
cout<<"\t\tYEAR        - 2023"<<endl;
cout<<"\t\tCOLOUR      - WHITE"<<endl;
cout<<"\t\tPER DAY RENT- 4000"<<endl;
A="IGNIS";
B="BASE MODEL";
C="2023";
D="4000";
}}
else{
	cout<<"invalid input"<<endl;
system("PAUSE");
	goto welcome;
}      
            cout<<"if you want to again rent a car then press 1 and"<<endl;
            cout<<"your complite order then press 2 for billing process..."<<endl;
            cin>>b;
         
            
}while(b==1);
			
            cout<<"\t\tENTER NAME:-";
            cin>>name;
            cout<<"\t\tENTER MOBILE NO:-";
			cin>>mobileno;     
	       cout<<"\t\tAADHAR CARD:-";
            cin>>aadharcard;
             cout<<"\t\tDRIVING LICENCE:-";
             cin>>driving;
           //  cout<<"\t\tCAR NAME:-";
             //cin>>carname;
             //cout<<"\t\tCAR MODEL:-";
             //cin>>carmodel;
    //         cout<<"\t\tYEAR:-";
      ///      cin>>year; 
           cout<<"\t\tDAYS FOR RENT CAR:-";
           cin>>daysforrentcar;
            cout<<"\t\tPER DAY AMOUNT:-";
            cin>>amount;
            cout<<endl<<endl<<endl<<endl;
            
            
            
    cout<<"                  ------------SHIVV CAR RENT-----------"<<endl;
	cout<<"           #######################################################"<<endl;
	cout<<"           # CUSTOMER NAME      #        "<<name<<endl;
	cout<<"           #   MOBILE NO.       #        "<<mobileno<<endl;                         
	cout<<"           # AADHAR CARD NO     #        "<<aadharcard<<endl;                
	cout<<"           # DRIVING LICENCE    #        "<<driving<<endl;
	cout<<"           #    CAR NAME        #        "<<A<<endl;
	cout<<"           #    CAR MODEL       #        "<<B<<endl;
	cout<<"           #      YEAR          #         "<<C<<endl;
	cout<<"           #     COLOUR         #         "<<D<<endl;
	cout<<"           # DAYS FOR RENT CAR  #        "<<daysforrentcar<<endl; 
	cout<<"           # AMOUNT OF CAR      #        "<<amount<<endl;
	cout<<"           #######################################################"<<endl;    
	cout<<"           # TOTAL AMOUNT       #        "<<daysforrentcar*amount<<endl;
	cout<<"           #######################################################"<<endl;
    cout<<endl<<endl;
	cout<<"                       THANKYOU -- VISIT AGAIN   "<<endl;
    cout<<"                           ------------"<<endl;
    cout<<"                          (   -    -   )"<<endl;
    cout<<"                          (     -      )"<<endl;
    cout<<"                          (   _____    )"<<endl;
    cout<<"                          -------------"<<endl;






		
		
		
		
		
		
		
		
		
		
		//cout<<"\t\tTOTAL AMOUNT:-";
        //totalamount=amount*daysforrentcar;
        //cout<<totalamount;
        //cin>>totalamount;

}
//cout<<"you have press wrong key please press right key to go car company"<<endl;
//cout<<"\tTHANK YOU COME AGAIN";
//cout<<" -----------"<<endl;
//cout<<"(   -    -   )"<<endl;
//cout<<"(     -      )"<<endl;
//cout<<"(   _____    )"<<endl;
//cout<<"-------------"<<endl;
//}














//int HONDA;
 //if(HONDA=='h' || HONDA=='H'){
  //  cout<<"Enter.1.Creta\n2020\n15\n65000"<<endl;
    //cout<<"Enter.2.Verna\n2015\n22\n34000"<<endl;
    //c
    

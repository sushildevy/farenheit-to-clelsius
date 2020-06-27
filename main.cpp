// File:      <main.cpp>
// Name:      <Sushil Pandey>
// Class:     CSIS 252
// Program:   assignment 2
// Date:      <1/27/2018>
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
 // Program Description
 //This program will input the month and day of the month and use loop to 
 //enter high and low temperature then calculate maximum, minimum and 
 //average hign and low temperature in both Farenheit and Celsius.

const int sentinel=-999;

int main()
{
  //variables
  string month;
  int count=0,day,highTempr,lowTempr,maxHTempr=-9999,minHTempr=9999,maxLTempr=-9999;
  int minLTempr=9999,maxHTemprC,minHTemprC,maxLTemprC,minLTemprC,sumHTempr=0,sumLTempr=0;
  int highTemprC,lowTemprC,initialDay,finalDay;
  double avgHTempr,
	 avgHTemprC,
         avgLTempr,
         avgLTemprC;
    
     
   //Process  Description
   cout<<"\nThis program will input month, day, high temperature, low temperature"<<endl;
   cout<<"from the keyboard and calculate maximum, minimum and average"<<endl;
   cout<<"hign and low temperature in both Farenheit and Celsius."<<endl<<endl;

    
    
    
  //prompot the user and read the input
  cout<<"\nPlease enter the name of any month:"; 	//input of month
  cin>>month;
  cout<<"\nPlease enter the day of the month:";		//input of day
  cin>>day;
  initialDay=day;
  cout<<"Month :" <<month<<endl;
  cout<<"day :"<<day;
  
  cout<<"\nPlease enter the high temperature  in farenheit on "<<month <<" "<<day<<":";

  cin>>highTempr;
  
  
  while (highTempr !=sentinel)
      {
	if (highTempr>maxHTempr)       //maximum and minimum comparision
	   maxHTempr=highTempr;
	   
	if (highTempr<minHTempr)
	    minHTempr=highTempr;
	
	sumHTempr=sumHTempr+highTempr;
	
	cout<<"\nPlease enter the low temperature in farenheit on"<<month <<" "<< day<<":";
	cin>>lowTempr;
	
	sumLTempr=sumLTempr+lowTempr;
	
	if (lowTempr>maxLTempr)		//maximum and minimum comparision
	   maxLTempr=lowTempr;
	if (lowTempr<minLTempr)
	   minLTempr=lowTempr;
	highTemprC=(highTempr-32)*5.0/9;
	lowTemprC=(lowTempr-32)*5.0/9;
	cout<<"High Temperature: "<<highTempr<<" degrees F "<<highTemprC<<" degrees C"<< endl;
	cout<<"Low Temperature: "<<lowTempr<<" degrees F " <<lowTemprC<<" degrees C"<<endl;
        day+=1;

	count+=1;
	
	cout<<"\nPlease enter the high temperature  in farenheit on"<<month << day<<":";
	cin>>highTempr;
     }
      //Calcluation:
    finalDay=day;
    maxHTemprC=round((maxHTempr-32)*(5.0/9)); 		//calculation of maximum high Temperature in celsius
    minHTemprC=round((minHTempr-32)*(5.0/9)); 		//calculation of minimum high Temperature in celsius
    maxLTemprC=round((maxLTempr-32)*(5.0/9)); 		//calculation of maximum low Temperature in celsius
    minLTemprC=round((minLTempr-32)*(5.0/9)); 		//calculation of minimum low Temperature in celsius
    cout<<fixed<<showpoint<<setprecision(2)<<endl;	//set decimal place to 2
    avgHTempr=static_cast<double>(sumHTempr)/count;  			//average high temperature calculation
    avgLTempr=static_cast<double>(sumLTempr)/count;  			//average low temperature calculation 
    avgHTemprC=(avgHTempr-32)*(5.0/9);			//average high temperature calculation in celsius
    avgLTemprC=(avgLTempr-32)*(5.0/9);                  //average low temperature calculation in celsius

      
    
    cout<<"\nThe span of days. For above :" <<month << initialDay <<" - "<<finalDay;
    cout<<"\nThe maximum high temperature both in Farenheit and Celsius are: "<<maxHTempr <<" deg F and " <<maxHTemprC<<" deg C "<<endl;
    cout<<"\nThe minimum high temperature both in Farenheit and Celsius are: "<<minHTempr <<" deg F and " <<minHTemprC<<" deg C "<<endl;
    cout<<"\nThe maximum low temperature both in Farenheit and Celsius are: "<<maxLTempr <<" deg F and " <<maxLTemprC<<" deg C "<<endl;
    cout<<"\nThe minimum low temperature both in Farenheit and Celsius are: "<<minLTempr <<"  deg Fand " <<minLTemprC<<" deg C "<<endl;
    cout<<"\nThe average high temperature both in Farenheit and Celsius are : "<<avgHTempr <<" deg F and "<< avgHTemprC<<" deg C "<<endl;
    cout<<"\nThe average low temperature both in Farenheit and Celsius are : "<<avgLTempr <<" deg F and " << avgLTemprC<<" deg C "<<endl;
    
    
    return 0;
}
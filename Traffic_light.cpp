#include <iostream>
using namespace std;
int main()
{
	char trafficlight;
	
cout<<"Enter the Current colour of the traffic light (R/Y/G) "<<endl;
	cin>>trafficlight;
	if(trafficlight=='R')
	{
		cout<<"STOP ! The light is red "<<endl;
	}
	else if(trafficlight=='Y')
	{
		cout<<"Prepare To Go ! The light is about turn red "<<endl;
	}
	else if(trafficlight=='G')
	{
		cout<<"GO ! The light is Green "<<endl;
		 
	}
	else{
		cout<<"Invalid Input "<<endl;
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
	
}

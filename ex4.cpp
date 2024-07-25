#include<iostream>
using namespace std;
int main()
{
	float basicsalary,ovh,allow,netsal;
	cout<<"enter the basic salary:";
	cin>>basicsalary;
	cout<<"enter the over time hours:";
	cin>>ovh;
	if(ovh<10)
	 cout<<"no allowance";
	else if(ovh<=20)
	 allow=basicsalary*0.05;
	else if (ovh<=30)
	 allow=basicsalary*0.1;
	else  
	 allow=basicsalary*0.2;
	netsal=basicsalary+allow;
	cout<<"the net salary of employee:"<< netsal;
	
	return 0;
}

#include<iostream>
using namespace std;
int main()
{
	float f,v,r;
	const float m=250.74;
	
	cout<<"Enter Vwlocity:";
	cin>>v;
	cout<<"Enter radius of circular path:";
	cin>>r;
	f=m*v*v/r;
	cout<<"the centripetal force of plant is:"<<f<<endl;
	if((f>=0)&&(f<=100))
	 cout<<"low impact:";
	else if (f<=150)
	 cout<<"normal impact";
	else if (f<=200)
	 cout<<"high impact";
	else 
	 cout<<"ultra impact";  
	
	return 0;
}

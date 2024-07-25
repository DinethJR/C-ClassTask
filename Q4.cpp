#include<iostream>
#include<string>
using namespace std;

struct Employee{
	string EmployeeID;
	string EmpName;
	float OTFee;
	int OThours[5];
};
Employee getEmp(Employee e){
	cout<<"Enter Employee ID:";
	cin>>e.EmployeeID;
	cout<<"Enter the Name of Employee:";
	cin>>e.EmpName;
	cout<<"Enter the Over-time Fee:";
	cin>>e.OTFee;
	cout<<"Enter the number of OT Hours for Day 1:";
	cin>>e.OThours[0];
	cout<<"Enter the number of OT Hours for Day 2:";
	cin>>e.OThours[1];
	cout<<"Enter the number of OT Hours for Day 3:";
	cin>>e.OThours[2];
	cout<<"Enter the number of OT Hours for Day 4:";
	cin>>e.OThours[3];
	cout<<"Enter the number of OT Hours for Day 5:";
	cin>>e.OThours[4];
	
	return e;
}
float calOTpayment(float OTFee,int OThours[],int size){
	   
   int totalOThours=0;

	for(int i=0;i<size;i++)
	{
		totalOThours+=OThours[i];
	}
	
	float OTPay=totalOThours*OTFee;
	cout<<"Total Over Time Payment: "<<OTPay<<endl;
	return OTPay;
}
int main()
{
	Employee Emp;
    Emp=getEmp(Emp);
    float TotalPay=calOTpayment(Emp.OTFee,Emp.OThours,5);
    float* OTFeepointers=&Emp.OTFee;
    *OTFeepointers=600.00;
    cout<<"The new Over-time Fee is :"<<*OTFeepointers<<endl;
    
    
    return 0;
}

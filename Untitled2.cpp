#include<iostream>
#include<cstring>
using namespace std;
class Employee
{
	private:
		int EmpID;
		char Empname[30];
		int YearJoined;
		int Status
		float BasicSalary;
	public:
		Employee(int eID,char EmName[],int YrJoin,int sta,flot Bsal)
		{
			EmpID=eID;
			strcpy(Empname,EmName);
			YearJoined=YrJoin;
			status=sta;
			BasicSalary=Bsal;
		}
	bool changeStatus(int sta)
	{
			if(sta==0)
			{
				status=1;
				return true;
			}
			else
			{
				return false;
			}
    }
	float calculateBonus()
	{
		float bonus;
		int workingExperi;
		workingExperi=2022-YearJoined;
		if(workingExperi>3)
		{
			bonus=BasicSalary;
		}
		return bonus;
	}	
	void printDetails()
	{
		cout<<"Name : "<<Empname<<endl;
		cout<<"EmpID : "<<EmpID<<endl;
		cout<<"Year Joined : "<<YearJoined<<endl;
		if(status==1)
		{
			cout<<"Status : Permenet"<<endl;
		}
		else if(status==0)
		{
			cout<<"Status : Temporary"<<endl;
		}
		cout<<"Bonus Amount : "<<calculateBonus()<<endl;
		cout<<"Total : "<<BasicSalary+calculateBonus()<<endl;
	}
};

int main()
{
	cout<<"------------------Emp 01-------------------------"<<enfdl;
	Employee Emp1(3555,"Kumara A.S",2000,1,34000.00);
	Emp1.changeStatus(1);
	Emp1.calculateBonus();
	Emp1.printDetails();
	cout<<"------------------Emp 02-------------------------"<<enfdl;
	Employee Emp2(4323,"perea t.k",2012,0,250000.00);
	Emp2.changeStatus(0);
	Emp2.calculateBonus();
	Emp2.printDetails();
	return 0;

/*User
Write a C++ program to request the user to enter a number and print a pattern as follows:
Question 02:
Write a C++ to read a number from the user and check whether that number is niven number
or not.
Hint: A Niven number is that a number which is divisible by its sum of digits.
Refer to an example given below.

Sample Output:
Enter number: 3
Output:
1
3 3
5 5 5*/

#include<iostream>
using namespace std;

int main(){
	int num;
	cout<<"Enter the Number:";
	cin>>num;
	
	for(int i=1;i<=num;i++)
	{
		for(int j=1;j<=i;j++)
		{
			
			cout<<2*i-1<<" ";
			
		}
		
		cout<<endl;
	}
	return 0;
}

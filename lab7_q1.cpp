//Include all necessary libraries
#include<iostream>
using namespace std;
//Write a C++ program to find power of any number using recursion.

int powerNum(int a, int b)
{
	
	if (b==0)
		return 1;	//Termination
	else 
		return a*powerNum(a,b-1);
}

int main(){

	int a,b,c;
	//Ask the user to give the base and exponent to perform the required operation
	
	cout<<"Please enter the base:"<<endl;
	cin>>a;
	cout<<"Please enter the power:"<<endl;
	cin>>b;
	//Performing the required operation
	c=powerNum(a,b);
	cout<<"Your answer is"<<c<<endl;

	return 0;
}

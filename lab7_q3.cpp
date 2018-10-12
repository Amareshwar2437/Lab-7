//Include all necessary libraries
#include<iostream>
using namespace std;

//3. Write a C++ program to print all even or odd numbers in given range using recursion.

int evenNums(int a)
{
	//Now put the conditions for terminating recursion or put recursion
	//Defining the condition

	if (a==0)
		return 0;	//Terminating the recursion
	else {
		cout<<a<<endl;	//Or the recursion
	return evenNums(a-2);
	     }
}

int main(){

	int a;
	cout<<"Enter the last even number upto which u want to print:"<<endl;
	cin>>a;
	cout<<"The required numbers are"<<endl;
	evenNums(a);
	cout<<endl;

	return 0;
}

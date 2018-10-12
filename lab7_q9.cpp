//Include all necessary libraries
#include<iostream>
using namespace std;

//9.Write a C++ program to find factorial of any number using recursion.

int factorial(int n){

	//Now put the conditions for terminating recursion or put recursion
	//Defining the condition
	if(n==0)	//Termination of Recursion
		return 1;
	else {		//Use of Recursion
		return n*factorial(n-1);
	     }
}

int main(){

	int n,fac;
	cout<<"Please enter the number whose factorial u want to find:"<<endl;
	cin>>n;
	fac= factorial(n);
	cout<<"The factorial of the given no. is"<<fac<<endl;
	
	return 0;
}
	

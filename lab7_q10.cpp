//Include all necessary libraries
#include<iostream>
using namespace std;

//10.Write a C++ program to generate nth Fibonacci term using recursion.

int fibonacci(int n){
	
	//Now put the conditions for terminating recursion or put recursion
	//Defining the condition

	if (n==1)	//Termination Of Recursion
		return 0;
	else if (n==2)	//Termiantion of Recursion
		return 1;
	else {		//Use of Recursion
		return fibonacci(n-1)+fibonacci(n-2);
	     }
}

int main(){
	
	int n,a;
	cout<<"Enter a desired term of Fibonacci Series:"<<endl;
	cin>>n;
	a=fibonacci(n);
	cout<<"The desired term of the Fibonacci Series is"<<a<<endl;
	
	return 0;
}

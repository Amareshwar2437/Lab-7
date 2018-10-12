//Include all necessary libraries
#include<iostream>
using namespace std;

//8. Write a C++ program to find sum of digits of a given number using recursion.

int digitsum(int n){

	//Now put the conditions for terminating recursion or put recursion
	//Defining the condition
	
	if (n==0)	//Termination of Recursion
		return 0;
	else {		//Use of Recursion
		return(n%10)+digitsum(n/10);
	      }
	
}

int main(){
	
	int n,i;
	cout<<"Please enter the desired number:"<<endl;
	cin>>n;
	i=digitsum(n);
	cout<<"The sum of digits of the desired number is"<<i<<endl;

	return 0;
}

	

//Include all necessary libraries
#include<iostream>
using namespace std;

//5.Write a C++ program to find sum of all even or odd numbers in given range using recursion.

int evenNumSum(int n){

	//Now put the conditions for terminating recursion or put recursion
	//Defining the condition

	if (n<=1)	//Termination of Recursion
		return 0;
	else {		
		return n+evenNumSum(n-2);	//Use of Recursion
	     }
}

int main(){

	int i,n;
	cout<<"Please enter the number upto which u want to find the sum of all even numbers:"<<endl;
	cin>>n;
	i=evenNumSum(n);
	cout<<"The sum of all even natural numbers between the numbers 1 and n is:"<<i<<endl;
	
	return 0;
}
 
	

//Include all necessary libraries
#include<iostream>
using namespace std;

//4.Write a C++ program to find sum of all natural numbers between 1 to n using recursion.

int natNumSum(int a, int b){

	//Now put the conditions for terminating recursion or put recursion
	//Defining the condition
	
	if (a==b)		//Termination of Recursion
		return 0;

	else {
		a++;
		return a+natNumSum(a,b);
	     }
}

int main(){

	int n,sum;
	cout<<"Enter the last number upto which u want to find sum of all natural numbers lying in between:"<<endl;
	cin>>n;
	sum=natNumSum(1,n);
	cout<<"Sum of all natural numbers between 1 to" << n <<"is" << sum <<endl;

	return 0;
}
	
	

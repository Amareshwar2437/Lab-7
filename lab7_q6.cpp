//Include all necessary libraries
#include<iostream>
using namespace std;

//6.Write a C++ program to find reverse of any number using recursion.

int revNum(int n){

	//Now put the conditions for terminating recursion or put recursion
	//Defining the condition

	if (n==0)	//Termination of Recursion
		return 0;
	else {
	cout<<n%10;	//Use of Recursion
		return revNum(n/10);
	     }
}

int main(){

	int n;
	cout<<"Please enter a number:"<<endl;
	cin>>n;
	revNum(n);
	cout<<"This is the reverse of the given number."<<endl;
	
	return 1;
}

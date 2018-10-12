//Include all necessary libraries
#include<iostream>
using namespace std;

//11.Write a C++ program to find GCD (HCF) of two numbers using recursion.

int HCF(int x, int y){

	//Now put the conditions for terminating recursion or put recursion
	//Defining the condition

	if(y==0)	//Termination of Recursion
		return x;
	else {		//Use of Recursion
		return HCF(y, x%y);
	     }
}	
int main(){
	
	int a,b,c;
	cout<<"Please enter the two numbers whose HCF is to be calculated:"<<endl;
	cin>>a;
	cin>>b;
	c=HCF(a,b);
	cout<<"The HCF of the two numbers is"<<c<<endl;
	
	return 0;
}

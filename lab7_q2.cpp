//Include all necessary libraries
#include<iostream>
using namespace std;
//2.Write a C++ program to print all natural numbers between 1 to n using recursion.

int nums(int a){

//Now put the conditions for terminating recursion or put recursion
//Defining the condition

	if (a==0)
		return 0;
	else {
		cout<<a<<endl;
	return nums(a-1);
	     }
}
int main(){
		int a;
	//Now executing the main function
		cout<<"Please enter the required no. upto which u want to print:"<<endl;
		cin>>a;
		cout<<"The numbers are"<<nums(a)<<endl;
	return 0;
}
		

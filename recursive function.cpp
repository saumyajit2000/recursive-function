#include<iostream>
using namespace std;

int factorial(int n);

void display(int n)
{
	cout<<"Factorial of"<<n<<"="<<factorial(n);
}

int main()
{
	int n;
	
	cout<<"Have a succesful end in this project\n\n";
	
	cout<<"Enter a positive integer to find the factorial";
	cin>>n;
	
	display(n);
	return 0;
}

int factorial(int n)
{
	if(n>1)
	return n*factorial(n-1);
	else
	return 1;
}

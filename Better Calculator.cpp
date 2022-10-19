#include <iostream>
using namespace std;
int main()
{
	int num1,num2;
	char op;
	bool loop = 1;
	while(loop)
	{
		cout<<"Enter the first number: ";
		cin>>num1;
		cout<<"Enter the second number: ";
		cin>>num2;
		cout<<"Enter the operation: ";
		cin>>op;
		if(op == '+')
		cout<<num1<<op<<num2<<" = "<<num1 + num2;
		else
		if(op == '-')
		cout<<num1<<op<<num2<<" = "<<num1 - num2;
		else
		if(op == '*')
		cout<<num1<<op<<num2<<" = "<<num1 * num2;
		else
		if(op == '/' && num2 != 0)
		cout<<num1<<op<<num2<<" = "<<num1/num2;
		else
		if(num2 == 0)
		cout<<"You cannot divide any number by zero.";
		else
		if(op == '%')
		cout<<num1<<op<<num2<<" = "<<num1%num2;
		else
		cout<<"Wrong input"<<endl;
		loop = 0;
	}
}

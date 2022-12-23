#include <iostream>
#include <cmath>
using namespace std;

float add(float num1, float num2);
float dif(float num1, float num2);
float pro(float num1, float num2);
float div(float num1, float num2);
int rem(int num1, int num2);
int log(int num);
int sqrt(int num);


int main()
{
	float num1, num2, num;
	char op;
	cout<<"Enter the operator. "<<endl
	<<"Enter l for log and s for square root: ";
	cin>>op;
	cout<<"The first number brings log and square root."<<endl
	<<"The other two numbers bring normal operations."<<endl
	<<"Enter the operator: "<<endl;
	cin>>num;
	cin>>num1>>num2;
	float sum = add(num1, num2);
	float sub = dif(num1, num2);
	float mul = pro(num1, num2);
	float quotient = div(num1, num2);
	int remain = rem(num1, num2);
	float logarithm = log(num);
	float square = sqrt(num);
	
	switch(op)
	{
		case '+':
			cout<<sum<<endl;
			break;
		case '-':
			cout<<sub<<endl;
			break;
		case '*':
			cout<<mul<<endl;
			break;
		case '/':
			cout<<quotient<<endl;
			break;
		case '%':
			cout<<remain<<endl;
			break;
		case 'l':
			cout<<logarithm<<endl;
			break;
		case 's':
			cout<<square<<endl;
			break;
		default:
			cout<<"Invalid Choice";
			break;
	}
	
}


float add(float num1, float num2)
{
	return num1 + num2;
}
float dif(float num1, float num2)
{
	return num1 - num2;
}
float pro(float num1, float num2)
{
	return num1 * num2;
}
float div(float num1, float num2)
{
	return num1 / num2;
}
int rem(int num1, int num2)
{
	return num1 % num2;
}
int log(int num)
{
	return log(num);
}
int sqrt(int num)
{
	return sqrt(num);
}


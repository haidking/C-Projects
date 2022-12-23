#include <iostream>
#include <math.h>
using namespace std;

float add(float num1, float num2);
float dif(float num1, float num2);
float pro(float num1, float num2);
float div(float num1, float num2);
int rem(int num1, int num2);
float log(float num1);
float sqrt(float num1);


int main()
{
	float num1, num2, num;
	char op;
	float sum = add(num1, num2);
	float sub = dif(num1, num2);
	float mul = pro(num1, num2);
	float quotient = div(num1, num2);
	int remain = rem(num1, num2);
	cout<<sum;
	cout<<sub;
	cout<<mul;
	cout<<quotient;
	cout<<remain;
	float logarithm = log(num1);
	float square_root = sqrt(num1);	
	cout<<logarithm;
	cout<<square_root;
	
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
float log(float num1)
{
	return log(num1);
}
float sqrt(float num1)
{
	return sqrt(num1);
}


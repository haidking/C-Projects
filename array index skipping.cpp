#include <iostream>
using namespace std;
int main()
{
	int choice;
	cout<<"Input integers: "<<endl;
	int arr[12];
	for(int i =0;i<=11;i++)
	{
		if(i==3 || i==5)
		continue;
		else
		cin>>arr[i];
	}
	
	cout<<"Elements in reverse order are: "<<endl;
	for(int i=11;i>=0;i--)
	{
		if(i==5||i==3)
		continue;
		else
		cout<<arr[i]<<endl;
	}
	
	cout<<"Choose an index: "<<endl;
	cin>>choice;
	cout<<arr[choice];
}

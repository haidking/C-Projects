#include <iostream>
using namespace std;
int main()
{
	int i =1;
	while(i<=10)
	{
		do
		{
			if(i !=5)
			{
				for(int j =1 ; j<=3; j++)
				{
					cout<<i *i;
				}
				cout<<endl;
			}
			i++;
			continue;
		}while(i<=10);
	}
}

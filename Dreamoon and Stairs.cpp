#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	int m,n,minimal,min,stair;
	cin>>n>>m;
	if(n%2==0)
		min = minimal = n/2;
	else
		min = minimal = (n/2)+1;

	while(minimal>=0)
	{
		if(min%m==0)
		{
			cout<<min<<endl;
			break;
		}
		else
		{
			minimal--;
			stair = minimal*2;
			min = minimal+(n-stair);
		}
	}
	if(minimal<0)
		cout<<"-1"<<endl;

	//getch();
	return 0;
}
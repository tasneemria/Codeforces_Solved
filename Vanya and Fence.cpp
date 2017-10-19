#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	int n,h;
	cin>>n>>h;
	int height,count=0;
	for(int i=0;i<n;i++)
	{
		cin>>height;
		if(height<=h)
			count++;
		else
			count+=2;
	}
	cout<<count;

	//getch();
	return 0;
}
#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	int i,m,k,mis=0,chris=0;
	cin>>i;
	for(int j=0;j<i;j++)
	{
		cin>>m>>k;
		if(m>k)
			mis++;
		else if(m<k)
			chris++;
		else if(m==k)
		{
			mis++;
			chris++;
		}
	}
	if(mis>chris)
		cout<<"Mishka"<<endl;
	else if(mis<chris)
		cout<<"Chris"<<endl;
	else if(mis==chris)
		cout<<"Friendship is magic!^^";
	//getch();
	return 0;
}
#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	int n,t,i;
	char *ch;
	cin>>n>>t;
	ch = new char[n+1];
	cin>>ch;
	while(t)
	{
		for(i=0;i<n;)
		{
			if(ch[i]=='B' && ch[i+1]=='G')
			{
				ch[i] = 'G';
				ch[i+1] = 'B';
				i = i+2;
			}
			else
				i++;
		}
		t--;
	}
	cout<<ch<<endl;

	//getch();
	return 0;
}
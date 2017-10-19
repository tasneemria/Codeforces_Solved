#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	int n1,n2;
	char ch1,ch2;
	int count=0;
	cin>>ch1>>n1>>ch2>>n2;

	if(ch1==ch2 && n1==n2)
		cout<<"0"<<endl;
	else if(ch1==ch2)
	{
		if(n1>n2)
		{
			count = n1-n2;
			cout<<count<<endl;
			for(int i=1;i<=count;i++)
				cout<<"D"<<endl;
		}
		else if(n1<n2)
		{
			count = n2-n1;
			cout<<count<<endl;
			for(int i=1;i<=count;i++)
				cout<<"U"<<endl;
		}
	}
	else if(n1==n2)
	{
		if(ch1>ch2)
		{
			count = ch1-ch2;
			cout<<count<<endl;
			for(int i=1;i<=count;i++)
				cout<<"L"<<endl;
		}
		else if(ch1<ch2)
		{
			count = ch2-ch1;
			cout<<count<<endl;
			for(int i=1;i<=count;i++)
				cout<<"R"<<endl;
		}
	}
	else if(n2>n1 && ch2>ch1)
	{
		count = n2-n1;
		int temp = ch2-ch1;
		if(temp<=count)
		{
			cout<<count<<endl;
			for(int i=1;i<=temp;i++)
				cout<<"RU"<<endl;
			for(int i=1;i<=count-temp;i++)
				cout<<"U"<<endl;
		}
		else if(temp>count)
		{
			cout<<temp<<endl;
			for(int i=1;i<=count;i++)
				cout<<"RU"<<endl;
			for(int i=1;i<=temp-count;i++)
				cout<<"R"<<endl;
		}
	}
	else if(n2>n1 && ch2<ch1)
	{
		count = n2-n1;
		int temp = ch1-ch2;
		if(temp<=count)
		{
			cout<<count<<endl;
			for(int i=1;i<=temp;i++)
				cout<<"LU"<<endl;
			for(int i=1;i<=count-temp;i++)
				cout<<"U"<<endl;
		}
		else if(temp>count)
		{
			cout<<temp<<endl;
			for(int i=1;i<=count;i++)
				cout<<"LU"<<endl;
			for(int i=1;i<=temp-count;i++)
				cout<<"L"<<endl;
		}
	}
	else if(n2<n1 && ch2<ch1)
	{
		count = n1-n2;
		int temp = ch1-ch2;
		if(temp<=count)
		{
			cout<<count<<endl;
			for(int i=1;i<=temp;i++)
				cout<<"LD"<<endl;
			for(int i=1;i<=count-temp;i++)
				cout<<"D"<<endl;
		}
		else if(temp>count)
		{
			cout<<temp<<endl;
			for(int i=1;i<=count;i++)
				cout<<"LD"<<endl;
			for(int i=1;i<=temp-count;i++)
				cout<<"L"<<endl;
		}
	}
	else if(n2<n1 && ch2>ch1)
	{
		count = n1-n2;
		int temp = ch2-ch1;
		if(temp<=count)
		{
			cout<<count<<endl;
			for(int i=1;i<=temp;i++)
				cout<<"RD"<<endl;
			for(int i=1;i<=count-temp;i++)
				cout<<"D"<<endl;
		}
		else if(temp>count)
		{
			cout<<temp<<endl;
			for(int i=1;i<=count;i++)
				cout<<"RD"<<endl;
			for(int i=1;i<=temp-count;i++)
				cout<<"R"<<endl;
		}
	}
	//getch();
	return 0;
}
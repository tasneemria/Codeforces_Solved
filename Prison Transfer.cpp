#include<iostream>
#include<conio.h>

using namespace std;

class stack
{
public:
	int *arr;
//	int size;
	int tos;
	int pop();
	void push(int n);

	stack(int s)
	{
		arr = new int[s];
		tos = 0;
	}
};

void stack::push(int n)
{
	arr[tos] = n;
	tos++;
}

int stack::pop()
{
	return arr[--tos];
}

int main()
{
	int n,t,c,count=0;
	int i,j;
	int inp;
	int num;
	cin>>n>>t>>c;
	stack st(n);
	for(int k=0;k<n;k++)
	{
		cin>>num;
		st.push(num);
	}
	
	int popp;
	int fl = 0;
	for(i=n-1;i>=c-1;)
	{
		popp = st.pop();
		//cout<<"pop "<<popp<<endl;
		if(popp>t)
		{
			i--;
			continue;
		}
		else
		{
			for(j=i-1;j>i-c;j--)
			{
				if(st.arr[j]>t)
				{
					for(int del=i-1;del>i-c;del--)
					{
						st.pop();
					}
					i = i-c;
					break;
				}
			}
			if(j==i-c)
			{
				count++;
				//cout<<"j count "<<j<<" "<<count;
				i = i-1;
				
			}
			//cout<<"i "<<i<<endl;
		}
	}

	cout<<count<<endl;

	//getch();
	return 0;
}


/*
11 4 2
2 2 0 7 3 2 2 4 9 1 4
*/



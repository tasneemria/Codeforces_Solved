#include<iostream>
#include<conio.h>
#include<cstdlib>

using namespace std;

int main()
{
	int n;
	cin>>n;
	int **arr=NULL;
	arr = (int**)malloc(n*sizeof(int*));
	int i,j,point=0,condition=0;
	for(i=0;i<n;i++)
	{
		*(arr+i) = (int*)malloc(2*sizeof(int));
		cin>>arr[i][0]>>arr[i][1];
	}

	for(i=0;i<n;i++)
	{
		//condition = 0;
		int n1=0,n2=0,n3=0,n4=0;
		for(j=0;j<n;j++)
		{
			if(j==i)
				continue;
			if(arr[j][0]>arr[i][0] && arr[j][1]==arr[i][1])
				n1 = 1;
			else if(arr[j][0]<arr[i][0] && arr[j][1]==arr[i][1])
				n2 = 1;
			else if(arr[j][0]==arr[i][0] && arr[j][1]<arr[i][1])
				n3 = 1;
			else if(arr[j][0]==arr[i][0] && arr[j][1]>arr[i][1])
				n4 = 1;
			if(n1==1 && n2==1 && n3==1 && n4==1)
			{
				point++;
				break;
			}
		}
	}

	cout<<point<<endl;


	//getch();
	return 0;
}
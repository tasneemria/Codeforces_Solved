#include<iostream>
#include<conio.h>
#include<math.h>

using namespace std;

int main() 
{
	int n,k,initial=2,plus;
	cin>>n;
	for(k=1;k<=n;k++)
	{
		plus = ((k*(k+1))*(k*(k+1))-initial)/k;
		cout<<plus<<endl;
		initial = (k*(k+1))*(k*(k+1)) - (k*plus);
	}

	getch();
	return 0;
}
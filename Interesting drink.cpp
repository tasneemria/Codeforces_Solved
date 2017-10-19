#include<iostream>
#include<conio.h>
#include<algorithm>

using namespace std;

int main()
{
	int n,x[100001],q,qArr[100001];
	cin>>n;
	for(int i=1;i<=n;i++)
	{
        cin>>x[i];
	}
	sort(x+1,x+n+1);


	cin>>q;
	for(int i=0;i<q;i++)
    {
        cin>>qArr[i];
    }

    int f=1,l=n,mid;

    for(int i=0;i<q;i++)
    {
        f = 1;
        l = n;
        if(qArr[i]<x[1])
        {
            cout<<0<<endl;
        }
        else if(qArr[i]>=x[n])
        {
            cout<<n<<endl;
        }
        else
        {
            while(f!=l)
            {
                mid = (f+l)/2;
                if(qArr[i]>x[mid])
                {
                    f = mid+1;
                }
                else
                {
                    l = mid;
                }
                if(f>l)
                {
                    l = f;
                    break;
                }
            }

            if(qArr[i]==x[l])
            {
           //     cout<<"equal condition ";
                cout<<l<<endl;
            }

            else if(qArr[i]<x[l])
            {
             //   cout<<"less than ";
                cout<<l-1<<endl;
            }
        }
    }

	//getch();
	return 0;
}

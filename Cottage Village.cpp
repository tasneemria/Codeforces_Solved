#include<iostream>

using namespace std;

void MinHeapify(double A[][2],int i,int n)
{
	int smallest,temp,temp1;
	int l,r;
	l = 2*i;
	r = l+1;

	if(l<=n && A[l][0]<A[i][0])
	{
		smallest = l;
	}
	else
	{
		smallest = i;
	}
	if(r<=n && A[r][0]<A[smallest][0])
	{
		smallest = r;
	}
	if(smallest!=i)
	{
		temp = A[i][0];
		A[i][0] = A[smallest][0];
		A[smallest][0] = temp;
		temp1 = A[i][1];
		A[i][1] = A[smallest][1];
		A[smallest][1] = temp1;
		MinHeapify(A,smallest,n);
	}
}

void BuildMinHeap(double a[][2],int n)
{
	int i;
	for(i=n/2;i>=1;i--)
		MinHeapify(a,i,n);
}
//sorting in decreasing order
void HeapSort(double a[][2],int n)
{
	BuildMinHeap(a,n);
	int i,temp,temp1;
	for(i=n;i>=2;i--)
	{
		temp = a[1][0];
		a[1][0] = a[i][0];
		a[i][0] = temp;
		temp1 = a[1][1];
		a[1][1] = a[i][1];
		a[i][1] = temp1;
		n = n-1;
		MinHeapify(a,1,n);
	}
}

int main()
{
    int n;
    double t;
    cin>>n>>t;
    double arr[n][2];
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i][0]>>arr[i][1];
    }

    HeapSort(arr,n);
//    for(int i=1;i<=n;i++)
//    {
//        cout<<arr[i][0]<<" "<<arr[i][1]<<endl;
//    }
    double diff,div1,div2,total=0;

    for(int i=1;i<n;i++)
    {
        div1 = arr[i][0]-((arr[i][1])/2);
        div2 = arr[i+1][0]+((arr[i+1][1])/2);
        diff = div1-div2;
        //cout<<diff<<endl;
        if(diff>t)
        {
            total = total+2;
        }
        else if(diff==t)
        {
            total = total+1;
        }
    }

    cout<<total+2;


    return 0;
}

/*
4 1

-12 1

-14 1

4 1

-11 1
*/

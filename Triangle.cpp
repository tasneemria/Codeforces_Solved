#include<iostream>

using namespace std;

void maxHeapify(int *a,int i,int size)
{
	int l,r,largest;
	l = 2*i;
	r = l+1;
	if(l<=size && a[l]>a[i])
	{
		largest = l;
	}
	else
	{
		largest = i;
	}
	if(r<=size && a[r]>a[largest])
	{
		largest = r;
	}
	if(largest != i)
	{
		int temp = a[i];
		a[i] = a[largest];
		a[largest] = temp;
		maxHeapify(a,largest,size);
	}
}


void buildMaxheap(int *a, int n)
{
    int i;
    for(i = n/2; i >= 1; i--)
    {
        maxHeapify(a, i, n);
    }
}

void heapsort(int *a, int n)
{
	buildMaxheap(a,n);
    int i, temp;
    for (i = n; i >= 2; i--)
    {
        temp = a[i];
        a[i] = a[1];
        a[1] = temp;
        maxHeapify(a, 1, i - 1);
    }
}

int main()
{
    int arr[5];
    cin>>arr[1]>>arr[2]>>arr[3]>>arr[4];

    heapsort(arr,5);
    if((arr[2]+arr[3])>arr[4])
        cout<<"TRIANGLE"<<endl;
    else if((arr[1]+arr[2])>arr[3])
        cout<<"TRIANGLE"<<endl;
    else if((arr[2]+arr[3])==arr[4])
        cout<<"SEGMENT"<<endl;
    else if((arr[1]+arr[2])==arr[3])
        cout<<"SEGMENT"<<endl;
    else
        cout<<"IMPOSSIBLE"<<endl;


    return 0;
}













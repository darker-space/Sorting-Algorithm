
#include<iostream>

using namespace std;

void heapify(int A[],int i,int n)
{
    int p=i;
    int l=2*i+1;
    int r=2*i+2;
    if(l<n&&A[l]>A[p])
        p=l;
    if(r<n&&A[r]>A[p])
        p=r;

    if(p!=i)
    {
        swap(A[i],A[p]);
        heapify(A,p,n);
    }
}

void heapsort(int A[],int start,int n)
{
    for(int i=n/2-1;i>=0;i--)
        heapify(A,i,n);

   for(int i=0;i<n;i++)
    cout<<A[i]<<" ";
    cout<<endl;
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        swap(A[0],A[n-1-i]);
        for(int j=0;j<n;j++)
    cout<<A[j]<<" ";
    cout<<endl;
        heapify(A,0,n-i-1);
    }
}

int main()
{
    int n;
    cout<<"Array size\n";

    cin>>n;
    int A[n];
    for(int i=0;i<n;i++)
        cin>>A[i];
    heapsort(A,0,n);
    cout<<"Final aaray is\n";
    for(int i=0;i<n;i++)
    cout<<A[i]<<" ";
    cout<<endl;

    return 0;
}

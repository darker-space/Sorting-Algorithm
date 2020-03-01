#include<iostream>

using namespace std;

void Merge(int A[],int lo,int mid,int hi)
{
    int s1=mid-lo+1,s2=hi-mid;
   int a[s1],b[s2];
   for(int i=lo;i<=mid;i++)
    a[i-lo]=A[i];
    for(int i=mid+1;i<=hi;i++)
    b[i-mid-1]=A[i];

    int i=0,j=0,k=lo;
    while(i<s1&&j<s2)
    {
        if(a[i]<b[j])
         A[k++]=a[i++];
         else
            A[k++]=b[j++];
    }
    while(i<s1)
    A[k++]=a[i++];
    while(j<s2)
    A[k++]=b[j++];
    return;

}

void Mergesort(int A[],int lo,int hi)
{
    if(lo>=hi)
        return;
   int mid=(lo+hi)/2;
   Mergesort(A,lo,mid);
   Mergesort(A,mid+1,hi);
   Merge(A,lo,mid,hi);

}

int main()
{
    int n;
    cout<<"Array size\n";

    cin>>n;
    int A[n];
    for(int i=0;i<n;i++)
        cin>>A[i];
    Mergesort(A,0,n-1);
    cout<<"Final aaray is\n";
    for(int i=0;i<n;i++)
    cout<<A[i]<<" ";
    cout<<endl;

    return 0;
}

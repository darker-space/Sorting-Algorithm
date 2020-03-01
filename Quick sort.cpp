#include<iostream>

using namespace std;

int Prtition(int A[],int lo,int hi)
{
    int pivot=hi;
    int pindex=lo;
    for(int i=lo;i<hi;i++)
    {
        if(A[i]<A[pivot])
           {
               swap(A[i],A[pindex]);
                pindex++;
           }
    }
    swap(A[pivot],A[pindex]);
    return pindex;
}

void Quicksort(int A[],int lo,int hi)
{
    if(lo>=hi)
        return;

  int prtition=Prtition(A,lo,hi);
  Quicksort(A,lo,prtition-1);
  Quicksort(A,prtition+1,hi);
}

int main()
{
    int n;
    cout<<"Array size\n";

    cin>>n;
    int A[n];
    for(int i=0;i<n;i++)
        cin>>A[i];
    Quicksort(A,0,n-1);
    cout<<"Final aaray is\n";
    for(int i=0;i<n;i++)
    cout<<A[i]<<" ";
    cout<<endl;

    return 0;
}

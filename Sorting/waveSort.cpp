// Wave sort
// A[0]>=A[1]<=A[2].....
#include<bits/stdc++.h>
using namespace std;

void waveSort(int arr[],int n)
{
    for(int i=1;i<n;i+=2)
    {
        if(arr[i]>arr[i-1])
            swap(arr[i],arr[i-1]);
        if(arr[i]>arr[i+1]  && i<=n-2)
            swap(arr[i],arr[i+1]);    
    }
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    waveSort(arr,n);
    for(auto i:arr)
        cout<<i<<" ";    
    return 0;
}
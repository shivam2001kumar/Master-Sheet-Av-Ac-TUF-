// Count sort
#include<bits/stdc++.h>
using namespace std;

// 1. maintain the count of elements
// 2.prefix count array
/* traverse original array from back go to that index(element of original array ) decrement the element at that position in temp/count array and then go to index (this element) in newArray and place that index as its element */

void countSort(int arr[],int n)
{
    int mx=INT_MIN;
    for(int i=0;i<n;i++)
    {
        mx=max(mx,arr[i]);
    }
    int temp[mx+1]={0};
    for(int i=0;i<n;i++)
    {
        temp[arr[i]]++;
    }
    for(int i=1;i<=mx;i++)
    {
        temp[i]+=temp[i-1];
    }
    int newArr[n];
    for(int i=n-1;i>=0;i--)
    {
       temp[arr[i]]--;
       newArr[temp[arr[i]]]=arr[i];
    }
    for(int i=0;i<n;i++)
        cout<<newArr[i]<<" ";
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    countSort(arr,n);
    return 0;
}
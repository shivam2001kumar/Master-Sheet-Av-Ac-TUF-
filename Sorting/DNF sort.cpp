//Dutch National Algorithm
#include<bits/stdc++.h>
using namespace std;

void dnfSort(int arr[],int n)
{
    int l=0,m=0,h=n-1;
    while(m<=h)
    {
        if(arr[m]==0)
        {
             swap(arr[l],arr[m]);
             l++;m++;
        }
        else if(arr[m]==1)
            m++; 
        else
        {
            swap(arr[h],arr[m]);
            h--;
            m++;
        }    
    }
}
int main()
{
   int n;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++)
   {
       cin>>arr[i];
   }
   dnfSort(arr,n);
   for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
   return 0;
}
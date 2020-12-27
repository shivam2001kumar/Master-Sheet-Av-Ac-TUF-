//wap to perform selection sort
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    
    for(int i=0;i<n-1;i++)
    {
        int small=arr[i];
       int pos=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<small)
            {
                small=arr[j];
                pos=j;
            }
        }
        if(pos!=i)
        {
            swap(arr[i],arr[pos]);
        }
              
    }
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";    

    return 0;
}
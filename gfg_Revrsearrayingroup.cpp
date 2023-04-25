// Given an array arr[] of positive integers of size N. Reverse every sub-array group of size K.

// Note: If at any instance, there are no more subarrays of size greater than or equal to K, then reverse the last subarray (irrespective of its size).
// You shouldn't return any array, modify the given array in-place.


#include<bits/stdc++.h>
using namespace std;

void revrseofsubarray(int arr[], int n, int k)
 {
    int i;
     int h=k;
    for(i=0;i<n;i=i+k)
    {
    
        if(h>n)
        {
             for(int j=n;j>h-k;j--)
            {
                cout<<arr[j-1];       
            }   
        }
    
        else
            for(int j=h;j>h-k;j--)
            {
                cout<<arr[j-1];
            }
            // cout<<" ";

        h=h+k;
    }
 }
int main()
{
    int arr[]={1,2,3,4,5};
    int N=sizeof(arr)/sizeof(arr[1]);
    int k=3;

    revrseofsubarray(arr,N,k);

    return 0;
}



// class Solution{
// public:
//     //Function to reverse every sub-array group of size k.
//     void reverseInGroups(vector<long long>& arr, int n, int k){
//     //   int i;
//     //  int h=k;
//     for(int i=0;i<n;i=i+k)
//     {
    
//         if(i+k>n)
//         {
//             reverse(arr.begin()+i,arr.end());
//         }
    
//         else
//            reverse(arr.begin()+i,arr.begin()+i+k);
//             // cout<<" ";
    
       
//     }
//      return;
//  }
       
// };
// Given an array arr of distinct elements of size N, the task is to rearrange 
// the elements of the array in a zig-zag fashion so that the converted array 
// should be in the below form: 

// arr[0] < arr[1]  > arr[2] < arr[3] > arr[4] < . . .arr[n-2] < arr[n-1] > arr[n]. 

// NOTE: If your transformation is correct, the output will be 1 else the output
// will be 0. 


class Solution {
  public:
    // Program for zig-zag conversion of array
      void swap(int arr[], int i)
        {
            int temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=arr[i];
        }
    void zigZag(int arr[], int n) {
        int flag=1;
        // code here
        for(int i=0;i<n-1;i++)
        {
          if(flag==1)
          {
              if(arr[i]>arr[i+1])
              {
            swap(arr,i);
              }
            flag=0;
          }   
          else
          {
              if(arr[i]<arr[i+1])
              {
                swap(arr,i);  
              }
              flag=1;
          }
            
        }
    }
};
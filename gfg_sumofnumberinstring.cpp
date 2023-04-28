// Given a string str containing alphanumeric characters. The task is to calculate the sum of all the 
// numbers present in the string.

// Your Task:
// The task is to complete the function findSum() which finds and returns the sum of numbers in the string.



class Solution
{
    public:
    //Function to calculate sum of all numbers present in a string.
    int findSum(string str)
    {
    	
    	// Your code here
    
        int n=str.size();
        int sum=0;
        int num=0;
        
        for(int i=0;i<n;i++){
            if(str[i]>='0'&& str[i]<='9'){
            num=num*10 + (str[i]-'0');
            }
            else{
                sum+=num;
                num=0;
            }
        }
        return num+sum;
    }
};

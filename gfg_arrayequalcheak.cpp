#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:

    //Function to check if two arrays are equal or not.
    bool check(vector<long> A, vector<long> B, int N) {
        //code here
        sort(A.begin(),A.end());
        sort(B.begin(),B.end());
        
        if(A==B){
            return true;
        }
        else
        return false;
    }
};
int main()
{
    
    int N=4;
    vector<long> A{10,18,15,39};
    vector<long> B{15,39,10,18};
    
    // A.push_back(10);
    // A.push_back(18);
    // A.push_back(15);
    // A.push_back(39);

    // B.push_back(15);
    // B.push_back(39);
    // B.push_back(10);
    // B.push_back(18);


    Solution ob;
    cout<<ob.check(A,B,N);
    
    return 0;
}



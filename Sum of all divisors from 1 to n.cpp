//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public:
    int evenlyDivides(int N){
        //The digits of the number
        int count= 0;
        int digit;
        int actual_num = N;
        while(N>0){
            digit = N%10;
        
        if(digit!= 0 && actual_num%digit == 0){
            count++;
        }
        N = int(N/10);
        }
        
        return count;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.evenlyDivides(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends

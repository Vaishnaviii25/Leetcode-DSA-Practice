//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int maxInstance(string s){
        unordered_map<char, int> frequency;
    
        for (char ch : s) {
            frequency[ch]++;
        }
    
        int minBalloons = min({frequency['b'], frequency['a'], frequency['n'],
                               frequency['l'] / 2, frequency['o'] / 2});
    
        return minBalloons;
    }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.maxInstance(s)<<endl;
    }
    return 0;
}
// } Driver Code Ends
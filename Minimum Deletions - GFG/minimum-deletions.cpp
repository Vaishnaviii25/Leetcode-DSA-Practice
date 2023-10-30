//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    int minimumNumberOfDeletions(string S) { 
        // code here
        int n = S.length();
        int dp[n][n];
        
        for(int i=0; i<n; i++) {
            for(int j=0; j<n; j++) {
                dp[i][j] = 0;
            }
        }
        
        for(int k=2; k<=n; k++) {
            for(int i=0; i<n-k+1; i++) {
                int j = i+k-1;
                if(S[i] == S[j]) {
                    dp[i][j] = dp[i+1][j-1];
                } else {
                    dp[i][j] = 1 + min(dp[i+1][j], dp[i][j-1]);
                }
            }
        }
        return dp[0][n-1];
    } 
};

//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--){
        string S;
        cin >> S;
        Solution obj;
        cout << obj.minimumNumberOfDeletions(S) << endl;
    }
    return 0;
}
// } Driver Code Ends
//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int isItPossible(string S, string T, int m, int n) {
        // code here
        if (n != m) return false;

        for (int i = 0, j = 0; i < n && j < m; ) {
            while (i < n && S[i] == '#') i++;
            while (j < m && T[j] == '#') j++;

            if (i == n && j == m) return true;

            if ((i == n) != (j == m)) return false;
    
            if (S[i] != T[j]) return false;
            if (S[i] == 'A' && i < j) return false; 
            if (S[i] == 'B' && i > j) return false; 
            i++;
            j++;
        }
    
        return true;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S, T;
        cin >> S >> T;
        int M = S.length(), N = T.length();
        Solution ob;
        cout << ob.isItPossible(S, T, M, N);
        cout << "\n";
    }
}
// } Driver Code Ends
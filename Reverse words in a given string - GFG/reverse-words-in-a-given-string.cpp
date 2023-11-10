//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    string reverseWords(string S) 
    { 
        // code here
        stringstream ss(S);
        string word;
        vector<string> words;

    while (getline(ss, word, '.')) {
        words.push_back(word);
    }

    string reversed;

    for (int i = words.size() - 1; i >= 0; i--) {
        reversed += words[i];
        if (i > 0) {
            reversed += ".";
        }
    }

    return reversed;
    } 
};

//{ Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
// } Driver Code Ends
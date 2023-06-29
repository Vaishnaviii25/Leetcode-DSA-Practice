class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans = {vector<int>()};
        
        for(int num : nums){
            // cout << "num: " << num << endl;
            int ans_size = ans.size();
            // for(vector<int>& subset : ans){
            for(int i = 0; i < ans_size; i++){
                vector<int> cur = ans[i];
                // cout << "subset size: " << cur.size() << endl;
                cur.push_back(num);
                ans.push_back(cur);
                // cout << "ans size: " << ans.size() << endl;
            }
        }
        
        return ans;
    }
};
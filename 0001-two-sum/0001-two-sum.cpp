class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map <int,int> m;
        vector <int> result;
        for (int i=0; i<nums.size(); i++) {
            if(m.find(nums[i]) == m.end())
                m[nums[i]] = i;
                if(m.find(target-nums[i]) != m.end() && i != m[target-nums[i]]) {
                    result.push_back(i);
                    result.push_back(m[target-nums[i]]);
                    break;
                }
        }
        return result ;        
    }
};
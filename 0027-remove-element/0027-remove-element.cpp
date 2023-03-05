class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int count = 0;
        for(const int num : nums) {
            if(num != val) {
                nums[count++] = num;
            }
        }
        return count;
    }
};
class Solution {
public:
vector<int> arrayRankTransform(vector<int>& arr) {
    vector<int> sorted_arr = arr;
    sort(sorted_arr.begin(), sorted_arr.end());

    unordered_map<int, int> ranks;
    int rank = 1;

    for (int i = 0; i < sorted_arr.size(); ++i) {
        if (i == 0 || sorted_arr[i] != sorted_arr[i - 1]) {
            ranks[sorted_arr[i]] = rank++;
        }
    }

    vector<int> result;
    for (int num : arr) {
        result.push_back(ranks[num]);
    }
    
    return result;
}

};
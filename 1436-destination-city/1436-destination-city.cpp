class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_set<string> set;
        for(int i = 0; i < paths.size(); i++) {
            set.insert(paths[i][1]);
        }

        for(int i = 0; i < paths.size(); i++) {
            set.erase(paths[i][0]);
        }

        return *set.begin();
    }
};
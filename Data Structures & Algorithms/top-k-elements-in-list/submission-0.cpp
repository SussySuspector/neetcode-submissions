class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> countNums;
        for (int num : nums){
            countNums[num]++;
        }
        vector<pair<int, int>> result;
        for (const auto& p : countNums){
            result.push_back({p.second, p.first});
        }
        sort(result.rbegin(), result.rend());
        vector<int> res;
        for (int i = 0; i < k; i++){
            res.push_back(result[i].second);
        }
        return res;
    }
};

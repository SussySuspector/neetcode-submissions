class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> numMap;
        for (int i = 0; i < nums.size(); i++){
            int compare = target - nums[i];
            if (numMap.count(compare)) return {numMap[compare], i};
            numMap[nums[i]] = i;
        }
        return {};
    }
};

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int, int> ans;
        vector<int> numMap;
        int n = nums.size();
        for (int num : nums){
            if (ans.count(num)){
                ans[num]++;
            }else{
                ans[num] = 1;
            }
        }
        for (const pair<int, int> num : ans){
            if (num.second > n/3){
                numMap.push_back(num.first);
            }           
        }
        return numMap;
    }
};
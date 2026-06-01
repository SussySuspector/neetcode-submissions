class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_set<int> res;
        for (int num : nums){
            if (res.count(num)){
                res.erase(num);
            }else{
                res.insert(num);
            }
        }
        return *res.begin();
    }
};

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(), strs.end());
        string begin = strs[0];
        string end = strs[strs.size() - 1];
        string ans = "";
        for (int i = 0; i < begin.size(); i++){
            if (begin[i] == end[i]){
                ans+= begin[i];
            }else{
                break;
            }
        }
        return ans;
    }
};
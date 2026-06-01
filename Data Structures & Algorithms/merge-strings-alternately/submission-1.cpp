class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans;
        int count_word1 = 0;
        int count_word2 = 0;
        int word1_max = word1.size();
        int word2_max = word2.size();
        while (count_word1 < word1_max && count_word2 < word2_max){
            ans += word1[count_word1];
            ans += word2[count_word2];
            count_word1++;
            count_word2++;
        }
        while (count_word1 < word1_max){
            ans += word1[count_word1];
            count_word1++;
        }
        while (count_word2 < word2_max){
            ans += word2[count_word2];
            count_word2++;
        }
        return ans;
    }
};
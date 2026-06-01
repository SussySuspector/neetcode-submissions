class Solution {
public:
    bool validPalindrome(string s) {
        int left = 0;
        int right = s.size() - 1;
        while (left < right){
            if (s[left] != s[right]){
                return (isPalindrome(s.substr(0, left) + s.substr(left + 1)) || isPalindrome(s.substr(0, right) + s.substr(right + 1)));
            }
            left++;
            right--;
        }
        return true;
    }
private:
    bool isPalindrome(string s){
        int left = 0;
        int right = s.size() - 1;
        while (left < right){
            if (s[left] != s[right]){
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};
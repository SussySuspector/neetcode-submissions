class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> st;
        for (const string op : operations){
            if (op == "+"){
                int a = st[st.size() - 1];
                int b = st[st.size() - 2];
                st.push_back(a + b);
            }
            else if (op == "C"){
                st.pop_back();
            }else if (op == "D"){
                st.push_back(st[st.size() - 1] * 2);
            }else{
                st.push_back(stoi(op));
            }
        }
        int res = 0;
        for (int i : st){
            res += i;
        }
        return res;
    }
};
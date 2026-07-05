class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix = ""; bool flag = true;
        for (int i=0; i<strs[0].length(); i++){
            for (int j=1; j<strs.size(); j++){
                if (strs[j].length() <= i || strs[0][i] != strs[j][i]){
                    flag = false;
                    break;
                }
            }
            if (flag == false) break;
            prefix += strs[0][i];
        }
        return prefix;
    }
};
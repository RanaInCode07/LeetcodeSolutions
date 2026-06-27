class Solution {
public:
    int romanToInt(string s) {
        map<char, int> romanToInt = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000},
        };
        int x=0;

        for (int i=s.length()-1; i >= 0; i--){
            if (romanToInt[s[i]] < romanToInt[s[i+1]]){
                x -= romanToInt[s[i]];
            }
            else{
                x += romanToInt[s[i]];
            }
        }
        return x;
    }
};
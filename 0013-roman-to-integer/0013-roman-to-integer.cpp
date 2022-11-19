class Solution {
public:
    int romanToInt(string s) {
        int num=0;
        unordered_map<char,int> rom = {
            {'I',1},
            {'V',5},
            {'X',10},
            {'L',50},
            {'C',100},
            {'D',500},
            {'M',1000}
        };
        for(int i=0;i<s.length();i++)
        {
            if(rom[s[i]]<rom[s[i+1]])
                num-=rom[s[i]];
            else
                num+=rom[s[i]];
        }
        return num;
    }
};
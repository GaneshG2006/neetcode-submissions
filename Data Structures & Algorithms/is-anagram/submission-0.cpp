class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> freq;

        if(s.length() != t.length())
            return false;

        for(auto c : s)
            freq[c]++;

        for(auto c : t)
            freq[c]--;

        for(auto p : freq){
            if(p.second > 0)
                return false;
        }
        return true;
    }
};

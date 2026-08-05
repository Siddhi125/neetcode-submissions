class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char>charSet;

        int l=0;
        int max_len=0;
        for(int r=0;r<s.size();r++){
            while(charSet.count(s[r])){
                charSet.erase(s[l]);
                l++;
            }
            charSet.insert(s[r]);
            max_len=max(max_len,r-l+1);
        }
        return max_len;
        
    }
};

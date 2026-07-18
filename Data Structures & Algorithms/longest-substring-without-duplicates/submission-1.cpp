class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> countSet;
        int left = 0;
        int maxLen = 0;

        for(int right =0;right<s.size();right++){
            while(countSet.count(s[right])){
                countSet.erase(s[left]);
                left++;
            }
            countSet.insert(s[right]);
            maxLen = max(maxLen, (right-left+1));
        }
        return maxLen;
    }
};

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char , int> seen;
        int left =0, maxLength =0;

        for(int right =0;right< s.size(); ++right){

            if(seen.count(s[right]) && seen[s[right]] >= left){
                left = seen[s[right]] +1;
            }

            seen[s[right]] = right;
            maxLength = max(maxLength , right -left +1);
        }
        return maxLength;
    }
};
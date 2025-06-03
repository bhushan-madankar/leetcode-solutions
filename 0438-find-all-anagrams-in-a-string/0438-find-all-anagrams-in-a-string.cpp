class Solution {
public:
    bool allZero(vector<int>& counter) {
        for (int count : counter)
            if (count != 0) return false;
        return true;
    }

    vector<int> findAnagrams(string s, string p) {
        int n = p.length(), m = s.length();
        if (m < n) return {}; // edge case: pattern is longer than s

        vector<int> counter(26, 0);
        for (char ch : p) {
            counter[ch - 'a']++;
        }

        vector<int> result;
        vector<int> window(26, 0);

        // Sliding window of size n
        for (int i = 0; i < m; ++i) {
            window[s[i] - 'a']++;

            if (i >= n) {
                // Slide the window: remove the leftmost character
                window[s[i - n] - 'a']--;
            }

            if (window == counter) {
                result.push_back(i - n + 1);
            }
        }

        return result;
    }
};

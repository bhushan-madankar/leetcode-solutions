class Solution {
public:
    string shiftingLetters(string s, vector<vector<int>>& shifts) {
        int n = s.size();
        vector<int> diff(n + 1, 0);

        // Apply shifts using the difference array
        for (auto& shift : shifts) {
            int start = shift[0], end = shift[1], direction = shift[2];
            diff[start] += (direction == 1) ? 1 : -1;
            diff[end + 1] -= (direction == 1) ? 1 : -1;
        }

        // Compute the prefix sum to get final shifts
        int currentShift = 0;
        for (int i = 0; i < n; i++) {
            currentShift += diff[i];
            int shifted = (s[i] - 'a' + currentShift) % 26;
            if (shifted < 0) shifted += 26; // Handle negative wraparound
            s[i] = 'a' + shifted;
        }

        return s;
    }
};
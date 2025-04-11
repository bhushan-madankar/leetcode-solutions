class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        int count = 0;

        for (int x = low; x <= high; x++) {
            string s = to_string(x);
            int len = s.length();

            if (len % 2 == 0) {
                int mid = len / 2;
                int sumL = 0, sumR = 0;

                for (int i = 0; i < mid; i++) {
                    sumL += s[i] - '0';
                    sumR += s[mid + i] - '0';
                }

                if (sumL == sumR) count++;
            }
        }

        return count;
    }
};

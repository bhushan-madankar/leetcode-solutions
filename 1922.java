public class Constants {
    public static final int MOD = 1000000007;
}

class Solution {
    public int countGoodNumbers(long n) {
        long odd = n / 2;
        long even = n / 2 + n % 2;
        return (int)((power(5, even) * power(4, odd)) % Constants.MOD);
    }

    public long power(long x, long y) {
        if (y == 0) return 1;
        long ans = power(x, y / 2);
        ans = (ans * ans) % Constants.MOD;
        if (y % 2 == 1) ans = (ans * x) % Constants.MOD;
        return ans;
    }
}

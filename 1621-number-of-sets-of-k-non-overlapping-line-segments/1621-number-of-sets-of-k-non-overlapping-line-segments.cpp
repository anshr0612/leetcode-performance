class Solution {
public:
    long long power(long long a, long long b) {
        long long ans = 1, mod = 1e9 + 7;
        while (b) {
            if (b & 1) ans = ans * a % mod;
            a = a * a % mod;
            b /= 2;
        }
        return ans;
    }

    int numberOfSets(int n, int k) {
        long long mod = 1e9 + 7;
        long long N = n + k - 1, r = 2 * k;
        long long a = 1, b = 1;

        for (int i = 1; i <= r; i++) {
            a = a * (N - r + i) % mod;
            b = b * i % mod;
        }

        return a * power(b, mod - 2) % mod;
    }
};
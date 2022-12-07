class Solution {
public:
    long long power(int N, int R)
    {
        int MOD = 1e9 + 7;
        if (R == 0)
            return 1;
        long long ans = power(N, R - 1);
        ans = (ans % MOD * N % MOD) % MOD;
        return ans;
    }
};

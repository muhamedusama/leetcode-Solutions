class Solution {
   
public:
   
    int fibonacci (int x, int dp[])
    {
        if (x<2)
            return x;
        if (dp[x]!=-1 &&x!=1 && x!=0)
            return dp[x];
         dp[x]=fibonacci(x-1,dp)+fibonacci(x-2,dp);
        return dp[x];
        
    }
    int fib(int n) {
         int dp[n+1];
        for (int i=0;i<=n;i++)
            dp[i]=-1;
        return fibonacci(n,dp);
    }
};
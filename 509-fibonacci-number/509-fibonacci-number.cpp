class Solution {
   
public:
   
 
    int fib(int n) {
         int dp[n+10];
        dp[0]=0;
        dp[1]=1;
            cout<<n<<endl;
        for (int i=2;i<=n;i++)
            dp[i]=dp[i-1]+dp[i-2];
        cout<<dp[n];
        return dp[n];
    }
};
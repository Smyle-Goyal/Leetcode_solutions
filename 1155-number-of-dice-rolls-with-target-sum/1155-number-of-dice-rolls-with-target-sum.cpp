class Solution {
public:

    long long MOD = 1e9+7;
    int findWays(int n, int k, int target, vector<vector<int>>& dp){
        if(n == 0 || target < 0){
            return target == 0 ? 1 : 0;
        }

        if(dp[n][target] != -1){
           return dp[n][target];
        }

        int sum = 0; 
        for(int i = 1; i<=k; i++){
            sum = sum+ findWays(n-1, k , target -i , dp);
            sum %= MOD;
        }

        return dp[n][target] = sum;
    }
    int numRollsToTarget(int n, int k, int target) {
        vector<vector<int>>dp (n+1, vector<int> (target+1, -1));
         return findWays(n,k,target,dp);
        
    }
};
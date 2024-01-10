// as only n is changing here so we will use 1d array here
// n+1 size as 0 is also a fibonacci number
// to get min. cost
#include<iostream>
using namespace std;
#include<vector>

class Solution{
    public:
        int solve(vector<int>& cost, int n){
        // step 1 : creation of dp array
         vector<int> dp(n+1);
        //  step 2 : base case analyse
         dp[0] = cost[0];
         dp[1] = cost[1];

        //  step 3 : rest cases
        for(int i=2;i<n;i++){
            dp[i] = cost[i] + min(dp[i-1],dp[i-2]);
        }
        return min(dp[n-1],dp[n-2]);
        }
        int minCostClimbingStairs(vector<int>& cost){
            int n = cost.size();

            
            return solve(cost,n);
        }
};
// solved by using recursion+memoization
#include<iostream>
using namespace std;
#include<vector>

int solveMem(vector<int> &num , int x,vector<int>& dp){

    // base case
    if(x==0){
        return 0;
    }
    if(x<0){
        return INT_MAX;
    }
    if(dp[x]!=-1){
        return dp[x];
    }

    int mini = INT_MAX;
    for(int i=0;i<num.size();i++){
        int ans = solveMem(num, x-num[i]);
        if(ans != INT_MAX){
             mini = min(mini, 1+ ans);

        }
        
    }
    dp[x]=mini;
    return mini;
}
int minimumElements(vector<int> &num, int x){
    // int ans = solveRec(num,x);
    // if(ans == INT_MAX){
    //     return -1;
    // }
    // return ans;

    vector<int> dp(x+1,-1);
    int ans= solveMem(num,x,dp);

    if(ans==INT_MAX){
        return -1;
    }
    else{
        return ans;
    }
}
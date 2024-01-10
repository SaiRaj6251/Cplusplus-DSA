// min. number of coins to make a target, min. number of coins to make an amount, or min. elements
// solved by recursion
#include<iostream>
using namespace std;
#include<vector>

int solveRec(vector<int> &num , int x){

    // base case
    if(x==0){
        return 0;
    }
    if(x<0){
        return INT_MAX;
    }
    int mini = INT_MAX;
    for(int i=0;i<num.size();i++){
        int ans = solveRec(num, x-num[i]);
        if(ans != INT_MAX){
             mini = min(mini, 1+ ans);

        }
        
    }
    return mini;
}
int minimumElements(vector<int> &num, int x){
    int ans = solveRec(num,x);
    if(ans == INT_MAX){
        return -1;
    }
    return ans;
}






// using bottom-up approach or tabulation method 
#include<iostream>
using namespace std;
#include<vector>

int main(){
    int n;
    cin >> n;

    // step 1
    vector<int> dp(n+1);
    // step2
    dp[1]=1;
    dp[0]=0;

    // step 3
    for(int i=2;i<=n;i++){
        dp[i] = dp[i-1] + dp[i-2];

    cout << dp[n] << endl;
    }
}
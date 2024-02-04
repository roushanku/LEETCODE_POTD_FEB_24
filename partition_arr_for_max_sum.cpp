// J.S.R -- *roush*
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
const int mod = 1000000007;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
typedef tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds; //find_by_order //order_of_key

class Solution {
public:
    long long dp[503][503];
    long long solve(int i , int j , vector <int> &arr , int k) {
        int n = arr.size();
        if(j-i+1 > k) return -1e12;
        if(i >= n || j >= n) {
            return 0;
        }

        long long mx = -1;
        for(int l = i ; l <= j ; l++) mx = max(mx , 1LL*arr[l]);

        long long ans = 0;

        if(dp[i][j] != -1) return dp[i][j];
        
        if(j-i+1 <= k) {
            ans = max(ans , (j-i+1)*mx + solve(j+1,j+1,arr,k));
        }

        ans = max(ans , solve(i,j+1,arr,k));
        return dp[i][j] = ans;
    }
    int maxSumAfterPartitioning(vector<int>& arr, int K) {
        memset(dp,-1,sizeof(dp));
        int ans = solve(0,0,arr,K);
        return (int) ans;

        // int n = arr.size();
        // vector <long long> dp(n+1,0);

        // for(int i = 1 ; i <= n ; i++) {
        //     int mx = -1;
        //     for(int k = 1 ; k <= K && i-k >= 0 ; k++) {
        //         mx = max(mx , arr[i-k]);
        //         dp[i] = max(dp[i] , 1LL*k * mx + dp[i-k]);
        //     }
        // }

        // int ans = (int) dp[n];
        // return ans;
    }
};
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//patience Bro , thoda sa logic soch k try ur own test case
//hadbad m kaafi gadbad kie ho islie aaram s -> You will do best for Youself
//First, solve the problem. Then, write the code.
int t;
cin>>t;
while(t--){
           
}
return 0;
}
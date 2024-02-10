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
    int countSubstrings(string s) {
        int n = s.size();

        int dp[n][n+1];

        //dp[i][j] == 1 -> there is substr stringting at i eith size j

        memset(dp , 0 , sizeof(dp));

        for(int i = 0 ; i < n ; i++) dp[i][1] = 1;

        for(int i = 0 ; i < n-1 ; i++) {
            if(s[i] == s[i+1]) dp[i][2] = 1;
        }

        for(int size = 3 ; size <= n ; size++) {
            for(int i = 0 ; i < n ; i++) {
                int j = i , k = j+size-1;
                //starting id , k = ending id

                if(k < n && j < n-1 && dp[j+1][size-2] && s[j] == s[k]) dp[j][size] = 1;
            }
        }

        int ans = 0;

        for(int k = 1 ; k <= n ; k++) {
            for(int i = 0 ; i < n ; i++) {
                if(dp[i][k]) ans++;
            }
        }


        // for(int i = 0 ; i < n ; i++) {
        //     for(int j = 0 ; j <= n ; j++) {
        //         cout<<dp[i][j]<<" ";
        //     }
        //     cout<<"\n";
        // }

        return ans;
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
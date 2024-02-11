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
    int dp[71][71][71];
    int solve(int r1 , int c1 , int c2 , vector<vector<int>>& grid) {
        int n = grid.size() , m = grid[0].size();

        int r2 = r1; //imp h bhai

        if(r1 >= n || r2 >= n || c1 >= m || c2 >= m || c1 < 0 || c2 < 0) return 0;

        int c = 0;
        if(c1 == c2) c += grid[r1][c1];

        else{
            c += grid[r1][c1];
            c += grid[r2][c2];
        }

        int ans = 0;

        if(dp[r1][c1][c2] != -1) return dp[r1][c1][c2];

        //9 rec calls
        for(int i = -1 ; i <= 1 ; i++) {
            for(int j = -1 ; j <= 1 ; j++) {
                int nc1 = c1 + i;
                int nc2 = c2 + j;
                int nr1 = r1 + 1;

                ans = max(ans , c+ solve(nr1 , nc1 , nc2 , grid));
            }
        }

        
        return dp[r1][c1][c2] = ans;
    }
    int cherryPickup(vector<vector<int>>& grid) {
        int n = grid.size() , m = grid[0].size();
        memset(dp , -1 , sizeof(dp));
        int ans = solve(0 , 0 , m-1 , grid);

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
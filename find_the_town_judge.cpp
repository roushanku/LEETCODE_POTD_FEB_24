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
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int> adj[n+1];
        map <int,int> mp;
        for(auto it:trust){
            adj[it[0]].push_back(it[1]);
            mp[it[1]]++;
        }

        for(int i = 1 ; i <= n ; i++){
            if(mp[i] == n-1 && adj[i].size() == 0) return i; 
        }

        return -1;
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
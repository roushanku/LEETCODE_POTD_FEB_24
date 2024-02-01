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
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        vector<vector<int>> ans;
        
        sort(nums.begin() , nums.end());
        int n = nums.size();
        
        // for(int i = 1 ; i < n ; i++) {
        //     if(nums[i] - nums[i-1] > k) return ans;
        // }
        
        vector <int> vis(n,0);  
        
        for(int i = 0 ; i < n ; i+=3) {
            ans.push_back({nums[i] , nums[i+1] , nums[i+2]});
            // vis[i] = 1 , vis[i+1] = 1 , vis[i+2] = 1;
        }
        
        vector <vector<int>> v;
        unordered_map <int,int> mp;
        for(int i = 0 ; i < ans.size() ; i++) {
            int a = ans[i][0] , b = ans[i][1] , c = ans[i][2];
            // if(mp.find(a) != mp.end() || mp.find(b) != mp.end() || mp.find(c) != mp.end()) return v;
            if(b-a > k || c-b > k || c-a > k) return v;
            // mp[a] = 1 , mp[b] = 1 , mp[c] = 1;
        }
        
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
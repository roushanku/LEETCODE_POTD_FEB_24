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
    vector<int> rearrangeArray(vector<int>& nums) {
        vector <int> neg , pos;

        for(int i = 0 ; i < nums.size() ; i++) {
            if(nums[i] < 0) neg.push_back(nums[i]);
            else pos.push_back(nums[i]);
        }

        vector <int> ans;

        int i = 0 , j = 0 , ct = 0;

        while(i < pos.size() && j < neg.size()) {
            if(ct & 1) {
                ans.push_back(neg[j]);
                j++;
            }

            else{
                ans.push_back(pos[i]);
                i++;
            }
            ct++;
        }

        while(i < pos.size()) {
            ans.push_back(pos[i]);
            i++;
        }

        while(j < neg.size()) {
            ans.push_back(neg[j]);
            j++;
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
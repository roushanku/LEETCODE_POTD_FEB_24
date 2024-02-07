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
    map <char,int> mp;

    static bool compare(pair<int,int> a , pair<int,int> b) {
        return a.first > b.first;
    }

    string frequencySort(string s) {
        vector <pair<int,char>> f;

        for(int i = 0 ; i < s.size() ; i++) mp[s[i]]++;

        for(auto it : mp) f.push_back({it.second , it.first});

        sort(f.begin() , f.end() , compare);

        string ans;

        for(int i = 0 ; i < f.size() ; i++) {
            char ch = f[i].second;
            int j = f[i].first;

            for(int k = 0 ; k < j ; k++) ans.push_back(ch);
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
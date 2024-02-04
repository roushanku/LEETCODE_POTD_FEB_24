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
    string minWindow(string s, string t) {
        int n = s.size();

        int m = t.size();

        unordered_map <char,int> prev;
        for(int i = 0 ; i < t.size() ; i++) prev[t[i]]++;

        unordered_map <char,int> f;


        int i = 0 , j = 0 , sz = 1e9 , start = -1;
        int found = 0 , req = prev.size();
        
        while(j < n) {
            f[s[j]]++;

            if(prev.find(s[j]) != prev.end() && f[s[j]] == prev[s[j]]) {
                found++;
            }

            //how to check for valid wndow is imp part of this ques
            while(i <= j && found == req) {
                if(start == -1 || j-i+1 < sz) {
                    // ans = s.substr(i , j-i+1);
                    start = i;
                    sz = j-i+1;
                }
                f[s[i]]--;
                if(f[s[i]] == 0) f.erase(s[i]);

                if(prev.find(s[i]) != prev.end() && f[s[i]] < prev[s[i]]) found--;
                i++;
            }
            j++;
        }
        if(start == -1) return "";
        string ans = s.substr(start , sz);
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
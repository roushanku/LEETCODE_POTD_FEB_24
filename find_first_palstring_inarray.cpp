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
    bool IsPal(string s) {
        int n = s.size();
        int i = 0 , j = n-1;

        while(i < j) {
            if(s[i] != s[j]) return false;

            else{
                i++;
                j--;
            }
        }

        return true;
    }
    string firstPalindrome(vector<string>& words) {
        for(auto it : words) {
            if(IsPal(it)) return it;
        }

        return "";
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
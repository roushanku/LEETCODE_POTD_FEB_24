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
    vector<int> sequentialDigits(int low, int high) {
        queue <int> q;

        for(int i = 1 ; i <= 8 ; i++) q.push(i);

        vector <int> ans;
        while(!q.empty()) {
            int node = q.front();
            q.pop();

            if(node >= low && node <= high) ans.push_back(node);

            int rem = node % 10;
            int temp = node * 10 + (rem + 1);

            if(rem < 9 && temp <= high) q.push(temp);
        }

        return ans;
    }
};

class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        //...are bhai bhai bhai approach
        vector <int> v = {
            1 , 12 , 123 , 1234 ,12345 , 123456 , 1234567 , 12345678 , 123456789,
            2 , 23 , 234 , 2345 , 23456 , 234567 , 2345678 , 23456789,
            3 , 34 , 345 , 3456 , 34567 , 345678 , 3456789 ,
            4 , 45 ,456 , 4567 , 45678 , 456789,
            5 , 56 ,567 , 5678 , 56789,
            6 ,67 ,678 , 6789,
            7 , 78 ,789,
            8 , 89 , 9
        };

        vector <int> ans;
        for(int i = 0 ; i < v.size() ; i++) {
            if(v[i] >= low && v[i] <= high) ans.push_back(v[i]);
        }

        sort(ans.begin() , ans.end());

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
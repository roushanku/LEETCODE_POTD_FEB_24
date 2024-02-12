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
    int majorityElement(vector<int>& nums) {
        int ct = 1 , num = nums[0];
        //this approach is known as moore voting algo
        //when you get the same wle increase the ct else decrease if count becomes 0 it means the taken ele cant be majority ele
        for(int i = 1 ; i < nums.size() ; i++) {
            if(nums[i] == num) ct++;

            else{
                ct--;
                if(ct == 0) {
                    ct = 1;
                    num = nums[i];
                }
            }
        }

        return num;
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
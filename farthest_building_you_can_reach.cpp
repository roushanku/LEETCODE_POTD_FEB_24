// J.S.R -- *roush*
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
const int mod = 1000000007;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
typedef tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds; //find_by_order //order_of_key

//main thing to check is that when you will use brick and ladder
//greedy thought says that use the largest for ladders and remaining for bricks
class Solution {
public:
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
        int n = heights.size();
        priority_queue <int , vector <int> , greater<int>> pq;
        for(int i = 0 ; i < heights.size()-1 ; i++) {
            int temp = heights[i+1] - heights[i];

            if(temp > 0) pq.push(temp); //if temp < 0 : no need of brick or ladder

            if(pq.size() > ladders) { //ladders are 
                bricks -= pq.top();
                pq.pop();
            }

            if(bricks < 0) return i; //bricks used
        }

        return n-1; //finally we can reach at end
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
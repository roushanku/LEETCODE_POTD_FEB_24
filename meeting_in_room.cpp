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
    map <long long,long long> mp , ct;
   
    int mostBooked(int n, vector<vector<int>>& meetings) {
        sort(meetings.begin() , meetings.end());
        for(int i = 0 ; i < n ; i++) mp[i] = 0;

        for(int i = 0 ; i < meetings.size() ; i++) {
            int start = meetings[i][0] , end = meetings[i][1];
            bool found = false;

            long long room = -1 , time = 1e15;
            for(int i = 0 ; i < n ; i++) { //room khoj rhe h
                if(mp[i] <= start) { //mil gya bhai
                    mp[i] = end;
                    found = true;
                    ct[i]++;
                    break;
                }

                if(time > mp[i]) { //dekh rha hu ki pahle kisme meeting khatam hoga
                    time = mp[i];
                    room = i;
                }
            }

            if(!found) { //wait krna padega
                mp[room] += 1LL*(meetings[i][1] - meetings[i][0]);
                ct[room]++;
            }
        }

        long long ans = 0;
        long long room = 1e9;
        for(auto it : ct){
            if(ans == it.second) {
                if(it.first < room) {
                    room = it.first;
                }
            }

            else if(ans < it.second) {
                ans = it.second;
                room = it.first;
            }
        }

        // for(auto it : ct) cout<<it.first<<" "<<it.second<<"\n";

        return room;
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
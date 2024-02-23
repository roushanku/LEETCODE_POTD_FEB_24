// J.S.R -- *roush*
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
const int mod = 1000000007;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
typedef tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds; //find_by_order //order_of_key

//dijkstra
class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {

        vector <pair<int,int>> adj[n];

        for(auto it : flights) {
            int u = it[0] , v = it[1] , cost = it[2];

            adj[u].push_back({v , cost});
        }
        priority_queue <vector <int> , vector <vector<int>> , greater<vector<int>>> pq;

        pq.push({0 , 0 , src});

        vector <int> dist(n , 1e9);

        while(!pq.empty()) {
            auto it = pq.top();
            pq.pop();
            int stop = it[0] , d = it[1] , node = it[2];

            for(auto n : adj[node]) {
                if(stop <= k && d + n.second < dist[n.first]) {
                    dist[n.first] = d + n.second;
                    pq.push({stop+1 , d + n.second , n.first});
                }
            }
        }

        int ans = dist[dst];

        if(ans == 1e9) return -1;
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
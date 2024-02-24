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
    vector<int> findAllPeople(int n, vector<vector<int>>& meetings, int firstPerson) {
        map <int , vector <pair<int,int>>> mp;

        for(auto it : meetings) mp[it[2]].push_back({it[0] , it[1]});

        map <int,int> know;

        know[0]++;
        know[firstPerson]++;

        for(auto &it : mp) {
            vector <pair<int,int>> meet = it.second;

            //graph bna rhe h
            unordered_map <int,vector <int>> adj;

            queue <int> q;
            map <int,int> taken;

            for(int j = 0 ; j < meet.size() ; j++) {
                int u = meet[j].first , v = meet[j].second;

                adj[u].push_back(v);
                adj[v].push_back(u);

                if(know.find(u) != know.end() && taken.find(u) == taken.end()) { //baar baar na daal do queue m
                    taken[u]++;
                    q.push(u);
                }

                if(know.find(v) != know.end() && taken.find(v) == taken.end()) {
                    taken[v]++;
                    q.push(v);
                }
            }
            
            //bfs

            while(!q.empty()) {
                int node = q.front();
                q.pop();

                for(auto it : adj[node]) {
                    if(know.find(it) == know.end()) {
                        q.push(it);
                        know[it]++;
                    }
                }
            }
        }

        vector <int> ans;
        for(auto it : know) ans.push_back(it.first);

        return ans;
    }
};

    vector<int> findAllPeople_another_solution(int n, vector<vector<int>>& meetings, int firstPerson) {
        unordered_map <int,vector<pair<int,int>>> adj;

        for(auto it : meetings) {
            adj[it[1]].push_back({it[0],it[2]});
            adj[it[0]].push_back({it[1],it[2]});
        }

        vector <int> mn_time(n , 1e9);
        mn_time[0] = 0;
        mn_time[firstPerson] = 0;

        queue <pair<int,int>> q; //{person , time} -> kb pta chla

        q.push({0,0});
        q.push({firstPerson,0});

        while(!q.empty()) {
            auto [p , t] = q.front();
            q.pop();

            for(auto &it : adj[p]) {
                int next = it.first , next_time = it.second;

                if(next_time >= t && mn_time[next] > next_time) { //agr phle pat h to update krlo time
                    mn_time[next] = next_time;
                    q.push({next , next_time});
                }
            }
        }

        vector <int> ans;

        for(int i = 0 ; i < n ; i++) {
            if(mn_time[i] != 1e9) ans.push_back(i); //kisko kisko pta h
        }

        return ans;
    }

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
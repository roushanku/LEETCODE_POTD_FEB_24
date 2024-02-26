// J.S.R -- *roush*
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
const int mod = 1000000007;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
typedef tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds; //find_by_order //order_of_key

class Disjointset{
    vector <int> rank, parent , size;
    int component;

    public:
        Disjointset(int n) {
            rank.resize(n+1,0); // cover both 1 based indexing and 0 based indexing graph
            parent.resize(n+1);
            size.resize(n+1);
            component = n;
            for(int i = 0 ; i <= n ; i++) {
                parent[i] = i;
                size[i] = 1;
            }
        }

        int findUparent(int node) {
            if(node == parent[node]) return node;;

            return parent[node] = findUparent(parent[node]);
        }

        void unionbyRank(int u , int v) {
            int ulp_u = findUparent(u);
            int ulp_v = findUparent(v);

            if(ulp_u == ulp_v) return;

            if(rank[ulp_u] < rank[ulp_v]) {
                parent[ulp_u] = ulp_v;
            }

            else if(rank[ulp_u] < rank[ulp_v]) {
                parent[ulp_u] = ulp_v;
            }

            else{
                parent[ulp_v] = ulp_u;
                rank[ulp_u]++;
            }
            component -= 1;
        }

        void unionbySize(int u , int v) {
            int ulp_u = findUparent(u);
            int ulp_v = findUparent(v);

            if(ulp_u == ulp_v) return;

            if(size[ulp_u] < size[ulp_v]) {
                parent[ulp_u] = ulp_v;
                size[ulp_v] += size[ulp_u];
            }

            else{
                parent[ulp_v] = ulp_u;
                size[ulp_u] += size[ulp_v];
            }
            // component -= 1;
        }

        int NoOfComponent() { //to find no of component
            return component;
        }
};
class Solution {
public:
    bool canTraverseAllPairs(vector<int>& nums) {
        //iterate on each no
        //nums[i] -> prime factor -> if this prime fcator is present then do union of the index
        //nhi to map m daal to

        int n = nums.size();
        Disjointset DSU(n);

        map <int,int> mp; //{factor , index}
        for(int i = 0 ; i < nums.size() ; i++) {
            int num = nums[i];

            for(int j = 2 ; j*j <= nums[i] ; j++) {
                if(num % j == 0) {
                    if(mp.find(j) != mp.end()) {
                        DSU.unionbyRank(mp[j] , i);
                    }
                    else{
                        mp[j] = i;
                    }
                }

                while(num % j == 0) num /= j;
            }

            //check for prime no -> factor equal to num
            if(num > 1) {
                if(mp.find(num) != mp.end()) {
                    DSU.unionbyRank(mp[num] , i);
                }
                else{
                    mp[num] = i;
                }
            }
        }

        int ans = DSU.NoOfComponent();

        return ans == 1;
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
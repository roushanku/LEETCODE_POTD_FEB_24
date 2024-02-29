// J.S.R -- *roush*
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
const int mod = 1000000007;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
typedef tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds; //find_by_order //order_of_key


//   Definition for a binary tree node.
 struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };

class Solution {
public:
    bool isEvenOddTree(TreeNode* root) {
        queue <TreeNode*> q;
        q.push(root);
        int level = 0;
        while(!q.empty()) {
            int size = q.size();
            vector <int> v;
            while(size--) {
                TreeNode* node = q.front();
                q.pop();
                v.push_back(node -> val);

                if(node -> left) {
                    q.push(node -> left);
                }

                if(node -> right) {
                    q.push(node -> right);
                }
            }

            if(level & 1) {
                int last = v[0];
                if(last % 2 != 0) return false;
                for(int i = 1 ; i < v.size() ; i++) {
                    if(last <= v[i] || v[i] % 2 != 0) return false;
                    last = v[i];
                }
            }

            else{
                int last = v[0];
                if(last % 2 == 0) return false;
                for(int i = 1 ; i < v.size() ; i++) {
                    if(last >= v[i] || v[i] % 2 == 0) return false;
                    last = v[i];
                }
            }
            level++;
        }

        return true;
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
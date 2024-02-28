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
    int findBottomLeftValue(TreeNode* root) {
        int ct = 0;
        queue <TreeNode*> q;

        q.push(root);

        while(!q.empty()) {
            int size = q.size();

            while(size--) {
                TreeNode* node = q.front();
                q.pop();
                if(node -> left) q.push(node -> left);
                if(node -> right) q.push(node -> right);
            }
            ct++;
        }

        cout<<ct<<"\n";
        while(!q.empty()) q.pop();

        q.push(root);

        int level = 0;

        while(!q.empty()) {
            int size = q.size();

            while(size--) {
                TreeNode* node = q.front();
                q.pop();

                if(level+1 == ct) return node->val;

                if(node -> left) q.push(node -> left);
                if(node -> right) q.push(node -> right);
            }
            level++;
        }

        return NULL;
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
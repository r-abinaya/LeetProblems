/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int maxDepth(TreeNode* root) {
          if(!root) return 0;
      if(!root->left) return 1+maxDepth(root->right);
      if(!root->right) return 1+maxDepth(root->left);
      return 1+max(maxDepth(root->left),maxDepth(root->right));
        // int maxi=0;
        // if(root ==NULL)
        //     return 0;
        // else
        // {
        //     int left=maxDepth(root->left);
        //     int right=maxDepth(root->right);
        //     maxi=max(left,right)+1;
        // }
        // return maxi;
    }
};
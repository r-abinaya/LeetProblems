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
     int rec(TreeNode *root,int &mx,int &mn,int &a)
    {
        if(!root) return 0;
        
	// lmn,lmx will find the minimum and maximum node in the left subtree 
	// similarly, rmn,rmx will find minimum and maximum node in the right subtree
		
        int lmn,rmn,rmx,lmx;
        
        lmn=rmn=INT_MAX;
        lmx=rmx=INT_MIN;
		
        int l=rec(root->left,lmx,lmn,a);
        int r=rec(root->right,rmx,rmn,a);
        
        int val=l+r+root->val;
    
	// if the left maximum is less than and right minimum is greater than current node
	// than the subtree rooted at current node is BST.
		
        if((lmx<(root->val)) and (rmn>(root->val)))
        {
            a=max(a,val);
            mx=max(root->val,rmx);
            mn=min(root->val,lmn);
        }
        else
        {
            mx=INT_MAX;
            mn=INT_MIN;
        }
        return val;        
    }
    
    int maxSumBST(TreeNode* root) {
        int a=0;
        int mn=INT_MAX;
        int mx=INT_MIN;
        rec(root,mn,mx,a);
        return a;
    }
};
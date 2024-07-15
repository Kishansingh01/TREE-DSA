S.C/T.C=O(n); (worst/Average case);

S.C/ T.C=O(logn); (Best case)





class Solution{
    public:
    TreeNode* searchBST(TreeNode* root,int val){
        if(root==NULL || root->val==val) return root:
        else if(root->val>val) return searchBST(root->left,val);
        else return searchBST(root->right,val);
        }};
    
}
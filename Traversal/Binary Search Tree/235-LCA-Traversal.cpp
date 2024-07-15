 // In binary search tree in Inorder numbers are in a sorted form.

leetecode 98 i am leaving bcz u have to do it from yourself 
 // Lowest common ancestor of a binary search tree.

 class Solution{
    public:
    TreeNode*lowestCommonAncestor(TreeNode*root,TreeNode*p,Treenode*q){
        if(root->val==p->val || root->val==q-->val) return root;
        else if(root->val->>p->val && root->val < q->val) return root;
        else if(root->val <p->val && root->val>q->val) return root;
        else if(root->val<p->val && root->val<q->val) return lowestCommonAncestor(root->right,p,q);
        else return lowestCommonAncestor(root->left,p,q);
    }
 };


     // Second Method


class Solution{
    public:
    TreeNode* lowestCommonAncestor(TreeNode* root,TreeNode*p,TreeNode*q){
        if(root->val <p->val && root->val<q->val) return  lowestCommonAncestor(root->right,p,q);
        else if(rot->root->val > p->val && root val >q->val) return 
        lowestCommonAncestor(root->left,p,q);
         else return return root;
    }


} 
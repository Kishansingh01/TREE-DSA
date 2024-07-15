// Leetcode-226; Invert Binary Trees 

 // Means reverse the subtree  of the root(Like as mirror image)

 // I have to swap the node not the value 

  class Solution{
    public:
    void helper(TreeNode* root){
        if(root==NULL) return;
        TreeNode* temp=root->left;
        root->left=root->right;
        root->right=temp;
        helper(root->left);
        helper(root->right);
    }
    TreeNode* invertTree(TreeNode* root){
        helper(root);
        return root;
    }
  };


       //Second Method  

    class Solution{
        public:
        TreeNode* invertTree(TreeNode* root){
            if(root==NULL) return NULL;
            TreeNode*temp=root->left;
            root->left=root->right;
            root->right=temp;
            invertTree(root->left);
            invertTree(root->right);
            return root;
        }}


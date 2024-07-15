class Solution{
    public:
      void insert(TreeNode* root,int val){
        if(root==NULL) root=new TreeNode(val);
        else if(root->val>val){//Go left
            if(root->left==NULL){//attach it here
                root->left=new TreeNode(val);
            }
            else insert(root->left,val):
        }
        else if(root->right==NULL){//right
            root->right=new TreeNode(val);
        }
        else insert(root->right,val);
      }
}
TreeNode* insertIntoBST(TreeNode* root,int val){
    insert(root,val);
    return root;
}
};
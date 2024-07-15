Morris Traversal=> Inorder traversal 

Pre,In,Post->Recursive/Iterative  TC=O(n),SC=O(n)

But in Morris SC=O(1).

class Solution{
    public:
    vector<int>inorderTraversal(TreeNode* root){
        vector<int>ans;
        TreeNode* curr=root;
        while(curr!=NULL){
            if(curr->left!=NULL){//Find the pred
            TreeNode*pred=curr->left;
            while(pred->right!=NULL && pred->right!=curr){
                pred=pred->right;
            }
            if(pred->right==NULL){//link-Farzii connection
            pred->right=curr;
            curr=curr->left;

            }
            else{//pred->right==curr:Unlink

            pred->right=NULL;
            ans.push_back(curr->val);
            curr=curr->right;

            }

            }
            else{//currr->left==NULL
            ans.push_back(curr->val);
            curr=curr->right;

            }
        }
        return ans}
    }
}
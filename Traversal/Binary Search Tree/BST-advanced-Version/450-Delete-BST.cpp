  //  LEETECODE-450  //  To delete a node from BST.

1)if it is a leaf node(0 child)
2)It has only one child (Either left or right)
3)It has two child node.


 1) Deletion for the leaf node  only 

class Solution{
    public:
    TreeNode* deleteNode(TreeNode*root,int key){
        if(root->val==key) return NULL;
        else if(root->val>key){//Go left 
        root->left=deleteNode(root->left,key);
        }
        else{//  root->val<key : go right
        root->right=deleteNode(root->right,key);
        }
        return NULL;
    }
}



2)It has only one child (Either left or right) 


class Solution{
    public:
    TreeNode* deleteNode(TreeNode*root,int key){
        if(root->val==key){
            //Case 1:No child
            if(root->left==NULL && root->right==NULL) return NULL;
           //Case 2:1 child
           if(root->left==NULL || root->right==NULL){
            if(root->left!=NULL) retrun root->left;
            else return root->right;
           }
        }
        
        else if(root->val>key){//Go left 
        root->left=deleteNode(root->left,key);
        }
        else{//  root->val<key : go right
        root->right=deleteNode(root->right,key);
        }
        return root;
    }
}



3)The node has two children.
 
class Solution{
    public:
    TreeNode* iop(TreeNode* root){//iop=inorder predecessor 
        TreeNode*pred=root->left;
        while(pred->right!=NULl){
            pred=pred->right;
        }
        return pred;
    }
   TreeNode* ios(TreeNode*root){
    TreeNode*suc =root->left;
    while(suc->left!=NULL){
        pred=suc->right;
    }
    return suc;
   }



    TreeNode* deleteNode(TreeNode*root,int key){
        if(root==NULL) return NULL;
        if(root->val==key){
            //Case 1:No child
            if(root->left==NULL && root->right==NULL) return NULL;
           //Case 2:1 child
           if(root->left==NULL || root->right==NULL){
            if(root->left!=NULL) retrun root->left;
            else return root->right;
           }
       //case 3: 2 child nodes
       if(root->left!=NULL && root->right!=NULL){
       // replace the root with its inorder pred
       // after replacing delete the pred/suc
       TreeNode* pred=iop(root); //iop=inorder predecessor.} }
       root->val=pred->val;
       root->left=deleteNode(root->left,pred->val);}}
        
        else if(root->val>key){//Go left 
        root->left=deleteNode(root->left,key);
        }
        else{//  root->val<key : go right
        root->right=deleteNode(root->right,key);
        }
        return root;
    }
};


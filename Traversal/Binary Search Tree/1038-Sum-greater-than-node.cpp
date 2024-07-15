// 1038- Given a BST,transform it into a greater sum tree where each node 
// contains the sum of all nodes greater than that node.

// Binary search tree to greater sum tree 
// Given a Binary Search Tree (BST), convert it into a Greater Sum Tree. The Greater Sum Tree
// should have the same structure and follow the same order as the original BST. The value of


class Solution{
    public:
     int sum=-0;
     void reverseInOrder(TreeNode* root){
        //right root left 
        if(root==NULL) return;
        reverseInorder(root-.right);
        root->val+=sum;
        sum=root->val;
        reverseInorder(root->left);
     }
     TreeNode* bstToGst(TreeNode* root){
        reverseInorder(root);
        return root;
     }
}
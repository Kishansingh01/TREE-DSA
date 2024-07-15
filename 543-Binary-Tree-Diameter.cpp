//         //Leetcode 543 Diameter of binary tree
// //Question-> i have to return the longest chain in he tree.

// class Solution{
//     public:
//     int maxDia=0;//This is a global variable
    
//     int helper(TreeNode*root){
//          if(root==NULL) return 0;
//         int dia= levels(root->left)+levels(root->right);
//         maxDia=max(maxDia,dia);
//         helper(root->left);
//         helper(root->right);
//         return maxDia;}
//         int levels(TreeNode*root){
//              if(root==NULL) return 0;
//         return 1+max(levels(root->left),levels(root->right));
//         } 
//     int diameterOfBinaryTree(TreeNode*root){
//         maxDia=0;//reinitialise
//         return helper(root);
//     }
// };



                //Second Method

            //Leetcode 543
//Question-> i have to return the longest chain in he tree.


// class Solution{
//     public:
//     int levels(TreeNode*root){
//         return 1+max(levels(root->left),levels(root->right));
//         } 
//         void helper(TreeNode*root,int &maxDia){
//          if(root==NULL) return ;
//         int dia= levels(root->left)+levels(root->right);
//         maxDia=max(maxDia,dia);
//         helper(root->left,maxDia);
//         helper(root->right,maxDia);
//         return maxDia;}
        
//     int diameterOfBinaryTree(TreeNode*root){
//        int  maxDia=0;//reinitialise
//         helper(root,maxDia);
//         return maxDia;
//     }
// };
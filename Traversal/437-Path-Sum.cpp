  // leetecode-437 , Path Sum 

class Solution{
    public:
    void helper(TreeNode* root,long long sum,int&count){
       if(root==NULL) return;
       if((long long)(root->val)==sum){
        count++;
       }
    
        }
        helper(root->left,sum-(long long)(root->val));
        helper(root->right,sum-(long long)(root->val));
    }
    int pathSum(TreeNode* root,int targetSum){//To add the sums of every nodepath
        if(root==NULL) return 0;
        int count=0;
         helper(root,(long long)targetSum,count);
         count+=(pathSum(root->left,targetSum)+pathSum(root->right,targetSum));
         return count;
    }};
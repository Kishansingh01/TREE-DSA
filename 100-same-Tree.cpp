// Leetcode=100,Same tree , 

class Solution{
    public:
    bool isSameTree(TreeNode* p,TreeNode* q){
        if(p==NULL && q==NULL) return true;//Means this true then below line will not go
        if(p==NULL || q==NULL) return false;

        if(p->val!=q->val) return false;

        bool leftAns=isSameTree(p->left,q->left);
        if(leftAns==false) return false;

        bool rightAns=isSameTree(p->right,q->right);
        if(rightAns==False) return false;

        return true;
    }
}
//1008: Construct binary search tree from preorder traversal

 class Solution{
    public:
    treeNode* build(vector<int>&pre,int prelo,int prehi,vector<int>&in,int inlo,int inhi){
        if(prelo>prehi) return NULL;
        TreeNode*root=new TreeNode*pre[prelo];
        if(prelo==prehi) return root;
        int i=inlo;
        while(i<=inhi){
            if(in[i]==pre[prelo]) break;
            i++;
        }
        int leftcount=i -inlo;
        int rightcount=inhi-i;
        root->left=build(pre,prelo+1,prelo+leftCount,in,inlo,i-1);
        root->right=build(pre,prelo+leftCount+1,prehi,in,i+1,inhi);
        return root;
    }
    TreeNode*bstFromPreorder(vector<int>&pre){
        vector<int>in=pre;//copy bn gai
        sort(in.begin(),in.end());
        int n=pre.size();
        return build(pre,0,n-1,in,0,n-1);
    }
 } ; 


        // Second Method

    class Solution{
        public:
         void insert(TreeNode* root,int val){
            if(root==NULL) root=new TreeNode(val);
            else if(root->val>val){//go left
            if(root->left==NULL){//attach it here
            root->left=new TreeNode(val);

            }
            else insert(root->val,val);

            }
            else//root->val<val:go right
            if(root->right ==NULL){//attach it here
            root->right=new treeNode(val);
            }
            else insert(root->right,val);
         }}
         TreeNode* bstfromPreorder(vector<int>&pre){
            TreeNode*root=new TreeNode(pre[0]);
            for(int i=1;i<pre.size();i++){
                insert(root,pre[i]);

            }
            return root;
         }};
    }
 //Postorder Traversal (Iterative ) root left to right.

//  Basically i am doing Tree by using stack

class Solution{
    public:
    vector<int>postorderTraversal(TreeNode* root){
        vector<int>ans;
        stack<TreeNode*>st;
        if(root!=NULL) st.push(root);
        while(st.size()>0){
            TreeNode* temp=st.top();
            st.pop();
            ans.push_back(temp->val);//Node
             if(temp->left!=NULL) st.push(temp->left);//Left
            if(temp->right!=NULL) st.push(temp->right);//Right
           
        }
        reverse(ans.begin(),ans.end());//i am making it reverse
        return ans;
    }
}
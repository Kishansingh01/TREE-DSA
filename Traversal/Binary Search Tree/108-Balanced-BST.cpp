 // Leetecode-108  // Converted Sorted Array to Balanced BST


class Solution{
    public:
    TreeNode* helper(vector<int>&arr,int lo,int hi){
        if(lo>hi) return NULL;
        int mid=lo+(hi-lo)/2;
        TreeNode*root=new TreeNode(arr[mid]);
        root->left=helper(arr,mid+1,hi);
        return root;
    }
    TreeNode* sortedArrayToBST(vector<int>&arr){
        int n=arr.size();
        return helper(arr,0,n-1);
    }};


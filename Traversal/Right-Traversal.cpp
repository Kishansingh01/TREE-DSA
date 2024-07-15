// I have given the tree and i am going from right to 
// left order of traversal.  


// Time complexity=O(n)
                           //(All three order the same complexity.)
// Space complexity=(h) how much height of that particular node

 //Bad case time complexity is O(n) wrost case time complexity is O(nlogn)

// Preorder traversal=> Node->left->right.  //Recursion function works like this or we made like this.

// Inorder traversal=> Left->Node->right.   // Recursion function works like this or we made like this. 

//Postorder traversal=> Left->right->node. // Recursion function works like this or we made like this.


// Degenerate tree means in each node has one child  
// TC   in bad case=O(n) 
// SC bad O(h) 

// Balanced Tree means each node has only teo children node except 
// leaf node 



//Traversal=>To visit every node/member/element.

     // Below one is the postorder

#include <iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* left;
    Node*right;
   Node(int val){ //Constructor
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    } };

    void preorder(Node*root){
   if(root==NULL) return  ;//Base case
   cout<<root->val<<" ";
    preorder(root->left); //call   IT is post order
   preorder(root->right);//call
}


    void inorder(Node*root){
   if(root==NULL) return  ;//Base case
    inorder(root->left); //call   IT is post order
  cout<<root->val<<" ";
   inorder(root->right);//call
}

 void postorder(Node*root){
   if(root==NULL) return  ;//Base case
    postorder(root->left); //call   IT is post order
   postorder(root->right);//call
     cout<<root->val<<" ";
}
int levels(Node*root){
    if(root==NULL) return 0;
    return 1+max(levels(root->left),levels(root->right));
}

   void nthLevel(Node*root,int curr,int level){
   if(root==NULL) return  ;//Base case
   if(curr==level){
    cout<<root->val<<" ";//root
    return;
   }
    nthLevel(root->left,curr+1,level); //curr+1 means after one step
     nthLevel(root->right,curr+1,level);//call

}     
          //  Or below is the another method for level but TC and SC depends

//     void nthLevel(Node*root,int curr,int level){
//    if(root==NULL) return  ;//Base case
//    if(curr==level){
//     cout<<root->val<<" ";
//     return;
//    }
//    nthLevel(root->right,curr+1,level);//call
//    nthLevel(root->left,curr+1,level); //curr+1 means after one step
//    }

void levelOrder(Node*root){
    int n=levels(root);
    for(int i=1;i<=n;i++){
        nthLevel(root,1,i);
    }

}

int main(){
    Node*a=new Node(1);//root
    Node*b=new Node(2);
    Node*c=new Node(3);
    Node*d=new Node(4);
    Node*e=new Node(5);
    Node*f=new Node(6);
    Node*g=new Node(7);
    
    a->left=b;
    a->right=c;
    b->left=d;
    b->right=e;
    c->left=f;
    c->right=g;
//    preorder(a);
//    cout<<endl;
//    postorder(a);
//    cout<<endl;
//    inorder(a);
//    cout<<endl;

nthLevel(a,1,1); //This will print the node from right.
nthLevel(a,1,2);
nthLevel(a,1,3);

//levelOrder(a);

}

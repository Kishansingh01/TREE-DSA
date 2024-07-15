// Preorder traversal=> Node->left->right.  //Recursion function works like this or we made like this.

// Inorder traversal=> Left->Node->right.   // Recursion function works like this or we made like this. 

//Postorder traversal=> Left->right->node. // Recursion function works like this or we made like this.



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
   preorder(a);
   cout<<endl;
   postorder(a);
   cout<<endl;
   inorder(a);
   cout<<endl;
}
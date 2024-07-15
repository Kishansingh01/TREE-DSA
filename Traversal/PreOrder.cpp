      //Leetcode 144,94,145

    // DFS= Depth first search  means i am searching from thr depth and from depth 
    //i am going up and after the up i am going down

// Preorder traversal=> Node->left->right(call node pahle).  //Recursion function works like this or we made like this.

// Inorder traversal=> Left->Node->right(call node beech me).   // Recursion function works like this or we made like this. 

//Postorder traversal=> Left->right->node(call node baad me). // Recursion function works like this or we made like this.



//Traversal=>To visit every node/member/element.

     // Below one is the preorder 

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

    void display(Node*root){
   if(root==NULL) return  ;//Base case
   cout<<root->val<<" ";//work
    display(root->left); //call   IT is pre order
   display(root->right);//call
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
   display(a);
}
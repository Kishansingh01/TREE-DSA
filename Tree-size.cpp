#include<iostream>
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
void displayTree(Node*root){
   if(root==NULL) return ;
   cout<<root->val<<" ";

     displayTree(root->right);  
   displayTree(root->left);
}
int sum(Node* root){//summation of the tree
    if(root==NULL) return 0;
    // int leftSum=sum(root->left);  //Here i am adding total left sum
    // int rightSum=sum(root->right);  //Here i am adding total right sum
                   // or
    return root-> val+ sum(root->left) +sum(root->right);  //Here i am adding root->val,Left,Right sum.
}
int size(Node*root){//for size of the tree
    if(root==NULL) return 0;
    return 1+size(root->left)+size(root->right);
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
    displayTree(a);//It will display tree
    cout<<endl;
    cout<<sum(a);//It will return sum of trees
    cout<<endl;
    cout<<size(a);//It will return size of tree

}
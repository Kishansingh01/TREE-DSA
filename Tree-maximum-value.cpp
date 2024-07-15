// #include<bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <climits>
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
   if(root==NULL) return  ;
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

int maxInTree(Node*root){//For maximum node in the tree
    if(root==NULL) return INT_MIN;//No zero bcz if we take zero it will not go in negative

    int lMax=maxInTree(root->left);
    int rMax=maxInTree(root->right);
    return max(root->val,max(lMax,rMax));
           //or
   // return max(root->val,max(maxInTree(root->left),maxInTree(root->right)));
}

int minInTree(Node*root){//For minimum node in the tree
    if(root==NULL) return INT_MAX;//No zero bcz if we take zero it will not go in negative

    int lMin=minInTree(root->left);
    int rMin=minInTree(root->right);
    return min(root->val,min(lMin,rMin));
           //or
   // return min(root->val,min(minInTree(root->left),minInTree(root->right)));
}


int main(){
    Node*a=new Node(-1);//root
    Node*b=new Node(-2);
    Node*c=new Node(-3);
    Node*d=new Node(-4);
    Node*e=new Node(-5);
    Node*f=new Node(-116);
    Node*g=new Node(-17);
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
    cout<<size(a)<<endl;//It will return size of tree
    cout<<maxInTree(a)<<endl;//It will print maximum of tree
    cout<<minInTree(a);
}
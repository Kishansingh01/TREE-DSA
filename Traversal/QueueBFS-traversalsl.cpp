  //Level order traversal using a queue(BFS)
   //BFS = Binary First Search

 //  We are making tree using queue methods

 
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
#include<queue>
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

   
int levels(Node*root){
    if(root==NULL) return 0;
    return 1+max(levels(root->left),levels(root->right));
}

//    void nthLevel(Node*root,int curr,int level){
//    if(root==NULL) return  ;//Base case
//    if(curr==level)
//    cout<<root->val<<" ";
//     nthLevel(root->left,curr+1,level); //curr+1 means after one step
//    nthLevel(root->right,curr+1,level);//call
// }     
          //  Or below is the another method for level but TC and SC depends

    void nthLevel(Node*root,int curr,int level){
   if(root==NULL) return  ;//Base case
   if(curr==level){
    cout<<root->val<<" ";
    return;
   }
   nthLevel(root->left,curr+1,level); //curr+1 means after one step
   nthLevel(root->right,curr+1,level);//call
   }

void levelOrder(Node*root){
    int n=levels(root);
    for(int i=1;i<=n;i++){
        nthLevel(root,1,i);
    }
}

void levelOrderQueue(Node* root){//This is the tree traversing method by using queue 
  queue<Node*>q;
  q.push(root);
  while(q.size()>0){
    Node*temp=q.front();
    q.pop();
    cout<<temp->val<<" ";
    if(temp->left!=NULL) q.push(temp->left);
    if(temp->right!=NULL) q.push(temp->right);
  }
  cout<<endl;
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

// nthLevel(a,1,1);
// nthLevel(a,1,2);
// nthLevel(a,1,3);

//levelOrder(a);

levelOrderQueue(a);

}
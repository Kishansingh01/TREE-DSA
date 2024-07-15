
 // Some error is coming.

// Boundary Traversal=>Given a binary tree ,print boundary nodes of the binary 
// tree Anti-clockwise starting from the root.So,to make them i will go node left,buttom,node right.

// like as kona-kona starting from the node anti-clockwise.
 //Donot print internal node



  //Construct tree from level order traversal(QUEUE)

   //Level order traversal using a queue(BFS)
   //BFS = Binary First Search

      //INT_MIN==NULL.

#include <iostream>
#include <queue>
#include <climits>
using namespace std;

class Node {
public:
    int val;
    Node* left;
    Node* right;

    Node(int val) { // Constructor
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* construct(int arr[], int n) {
    queue<Node*> q;
    Node* root = new Node(arr[0]);
    q.push(root);
    int i = 1;
    int j = 2;
    while (q.size() > 0 && i < n) {
        Node* temp = q.front();
        q.pop();
        Node* l;
        Node* r;
        if (arr[i] != INT_MIN) l = new Node(arr[i]);
        else l = NULL;

        if (j != n && arr[j] != INT_MIN) r = new Node(arr[j]);
        else r = NULL;

        temp->left = l;
        temp->right = r;

        i += 2;
        j += 2;

        if (l != NULL) q.push(l);
        if (r != NULL) q.push(r);
    }
    return root;
}

int levels(Node*root){
    if(root==NULL) return 0;
    return 1+max(levels(root->left),levels(root->right));
}

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
        cout<<endl;
    }
}
void leftBoundary(Node* root){//I have used preorder code
    if(root==NULL) return;
    if(root->left==NULL && root->right==NULL) return;
    cout<<root->val<<" ";
    leftBoundary(root->left);
    if(root->left==NULL) leftBoundary(root->right);
    }

void bottomBoundary(Node* root){//I have used preorder code
    if(root==NULL) return;
    if(root->left==NULL && root->right==NULL) cout<<root->val<<" ";
    bottomBoundary(root->left);
     bottomBoundary(root->left);
    }

void  rightBoundary(Node* root){//I have used preorder code
    if(root==NULL) return;
    if(root->left==NULL && root->right==NULL) return;
    rightBoundary(root->left);
    if(root->right==NULL)  rightBoundary(root->left);
     cout<<root->val<<" ";
    }
    void boundary(Node* root){
        leftBoundary(root);
        bottomBoundary(root);
        rightBoundary(root);

    }



int main() {
    // Construction
    int arr[] = {1, 2, 3, 4, 5,INT_MIN,6,7,INT_MIN,8,INT_MIN,9,10,INT_MIN,11,INT_MIN,12,INT_MIN,13,INT_MIN,14,15,16,INT_MIN,17,INT_MIN,INT_MIN,18,INT_MIN,19,INT_MIN,INT_MIN,INT_MIN,20,21,22,23,INT_MIN,24,25,26,27,INT_MIN,INT_MIN,28,INT_MIN,INT_MIN};
    int n = sizeof(arr) / sizeof(arr[0]);
    Node* root = construct(arr, n);

    //boundary traversal 
    //boundary(root);

   // levelOrder(root);

   boundary(root);
  
}



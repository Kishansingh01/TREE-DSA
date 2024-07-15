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

void levelOrderQueue(Node* root) { // Tree traversal using queue
    queue<Node*> q;
    q.push(root);
    while (q.size() > 0) {
        Node* temp = q.front();
        q.pop();
        cout << temp->val << " ";
        if (temp->left != NULL) q.push(temp->left);
        if (temp->right != NULL) q.push(temp->right);
    }
    cout << endl;
}

int main() {
    // Construction
    int arr[] = {1, 2, 3, 4, 5, 6, INT_MIN, INT_MIN, 7, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    Node* root = construct(arr, n);

    levelOrderQueue(root);

    return 0;
}



#include<iostream>
#include<queue>
using namespace std;

class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node(int val) {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

// Function to check if the binary tree satisfies Max-Heap property
bool isMax(Node* root) {
    if (!root) return true;

    // Check the left child
    if (root->left && root->val < root->left->val)
        return false;

    // Check the right child
    if (root->right && root->val < root->right->val)
        return false;

    // Recursively check the left and right subtrees
    return isMax(root->left) && isMax(root->right);
}

// Function to check the size of the binary tree
int sizeOfTree(Node* root) {
    if (!root) return 0;
    return 1 + sizeOfTree(root->left) + sizeOfTree(root->right);
}

// Function to check if the binary tree is a Complete Binary Tree (CBT)
bool isCBT(Node* root) {
    if (!root) return true;

    queue<Node*> q;
    q.push(root);
    bool flag = false;  // This flag will become true once we encounter a non-full node

    while (!q.empty()) {
        Node* temp = q.front();
        q.pop();

        // Check left child
        if (temp->left) {
            if (flag) return false;  // If we found a non-full node earlier, this is not CBT
            q.push(temp->left);
        } else {
            flag = true;  // If left child is NULL, set the flag
        }

        // Check right child
        if (temp->right) {
            if (flag) return false;  // If we found a non-full node earlier, this is not CBT
            q.push(temp->right);
        } else {
            flag = true;  // If right child is NULL, set the flag
        }
    }

    return true;
}

int main() {
    Node* a = new Node(20);
    Node* b = new Node(15);
    Node* c = new Node(10);
    Node* d = new Node(8);
    Node* e = new Node(11);
    Node* f = NULL;
    Node* g = new Node(6);

    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;

    if (isCBT(a) && isMax(a)) 
        cout << "Tree is MaxHeap";
    else 
        cout << "Tree is not MaxHeap";
}

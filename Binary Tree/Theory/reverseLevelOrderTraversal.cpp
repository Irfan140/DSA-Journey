#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* left;
    Node* right;
    Node(int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
}; //  can be done by using preorder,postorder or inorder...here we will use preOrder but interchage root->left and root->right


void nthLevel(Node* root,int curr,int level){
    if(root==NULL) return; // base case
    if(curr==level) {
        cout<<root->val<<" "; // work
        return;
    }
    nthLevel(root->right,curr+1,level); // call 1
    nthLevel(root->left,curr+1,level); // call 2
}


int level(Node* root){
    if(root==NULL) return 0;
    return 1 + max(level(root->left), level(root->right));
}
void levelOrder(Node* root){
    int n = level(root);
    for(int i=1;i<=n;i++) {
        nthLevel(root,1,i);
        cout<<endl;
    }
}
int main(){
    Node* a = new Node(1);
    Node* b = new Node(2);
    Node* c = new Node(3);
    Node* d = new Node(4);
    Node* e = new Node(5);
    Node* f = new Node(6);
    Node* g = new Node(7);

    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;

    nthLevel(a,1,3);
    cout<<endl;
    // level order traversal means printing every level of tree
    levelOrder(a);

}
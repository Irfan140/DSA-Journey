#include<iostream>
using namespace std;
class Node{ 
  public:
  int val;
  Node* next;

  Node(int val){ 
    this->val = val;
    this->next = NULL;
  }
};
void display(Node* head){
    Node* temp = head; // we can directly use head without making temp as 'a' is passed by value to function so the real head doesnot disappears
  while(temp!=NULL){
    cout<<temp->val<<" ";
    temp = temp->next;
  }
  cout<<endl;
}
int size(Node* head){
    Node* temp = head;
    int n = 0;
  while(temp!=NULL){
    n++;
    temp = temp->next;
  }
  return n;

}
int main(){
   Node* a = new Node(1);
   Node* b = new Node(2);
   Node* c = new Node(3);
   Node* d = new Node(4);
  

  a->next = b;
  b->next = c;
  c->next = d;
  
  display(a);
  
  // finding size of linked list
 cout<< size(a);
}
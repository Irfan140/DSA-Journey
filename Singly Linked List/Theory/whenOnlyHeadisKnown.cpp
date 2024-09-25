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
      
  while(head!=NULL){
    cout<<head->val<<" ";
    head = head->next;
  }
  cout<<endl;
}
void insertAtEnd(Node* head,int val){
    Node* temp = new Node(val);
    while(head->next!=NULL) head = head->next;
    head->next = temp; 
}
int main(){
   Node* a = new Node(1);
   Node* b = new Node(2);
   Node* c = new Node(3);
   Node* d = new Node(4);
  // by default NULL is stoted in the end of d

  a->next = b;
  b->next = c;
  c->next = d;
  
  display(a);

  insertAtEnd(a,5);
  display(a);


  
  
}
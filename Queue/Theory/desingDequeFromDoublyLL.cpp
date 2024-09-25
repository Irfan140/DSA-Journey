#include<iostream>
using namespace std;
class Node{ // This is a user defined data type
  public:
  int val;
  Node* next;
  Node* prev;

  Node(int val){ 
    this->val = val;
    this->next = NULL;
    this->prev = NULL;
  }
};

class Deque{   // user defined data structure
    public:
  Node* head;
  Node* tail;
  int size;
  Deque(){
    head = NULL;
    tail = NULL;
    size = 0;
  }
  // For inserting element at  Tail
  void pushBack(int val){
    Node* temp = new Node(val);
    if(size==0) head = tail = temp;
    else{
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
    size++;
  }

// for inserting element at Head
void pushFront(int val){
    Node* temp = new Node(val);
    if(size==0) head = tail = temp;
    else {
      temp->next = head;
      head->prev = temp;
      head = temp;
    }
    size++;
}


// for deleting element at Head
void popFront(){
  if(size == 0){
    cout<<"List is empty";
    return;
  }
  head = head->next;
  if(head!=NULL) head->prev = NULL;
  if(head==NULL) tail = NULL;
  size--;
}

// deleting element at Tail
void popBack(){
  if(size == 0){
    cout<<"list is empty";
    return;
  }
  else if(size==1){
    popFront();
    return;
  }
  tail->prev->next = NULL;
  size--;
}
int front(){
    if(size == 0){
    cout<<"Deque is empty"<<endl;
    return -1;
  }
  return head->val;
}
int back(){
    if(size == 0){
    cout<<"Deque is empty"<<endl;
    return -1;
  }
  return tail->val;
}
  int Size(){
    return size;
  }
  bool empty(){
    if(size==0) return true;
    else return false;
  }
  // To display we have to create our own function
  void display(){
    Node* temp = head;
    while(temp){
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<endl;
  }
};
int main(){
    Deque dq;
    dq.pushBack(10);
    dq.pushBack(20);
    dq.pushBack(30);
    dq.pushBack(40);
    dq.display();
    dq.popBack();
    dq.display();
}
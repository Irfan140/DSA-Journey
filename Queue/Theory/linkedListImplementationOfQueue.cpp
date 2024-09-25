#include<iostream>
using namespace std;
class Node{ // This is a user defined data type
  public:
  int val;
  Node* next;

  Node(int val){ 
    this->val = val;
    this->next = NULL;
  }
};

class Queue{   // user defined data structure
     public:
  Node* head;
  Node* tail;
  int size;
  Queue(){
    head = NULL;
    tail = NULL;
    size = 0;
  }
  // For inserting element at  Tail
  void push(int val){
    Node* temp = new Node(val);
    if(size==0) head = tail = temp;
    else{
        tail->next = temp;
        tail = temp;
    }
    size++;
  }

// for deleting element at Head
void pop(){
  if(size == 0){
    cout<<"Queue is empty"<<endl;
    return;
  }
  Node* temp = head;
  head = head->next;
  size--;
  delete(temp); // no wastage of space;
}

int front(){
    if(size == 0){
    cout<<"Queue is empty"<<endl;
    return -1;
  }
  return head->val;
}
int back(){
    if(size == 0){
    cout<<"Queue is empty"<<endl;
    return -1;
  }
  return tail->val;
}
  // To display 
  void display(){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<endl;
  }
  int Size(){
    return size;
  }
  bool empty(){
    if(size==0) return true;
    else return false;
  }
};
int main(){
    Queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.display();
    q.push(5);
    q.push(6);
    q.display();
    q.pop();
    q.display();
}
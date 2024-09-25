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

class LinkedList{   // user defined data structure
   
   public:

  Node* head;
  Node* tail;
  int size;
  LinkedList(){
    head = NULL;
    tail = NULL;
    size = 0;
  }
  // For inserting element at  Tail
  void insertAtEnd(int val){
    Node* temp = new Node(val);
    if(size==0) head = tail = temp;
    else{
        tail->next = temp;
        tail = temp;
    }
    size++;
  }

// for inserting element at Head
void insertAtHead(int val){
    Node* temp = new Node(val);
    if(size==0) head = tail = temp;
    else {
      temp->next = head;
      head = temp;
    }
    size++;
}

// for inserting Element at any index
void insert(int idx,int val){
  if(idx<0 || idx>size) cout<<"Invalid index";
  else if(idx == 0) insertAtHead(val);
  else if(idx == size) insertAtEnd(val);
  else{
    Node* t = new Node(val);
    Node* temp = head;
    for(int i=1;i<idx;i++) temp = temp->next;
    t->next = temp->next;
    temp->next = t;
    size++;
  } 
}

// for deleting element at Head
void deleteAtHead(){
  if(size == 0){
    cout<<"List is empty";
    return;
  }
  head = head->next;
  size--;
}

// deleting element at Tail
void deleteAtTail(){
  if(size == 0){
    cout<<"list is empty";
    return;
  }
  Node* temp = head;
  while(temp->next!=tail) temp = temp->next;
  temp->next = NULL;
  tail = temp;
  size--;
}

// deleting element at any index
void deleteAtIndex(int idx){
  if(idx<0 || idx>=size) cout<<"Invalid index";
  else if(idx == 0) deleteAtHead();
  else if(idx == size-1) deleteAtTail();
  else{
    Node* temp = head;
    for(int i=1;i<=idx-1;i++) temp = temp->next;
    temp->next = (temp->next)->next;
    size--;
  }
}

// To get element at any index
int getAtIdx(int idx){
  if(idx<0 || idx>=size){
    cout<<"Invalid Index";
    return -1;
  }
  else if(idx==0) return head->val;
  else if(idx==size-1) return tail->val;
  else{
    Node* temp = head;
    for(int i=0;i<=idx;i++) temp = temp->next;
    return temp->val;
  }
}

  // To display we have to create our own function
  void display(){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<endl;
  }
};


int main(){
  LinkedList ll;
  ll.insertAtEnd(1);
  ll.display();
  ll.insertAtEnd(2);
  ll.display();

  // cout<<ll.size; //  printing of size of Linked List..

  ll.insertAtHead(9);
  ll.display();
  ll.insertAtHead(100);
  ll.display();

  ll.insert(1,70);
  ll.display();

  ll.deleteAtHead();
  ll.display();

  ll.deleteAtTail();
  ll.display();

  ll.deleteAtIndex(0);
  ll.display();
  }
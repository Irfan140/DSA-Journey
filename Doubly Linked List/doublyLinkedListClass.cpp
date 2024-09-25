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

class DLL{   // user defined data structure
    public:
  Node* head;
  Node* tail;
  int size;
  DLL(){
    head = NULL;
    tail = NULL;
    size = 0;
  }
  // For inserting element at  Tail
  void insertAtTail(int val){
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
void insertAtHead(int val){
    Node* temp = new Node(val);
    if(size==0) head = tail = temp;
    else {
      temp->next = head;
      head->prev = temp;
      head = temp;
    }
    size++;
}

// for inserting Element at any index
void insertAtIndex(int idx,int val){
  if(idx<0 || idx>size) cout<<"Invalid index";
  else if(idx == 0) insertAtHead(val);
  else if(idx == size) insertAtTail(val);
  else{
    Node* t = new Node(val);
    Node* temp = head;
    for(int i=1;i<idx;i++) temp = temp->next;
    t->next = temp->next;
    temp->next = t;
    t->prev = temp;
    t->next->prev = t;
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
  if(head!=NULL) head->prev = NULL;
  if(head==NULL) tail = NULL;
  size--;
}

// deleting element at Tail
void deleteAtTail(){
  if(size == 0){
    cout<<"list is empty";
    return;
  }
  else if(size==1){
    deleteAtHead();
    return;
  }
  tail->prev->next = NULL;
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
    temp->next->prev = temp;
    size--;
  }
}

// to get element at any index
int getAtIdx(int idx){
  if(idx<0 || idx>=size){
    cout<<"Invalid Size";
    return -1;
  }
  else if(idx==0) return head->val;
  else if(idx==size-1) return tail->val;
  else{
    if(idx=size/2){
      Node* temp = head;
      for(int i=1;i<=idx;i++) temp = temp->next;
      return temp->val;
    }
    else{
      Node* temp = head;
      for(int i=idx;i>=1;i--) temp = temp->next;
      return temp->val;
    }
  }
  // similarly we can optimise other functions too
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
    DLL list;
    list.insertAtHead(1);
    list.display();
    list.insertAtTail(2);
    list.display();
    list.insertAtHead(40);
    list.display();
    list.insertAtIndex(1,49);
    list.display();
    list.deleteAtTail();
    list.display();
    list.deleteAtIndex(0);
    list.display();
   cout<< list.getAtIdx(0);

}
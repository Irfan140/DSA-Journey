#include<iostream>
using namespace std;
class Node{ // Linked list node
  public:
  int val;
  Node* next;
  // making a constructor
  Node(int val){ 
    this->val = val;
    this->next = NULL; // we give null to every next so that they does not store garbage addres at start;
  }
};
int main(){

   Node a(1);
   Node b(2);
   Node c(3);
   Node d(4);

  
   a.next = &b;
   b.next = &c;
   c.next = &d;
   d.next = NULL; // not required

   // using a we can print b ka value
   cout<<a.next->val<<endl;
    //or
//    cout<<(*a.next).val;

  // using a to find value of c
  // a.next->next  represents the address of b;
  cout<<(a.next->next)->val<<endl; //  value of c

   
}
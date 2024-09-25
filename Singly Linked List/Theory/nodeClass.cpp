#include<iostream>
using namespace std;
class Node{
  public:
  int val;
  Node* next;
};
int main(){
   // 1 2 3 4 we want to store in linked list
   Node a;
   a.val = 1;
   Node b;
   b.val = 2;
   Node c;
   c.val = 3;
   Node d;
   d.val = 4;

   // creating linked list
   a.next = &b;
   b.next = &c;
   c.next = &d;
   d.next = NULL;

   //! This is the basic cration of a linked list
}
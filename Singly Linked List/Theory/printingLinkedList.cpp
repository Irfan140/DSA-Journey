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
int main(){
   
   Node a(1);
   Node b(2);
   Node c(3);
   Node d(4);

  
   a.next = &b;
   b.next = &c;
   c.next = &d;
   d.next = NULL;

   Node temp = a; // a new node is created which has same values as a
   while(1){// 1 means loop will work infinite times
    cout<<temp.val<<" ";
    if(temp.next == NULL) break;
    temp = *(temp.next);
   }
}
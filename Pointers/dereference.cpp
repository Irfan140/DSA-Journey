#include<iostream>
using namespace std;
int main(){
   int x = 122;
   int* p = &x;
   cout<<*p<<endl;
   *p = 6; // updating using dereference operator
   cout<<x; 
}
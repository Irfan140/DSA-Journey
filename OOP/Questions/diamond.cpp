#include<iostream>
 using namespace std;
 class A{
    public:
    int a_ka_public;
 };
 class B : virtual public A{
    public:
    int b_ka_public;
 };
 class C : virtual public A{
    public:
    int c_ka_public;
 };
 class D : public B,public C{
    public:
    int d_ka_public;
    
    void show(){
        cout<<a_ka_public; // only one instance of a will create;
    }
 };
 int main(){
    D d;
    d.a_ka_public = 10;
    d.show();
 }
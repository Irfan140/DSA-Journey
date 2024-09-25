#include<iostream>
using namespace std;
void fun(int a,int n){
    if(a>n) return;
  cout<<a<<endl;
   fun(a+1,n);
}
int main(){
    int n;
    cout<<"Enter: ";
    cin>>n;
    fun(1,n);
    }
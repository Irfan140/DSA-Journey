#include<iostream>
using namespace std;
void swap(int* x , int* y){
    int temp = *x;
    *x = *y;
    *y = temp;
}
int main(){
    int a;
    cout<<"Enter value: ";
    cin>>a;
    int b;
    cout<<"Enter value: ";
    cin>>b;
    swap(&a,&b);
    cout<<a<<" "<<b;
}
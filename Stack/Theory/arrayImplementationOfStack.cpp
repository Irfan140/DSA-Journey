#include<iostream>
using namespace std;
class Stack{ // user defined Data Structure
    public:
    int arr[5];
    int idx;
    // constructor
    Stack(){
        idx = -1;
    }
    void push(int val){
        if(idx==sizeof(arr)/sizeof(arr[0])){
            cout<<"Stack is Full";
            return;
        }
        idx++;
        arr[idx] = val;
    }
    void pop(){ 
        if(idx==-1){
            cout<<"Stack is Empty";
            return;
        }
        idx--;
        }
    int top() {
        if(idx==-1){
            cout<<"Stack is Empty";
            return -1;
        }
        return arr[idx];
        }
        int size(){
    return idx+1;
        }
   void display(){
    for(int i=0;i<=idx;i++) cout<<arr[i]<<" ";
    cout<<endl;
   }
};
int main(){
   Stack st;
   st.push(10);
   st.push(20);
   st.push(30);
//    cout<<st.size()<<endl;
//    cout<<st.top()<<endl;
//    st.pop();
//    cout<<st.top()<<endl;
   st.display();
}
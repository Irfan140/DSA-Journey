#include<iostream>
#include<vector>
using namespace std;
class Stack{
    public:
    vector<int> arr;
    void push(int val){
        arr.push_back(val);
    }
    void pop(){ 
        if(arr.size()==0){
            cout<<"Stack is Empty";
            return;
        }
        arr.pop_back();
        }
    int top() {
        if(arr.size()==-1){
            cout<<"Stack is Empty";
            return -1;
        }
        return arr[arr.size()-1];
        }
        int size(){
    return arr.size();
        }
    void display(){
    for(int i=0;i<arr.size();i++) cout<<arr[i]<<" ";
    cout<<endl;
   }
};
int main(){
   Stack st;
   st.push(10);
   st.push(20);
   st.push(30);
   cout<<st.size()<<endl;
   cout<<st.top()<<endl;
   st.pop();
   cout<<st.top()<<endl;
}
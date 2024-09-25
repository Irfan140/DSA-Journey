#include<iostream>
#include<stack>
using namespace std;
void pushAtBottom(stack<int>& st,int val){
    stack<int> temp;;
    while(st.size()>0){
        temp.push(st.top());
        st.pop();
    }
    st.push(val);
    while(temp.size()>0){
        st.push(temp.top());
        temp.pop();
    }
}
void print(stack<int>& st){
    stack<int> temp;
    while(st.size()>0){
        cout<<st.top()<<" ";
        temp.push(st.top());
        st.pop();
    }
    while(temp.size()>0){
        st.push(temp.top());
        temp.pop();
    }
    cout<<endl;
}
void reverseStack(stack<int>& st){
    if(st.size()==1) return;
    int x = st.top();
    st.pop();
    reverseStack(st);
    pushAtBottom(st,x);
}
int main(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    reverseStack(st);
    print(st);
    
    
}
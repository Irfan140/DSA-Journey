#include<iostream>
#include<stack>
using namespace std;
void print(stack<int>& st){
    stack<int> temp;;
    while(st.size()>0){
        temp.push(st.top());
        st.pop();
    }
    while(temp.size()>0){
        cout<<temp.top()<<" ";
        st.push(temp.top());
        temp.pop();
    }
    cout<<endl;
   
}
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
int main(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    print(st);
    pushAtBottom(st,100);
    print(st);
    
}
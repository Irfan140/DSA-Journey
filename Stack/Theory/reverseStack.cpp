#include<iostream>
#include<stack>
using namespace std;
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
int main(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
 
    stack<int> temp;
    while(st.size()>0){
        temp.push(st.top());
        st.pop();
    }
    stack<int> temp1;
    while(temp.size()>0){
        temp1.push(temp.top());
        temp.pop();
    }
    while(temp1.size()>0){
        st.push(temp1.top());
        temp1.pop();
    }
    print(st);
    
}
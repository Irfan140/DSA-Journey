#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(100);
    // cout<<st.top()<<endl;

    // printing stack element in reverse order... 
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
}
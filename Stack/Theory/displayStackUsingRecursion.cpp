#include<iostream>
#include<stack>
using namespace std;
void displayRec(stack<int>& st){
    if(st.size()==0) return;
    int x = st.top();
    cout<<x<<" ";
    st.pop();
    displayRec(st);
    // cout<<x<<" ";  //! use this for normal display
    st.push(x);
}

int main(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    displayRec(st);
}
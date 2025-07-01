// interleave the first half with second using only one stack
// eg: 1 2 3 4 5 6 7 8 --> 1 5 2 6 3 7 4 8

#include<iostream>
#include<queue>
#include<stack>
using namespace std;

int main(){
    queue<int> q; // even size stack
    int i = 1;
    while(i <= 8) {
        q.push(i);
        i++;
    }
    stack<int> st;
    /*
    Steps:
    1. takeout first half of queue to stack and again back to queue -> 5 6 7 8 4 3 2 1
    2. now take out the current first half to stack -> 4 3 2 1
    3. push  one stack element and one queue elemet to queue 
    4. Repeat step 3
    5. Reverse the queue element
    */
    int n = q.size();
    while(q.size() > (n/2)) {
        st.push(q.front());
        q.pop();
    }

    while(!st.empty()) {
        q.push(st.top());
        st.pop();
    } 

    while(q.size() > n/2) {
        st.push(q.front());
        q.pop();
    }

    while(!st.empty()){
        q.push(st.top());
        q.push(q.front());
        q.pop();
        st.pop();
    }

    while(!q.empty()) {
        st.push(q.front());
        q.pop();
    }

    while(!st.empty()) {
        q.push(st.top());
        st.pop();
    }

     n = q.size();
    for(int i = 0; i < n; i++){
        cout << q.front() << " ";
        q.push(q.front());
        q.pop();
    }
    cout<< endl;


}
#include<iostream>
#include<queue>
using namespace std;
void remove(queue<int>& q){
    int n = q.size();
    for(int i=0;i<n;i++){
        if(i%2==0) q.pop();
        else{
        int x = q.front();
        q.pop();
        q.push(x);  
        }
    }
}
void display(queue<int>& q){
    int n = q.size();
    for(int i=0;i<n;i++){
        int x = q.front();
        cout<<x<<" ";
        q.pop();
        q.push(x);
    }
    cout<<endl;
}
int main(){
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    display(q);
    remove(q);
    display(q);
    
}
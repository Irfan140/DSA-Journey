#include<iostream>
#include<queue>
using namespace std;
int main(){
    priority_queue<int> pq;
    pq.push(1);
    pq.push(80);
    pq.push(3);
    pq.push(-4);
    cout<<pq.top();
}
#include<iostream>
#include<queue>
using namespace std;
int main(){
    int arr[] = {6,5,3,2,8,10,9};
    int k = 3;
    int n = sizeof(arr)/4;
    vector<int> v;
    priority_queue< int,vector<int>,greater<int> > pq;
    for(int i=0;i<n;i++){
        pq.push(arr[i]);
        if(pq.size()>k) {
            v.push_back(pq.top());
            pq.pop();
        }
    }
    while(pq.size()>0){
        v.push_back(pq.top());
        pq.pop();
    }
    for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
}
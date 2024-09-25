#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;

    v.push_back(6);
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;

    v.push_back(7);
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;

    v.push_back(1);
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;

    v.push_back(3);
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;

    // capacity and size are two different things...
}
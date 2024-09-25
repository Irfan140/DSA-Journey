#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    unordered_map<string,int> m;
    m["irfan"] = 67;
    m["ir"] = 6;
    m["meh"] = 66;
    for(auto p : m) cout<<p.first<<" "<<p.second<<endl;
}
#include<iostream>
#include<vector>
#include<list>
using namespace std;

vector<list<int> > graph;
int v; // no. of vertices

void add_edge(int src, int dest, bool bi_dir = true){
    graph[src].push_back(dest);
    if(bi_dir) graph[dest].push_back(src);
}
void display(){
    for(int i = 0; i < graph.size(); i++){
        cout<<i<<" -> ";
        for(auto el : graph[i]){
            cout<<el<<" ' ";
        }
        cout<<endl;
    }
}

int main(){
    cout<<"Enter no. of Vertices: ";
    cin>>v;
    graph.resize(v,list<int> ());
    cout<<"Enter no. of Edges: ";
    int e; // no. of edges
    cin>>e;
    while(e--){
        int s, d; // source and destination
        cin>>s>>d;
        add_edge(s,d);
    }
    display();
}

// for directed graph give an extra parameter false to add_edge()
#include<bits/stdc++.h>

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

bool dfs(int src, int parent, unordered_set<int> & visited){
    visited.insert(src);
    for(auto neighbour : graph[src]){
        if(visited.count(neighbour) && neighbour!=parent){
            // cycle detected
            return true;
        }
        if(!visited.count(neighbour)) {
            bool result = dfs(neighbour, src, visited);
            if(result) return true;
        }
    }
    return false;
}

bool has_cycle(){
    unordered_set<int> visited;
    bool result = false;
    for(int i=0;i<v;i++){
        if(!visited.count(i)){
            result = dfs(i,-1,visited);
            if(result==true) return true;
        }
    }
    return false;
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
  //  display();
    bool b = has_cycle();
    cout<<b;
}


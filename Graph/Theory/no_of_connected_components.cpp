#include<iostream>
#include<vector>
#include<list>
#include<unordered_set>
using namespace std;

vector<list<int> > graph;
int v; // no. of vertices

void add_edge(int src, int dest, bool bi_dir = true){
    graph[src].push_back(dest);
    if(bi_dir) graph[dest].push_back(src);
}
void dfs(int node,unordered_set<int> &visited){
    visited.insert(node);
        for(auto neighbour :graph[node]){
            if(!visited.count(neighbour)){
                dfs(neighbour,visited);
            }
        }
}
int connected_component(){
    int result = 0;
    unordered_set<int> visited;
    // go to every vertex
    // if from a vertex we can initialise dfs, we get one more connected component
    for(int i=0;i<v;i++){
        if(visited.count(i)==0){
            result++;
                dfs(i,visited);
            }
    }
    return result;
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
    cout<<connected_component();
}

// for weighted give false to add_edge()
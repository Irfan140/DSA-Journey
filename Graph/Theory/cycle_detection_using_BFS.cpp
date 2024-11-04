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

bool bfs(int src){
    unordered_set<int> visited;
    queue<int> qu;
    vector<int> parent(v,-1);
    qu.push(src);
    visited.insert(src);
    while(!qu.empty()){
        int curr = qu.front();
        qu.pop();
        for(auto neighbour : graph[curr]){
            if(visited.count(neighbour)>0 && parent[curr]!=neighbour) return true;
            if(!visited.count(neighbour)){
                visited.insert(neighbour);
                parent[neighbour] = curr;
                qu.push(neighbour);
            }
        }
    }
}

bool has_cycle(){
    unordered_set<int> visited;
    bool result = false;
    for(int i=0;i<v;i++){
        if(!visited.count(i)){
            result = bfs(i);
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


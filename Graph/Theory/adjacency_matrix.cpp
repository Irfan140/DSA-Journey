#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> graph; 


void add_edge(int src, int dest, bool bi_dir = true) {
    graph[src][dest] = 1; 
    if(bi_dir) graph[dest][src] = 1; 
}

void display() {
    for(int i = 0; i < graph.size(); i++) {
        for(int j = 0; j < graph[0].size(); j++) {
            cout << graph[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int v; 
    cout << "Number of vertices: ";
    cin >> v;
    graph.resize(v, vector<int>(v, 0)); 

    int e; 
    cout << "Number of edges: ";
    cin >> e;
    while(e--) {
        int s, d;
        cin >> s >> d; 
        add_edge(s, d);
    }
    display(); 
}


// for unweighted undirected graph
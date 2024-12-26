#include <iostream>
#include <vector>
using namespace std;

vector<vector<pair<int, int>>> graph;

void add_edge(int src, int dest, int wt, bool bi_dir = true) {
    graph[src][dest] = {1, wt};
    if (bi_dir) graph[dest][src] = {1, wt};
}

void display() {
    for (int i = 0; i < graph.size(); i++) {
        for (int j = 0; j < graph[i].size(); j++) {
                cout << "(" << graph[i][j].first << ", " << graph[i][j].second << ") ";
        }
        cout << endl;
    }
}

int main() {
    int v;
    cout << "Number of vertices: ";
    cin >> v;
    graph.resize(v, vector<pair<int, int>>(v, make_pair(0, 0)));

    int e;
    cout << "Number of edges: ";
    cin >> e;
    while (e--) {
        int s, d, wt;
        cin >> s >> d >> wt;
        add_edge(s, d, wt);
    }
    display();
}

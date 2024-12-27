#include <iostream>
#include <vector>
using namespace std;

// Each pair<int, int> represents: (weight, direction)
// Direction: 1 for source, -1 for destination, 0 if not part of the edge
vector<vector<pair<int, int>>> incidenceMatrix;

void add_edge(int src, int dest, int weight, int edgeIndex) {
    incidenceMatrix[src][edgeIndex] = {weight, 1};  // Source vertex with weight
    incidenceMatrix[dest][edgeIndex] = {weight, -1}; // Destination vertex with weight
}

void display() {
    for (int i = 0; i < incidenceMatrix.size(); i++) {
        for (int j = 0; j < incidenceMatrix[0].size(); j++) {
            cout << "(" << incidenceMatrix[i][j].first << ", " 
                 << incidenceMatrix[i][j].second << ") ";
        }
        cout << endl;
    }
}

int main() {
    int v; 
    cout << "Number of vertices: ";
    cin >> v;

    int e; 
    cout << "Number of edges: ";
    cin >> e;

    // Resize incidence matrix: v rows (vertices) x e columns (edges)
    incidenceMatrix.resize(v, vector<pair<int, int>>(e, {0, 0}));

    for (int i = 0; i < e; i++) {
        int s, d, w;
        cout << "Enter edge (source destination weight): ";
        cin >> s >> d >> w;
        add_edge(s, d, w, i); // Add edge with weight
    }

    cout << "Incidence Matrix:" << endl;
    display();
    return 0;
}

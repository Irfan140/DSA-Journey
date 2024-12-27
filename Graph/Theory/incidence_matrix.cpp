#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> incidenceMatrix;

void add_edge(int src, int dest, int edgeIndex) {
    incidenceMatrix[src][edgeIndex] = 1; // Mark source vertex
    incidenceMatrix[dest][edgeIndex] = 1; // Mark destination vertex
}

void display() {
    for (int i = 0; i < incidenceMatrix.size(); i++) {
        for (int j = 0; j < incidenceMatrix[0].size(); j++) {
            cout << incidenceMatrix[i][j] << " ";
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
    incidenceMatrix.resize(v, vector<int>(e, 0));

    for (int i = 0; i < e; i++) {
        int s, d;
        cout << "Enter edge (source destination): ";
        cin >> s >> d;
        add_edge(s, d, i); // Add edge i
    }

    cout << "Incidence Matrix:" << endl;
    display();
    return 0;
}


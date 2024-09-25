#include<iostream>
#include<vector>
#include<algorithm> // Include algorithm header for sort
using namespace std;

int main() {
    vector<int> v;
    v.push_back(9);
    v.push_back(1);
    v.push_back(7);

    cout << v.at(2); // Accessing element at index 2 using at()

    sort(v.begin(), v.end());

    for (int i = 0; i < v.size(); i++) {
        cout << v.at(i) << " ";
    }
}

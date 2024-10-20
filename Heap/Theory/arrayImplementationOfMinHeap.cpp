#include<iostream>
using namespace std;

class MinHeap {
public:
    int arr[50];
    int idx;

    MinHeap() {
        idx = 1;
    }

    int top() {
        return arr[1];  // The root is at index 1
    }

    void push(int x) {
        arr[idx] = x;
        int i = idx;
        idx++;
        // Swapping with parent till we reach the root
        while (i != 1) {
            int parent = i / 2;
            if (arr[i] < arr[parent]) swap(arr[i], arr[parent]);
            else break;
            i = parent;
        }
    }

    void pop() {
        if (idx == 1) return; // Empty heap check
        idx--;
        arr[1] = arr[idx]; // Replace root with last element
        int i = 1;
        while (true) {
            int left = 2 * i, right = 2 * i + 1;
            if (left >= idx) break; // No children, stop
            if (right >= idx) { // Only left child exists
                if (arr[i] > arr[left]) swap(arr[i], arr[left]);
                break;
            }
            // Both children exist
            if (arr[left] < arr[right]) {
                if (arr[i] > arr[left]) {
                    swap(arr[i], arr[left]);
                    i = left;
                }
                else break;
            }
            else {
                if (arr[i] > arr[right]) {
                    swap(arr[i], arr[right]);
                    i = right;
                }
                else break;
            }
        }
    }

    void display() {
        for (int i = 1; i <= idx - 1; i++) cout << arr[i] << " ";
        cout << endl;
    }

    int size() {
        return idx - 1;
    }
};

int main() {
    MinHeap pq;
    pq.push(10);
    pq.push(20);
    pq.push(11);
    pq.push(30);
    pq.push(40);
    pq.push(12);
    pq.push(4);
    pq.display();        // Displays the current heap
    cout << "Top: " << pq.top() << endl; // Shows the minimum element (root)
    pq.pop();            // Removes the top (min) element
    pq.display();        // Displays the heap after pop
}

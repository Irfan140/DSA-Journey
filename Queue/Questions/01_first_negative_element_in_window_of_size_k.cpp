#include<iostream>
#include<queue>

using namespace std;

int main() {
    int arr [] = {0, -1, -2, 3, 4, -5, 6, 4, 7, -8};
    int n = sizeof(arr)/ sizeof(arr[0]);
    int k = 3; // window length
    queue<int> q;
    int ans[n-k+1];
    for(int i = 0; i < n; i++) {
        if(arr[i] < 0) {
                q.push(i); // push index of negative numbers
        }
    }

    for(int i = 0; i <= n-k; i++) {
        while(q.size() >0 && q.front() < i) q.pop();
        if(q.size() >0 && q.front() >= i && q.front() < i+k) {
            // that index element is in the window
            ans[i] = arr[q.front()];
        }
        else {
            ans[i] = 0;
        }
        if(q.size() == 0) ans[i] = 0;
        
    }

    for(int el : ans) cout << el << " ";
    cout << endl;
}
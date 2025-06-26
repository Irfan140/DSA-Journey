#include<iostream>
#include<vector>
using namespace std;

int main() {
    int arr[] = {2, -3, 4, 4, -7, -1, 4, -2, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3; // or 4

    vector<int> ans;

    // Finding first negative in first window
    int p = -1;
    for (int i = 0; i < k; i++) {
        if (arr[i] < 0) {
            p = i;
            break;
        }
    }

    if (p != -1)
        ans.push_back(arr[p]);
    else
        ans.push_back(0); // or -1 if you prefer

    int i = 1, j = k;

    while (j <= n - 1) {
        // if p went out of window
        if (p < i) {
            p = -1;
            for (int idx = i; idx <= j; idx++) {
                if (arr[idx] < 0) {
                    p = idx;
                    break;
                }
            }
        }

        if (p != -1)
            ans.push_back(arr[p]);
        else
            ans.push_back(0);

        i++;
        j++;
    }

    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << " ";
}

#include<iostream>
#include<climits>
using namespace std;

int main() {
    int arr[] = {7, 1, 2, 5, 8, 4, 9, 3, 6};
    int k = 3;
    int n = 9;
    int maxSum = INT_MIN;
    int maxIdx = -1; // to findout from which index the window starts
    for(int i = 0; i <= n-k; i++) {
        int sum = 0;
        for(int j = i; j < i+k; j++) {
            sum += arr[j];
        }
        if(maxSum < sum) {
            maxSum = sum;
            maxIdx = i;
        }
    }
    cout << maxSum << endl << maxIdx << endl;
}
#include<iostream>
#include<climits>
using namespace std;

int main() {
    int arr[] = {7, 1, 2, 5, 8, 4, 9, 3, 6};
    int k = 3;
    int n = 9;
    int maxSum = INT_MIN;
    int maxIdx = 0; // to findout from which index the window starts
    int prevSum = 0;
    // finding prevSum
    for(int i = 0; i < k; i++) prevSum += arr[i];
    
    maxSum = prevSum; // it may be our result

    int i = 1; // points at window start
    int j = k; // points at window end
    while(j < n) {
        int currSum = prevSum + arr[j] - arr[i-1];
        if(maxSum < currSum) {
            maxSum = currSum;
            maxIdx = i;
    }
    prevSum = currSum;
    i++;
    j++;
    }
    cout << maxSum << endl << maxIdx << endl;
}
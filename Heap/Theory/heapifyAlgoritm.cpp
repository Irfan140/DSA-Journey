//! We to make minHeap
#include<iostream>
#include<vector>
using namespace std;
void print(int arr[],int n){
    for(int i=1;i<n;i++) cout<<arr[i]<<" ";
    cout<<endl;
}
void heapify(int i,int arr[],int n){
    while (true) {
            int left = 2 * i, right = 2 * i + 1;
            if (left >= n) break; // No children, stop
            if (right >= n) { // Only left child exists
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
int main(){
    int arr[] = {-1, 10, 2, 14, 11, 1, 4}; // here -1 doesnot matter
    int n = sizeof(arr) / sizeof(arr[0]);
    for(int i = n/2; i >= 1; i--) heapify(i,arr,n);
    print(arr,n);
}
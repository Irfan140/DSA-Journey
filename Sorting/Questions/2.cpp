// Push zeroes to end while maintaining the relative orders of elements
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size: ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
           if(arr[j]==0) swap(arr[j],arr[j+1]);
        }
    }
      for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
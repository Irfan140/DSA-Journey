#include<iostream>
#include<climits>
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
        int min=INT_MAX;
        int idx = -1;
        // minimum element calculation
        for(int j=i;j<n;j++){
          if(arr[j]<min) {
            min=arr[j];
            idx=j;
            }
        }
        swap(arr[i],arr[idx]);
    }
    // For each loop..
     for(int a:arr){
        cout<<a<<" ";
    }
}
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
    
   for(int i=1;i<n;i++){
      int j=i;
      while(j>=1 && arr[j]<arr[j-1]){
        swap(arr[j],arr[j-1]);
        j--;
      }
   }
    // For each loop..
     for(int a:arr){
        cout<<a<<" ";
    }
}
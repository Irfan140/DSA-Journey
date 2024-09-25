#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements od array:"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x;
    cout<<"Enter targer: ";
    cin>>x;
    bool f=0;
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            f=1;
            break;
        }
    }
    if(f==0) cout<<x<<" is not present in array";
    else cout<<x<<" is present in array";
}
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    int n;
    cout<<"Enter size: ";
    cin>>n;
    cout<<"Enter elements: ";
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    vector<int>a(n);
    a[0]=-1;
    int max=v[0];
    for(int i=1;i<n;i++){
       a[i]=max;
        if(max<v[i]) max=v[i];
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
       
}
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v1;
    int n;
    cout<<"Enter size: ";
    cin>>n;
    cout<<"Enter elements: ";
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v1.push_back(x);
    }

    vector<int>v2(v1.size());
    for(int i=0;i<n;i++){
        v2[i]=v1[v1.size()-1-i];
    }

    for(int i=0;i<n;i++){
        cout<<v2[i]<<" ";
    }
}
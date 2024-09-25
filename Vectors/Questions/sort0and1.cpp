#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>&a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return;

}
int main(){
    int n;
    cout<<"Enter size: ";
    cin>>n;
    vector<int>v;
    cout<<"Enter elements only 0 and 1: ";
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    for(int i=0,j=n-1;i<=j;i++,j--){
        if(v[j]==1) j--;
        if(v[i]==0) i++;
        if(i>j) break;
        if(v[i]==1 && v[j]==0) {
            int temp=v[i];
            v[i]=v[j];
            v[j]=temp;
        }
    }
    display(v);

}
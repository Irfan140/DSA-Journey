// Move all negative numbers to begining and positive to end with constant extra spaces.

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
    cout<<"Enter elements +ve and -ve: ";
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    int i=0;
    int j=n-1;
    while(i<=j){
        if(v[i]<0) i++;
        if(v[j]>0) j--;
        if(i>j) break;
        if(v[i]>0 && v[j]<0) {
            int temp=v[i];
            v[i]=v[j];
            v[j]=temp;
        }
    }
    display(v);

}
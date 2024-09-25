#include<iostream>
#include<vector>
using namespace std;

void display(vector<int>&a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
      }
      cout<<endl;
}
void reversePart(int i,int j,vector<int>&v){

     while(i<=j){
        // swap v[i] and v[j]..
        int temp=v[i];
        v[i]=v[j];
        v[j]=temp;
        i++;
        j--;
     }
     return;
}

int main(){
      int n;
      cout<<"Enter size: ";
      cin>>n;
      vector<int>v;
      cout<<"Enter elements: ";
      for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
      }
     
     display(v);
     reversePart(0,3,v);
     display(v);
}
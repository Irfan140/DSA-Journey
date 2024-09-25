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
  int idx=-1;
  for(int i=n-2;i>=0;i--){
    if(v[i]<v[i+1]) {
        idx=i;
        break;
    }
  }
  if(idx==-1){ // if array is already the greatest than return array in sorted order
      reversePart(0,n-1,v);
  }
  else {
    // finding just greater element than pivot index
    int j=-1;
     for(int i=idx+1;i<n;i++){
        if(v[i]>v[idx]){
            idx=i;
            break;
        }
     }
    reversePart(idx+1,n-1,v);
    swap(v[idx],v[j]);
  }
  display(v);
  
}
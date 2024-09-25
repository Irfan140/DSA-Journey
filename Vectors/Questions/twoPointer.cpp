// write a program to reverse an array without using extra array..
#include<iostream>
#include<vector>
using namespace std;
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
     int i=0;
     int j=n-1;
     while(i<=j){
        // swap v[i] and v[j]..
        int temp=v[i];
        v[i]=v[j];
        v[j]=temp;
        i++;
        j--;
     } 
     for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
      }
}
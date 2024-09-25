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
void reverse(vector<int>&b,int x,int y){
    for(int i=x,j=y;i<=j;i++,j--){
         int temp=b[i];
         b[i]=b[j];
         b[j]=temp;
    }
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
    int k;
    cout<<"Enter value of k: ";
    cin>>k;
    // steps
    k=k%n;
    reverse(v,0,n-1);
    reverse(v,0,k-1);
    reverse(v,k,n-1);
    display(v);
    

}
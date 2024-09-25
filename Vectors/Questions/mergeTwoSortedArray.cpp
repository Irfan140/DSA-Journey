#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int> &a,vector<int> &b,vector<int> &res){
    int i=0; // for a
    int j=0; // for b
    int k=0; // for res
    while(i<a.size() && j<b.size()){
        if(a[i]<b[j]){
            res[k]=a[i];
            k++;
            i++;
        }
        else{
            // b[j] <=a[i]
            res[k]=b[j];
            k++;
            j++;
        }
    }
        if(i==a.size()){
            while(j<b.size()) {
                res[k]=b[j];
                k++;
                j++;
            }
            if(j==b.size()){ // b is at end
            while(i<a.size()) {
                res[k]=a[i];
                k++;
               i++;
            }
        }
        }
    }

int main(){
    int arr[]={1,4,5,8}; // sorted array
    int n1=sizeof(arr)/4;
    int brr[]={2,3,6,7,10,12}; // sorted array
    int n2=sizeof(brr)/4;

    
    vector<int> a(arr,arr+n1); // all elements in array gets copied to vector
    vector<int> b(brr,brr+n2);
    vector<int> res(n1+n2);
    merge(a,b,res);
    
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
    
}
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
            }
            if(j==b.size()){ // b is at end
            while(i<a.size()) {
                res[k]=a[i];
                k++;
               i++;
            }
        }
        }
    

void mergeSort(vector<int> &v){
    int n=v.size();
    if(n==1) return; // base case
    int n1=n/2;
    int n2=n-n/2;
    vector<int> a(n1),b(n2); // declaring two vectors

    // copy pasting
    for(int i=0;i<n1;i++){
        a[i]=v[i];
    }
    for(int i=0;i<n2;i++){
        b[i]=v[i+n1];
    }

    // Magic  -> recursion

    mergeSort(a);
    mergeSort(b);

    // merge sorted array
     merge(a,b,v);
     a.clear();
     b.clear();
     
}
int main(){
    int arr[]={5,1,3,0,4,9,6}; // sorted array
    int n=sizeof(arr)/sizeof(arr[0]);

    vector<int> v(arr,arr+n); // all elements in array gets copied to vector
    mergeSort(v);

    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    
}

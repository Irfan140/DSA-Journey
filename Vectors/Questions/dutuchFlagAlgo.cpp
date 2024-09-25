// three pointer algorithm
// sort the array of 0 , 1 and 2..
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
    cout<<"Enter elements only 0 ,1 and 2: ";
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    int lo=0;
    int mid=0;
    int hi=n-1;
    // think about mis
    // 0 t0 lo-1  -> 0, hi-1 to end  -> 2
    // lo to mid-1 -> 1
    while(mid<=hi){
        if(v[mid]==2){
            // swap
            int temp=v[mid];
            v[mid]=v[hi];
            v[hi]=temp;
            hi--;
        }
        else if(v[mid==0]){
            int temp=v[mid];
            v[mid]=v[lo];
            v[lo]=temp;
            lo++;
            mid++;
        }
        // if(v[mid]==1) 
        else mid++;
    }
    display(v);

}
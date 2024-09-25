#include<iostream>
#include<climits>
using namespace std;
void printMax(int arr[],int n,int i,int max){
    if(i==n) {
        cout<<max;
        return;
    }
    if(max<arr[i]) max=arr[i];
    printMax(arr,n,i+1,max);
}
int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/4;
    printMax(arr,n,0,INT_MIN);
}
#include<iostream>
using namespace std;
int main(){
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int m=3,n=3;
    int minr=0;
    int maxr=m-1;
    int minc=0;
    int maxc=n-1;
    while(minr<=maxr && minc<=maxc){
        // right
        for(int j=minc;j<=maxc;j++){
            cout<<arr[minr][j]<<" ";
        }
        minr++;
        // Down
        if(minr>maxr || minc>maxc) break;
        for(int i=minr;i<=maxr;i++){
            cout<<arr[i][maxc]<<" ";
        }
        maxc--;
        // Left
        if(minr>maxr || minc>maxc) break;
        for(int j=maxc;j>=minc;j--){
            cout<<arr[maxr][j]<<" ";
        }
        maxr--;
        // Up
        if(minr>maxr || minc>maxc) break;
        for(int i=maxr;i>=minr;i--){
            cout<<arr[i][minc]<<" ";
        }
        minc++;
    }
    
    }
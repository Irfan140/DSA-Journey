#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5};
    int* ptr =arr; //giving address

    // for(int i=0;i<5;i++){
    //     cout<<ptr[i]<<" ";
    // }
    // cout<<endl;

// Changing elements using pointer...

    // *ptr=8; // ptr[0]=8;
    // *ptr++; // pointing to 1st element
    // *ptr=9;
    // *ptr--;

    // for(int i=0;i<5;i++){
    //     cout<<ptr[i]<<" ";
    // }

// printing element using pointer...
    for(int i=0;i<=4;i++){
        cout<<*ptr<<" ";
        ptr++;
    }
}
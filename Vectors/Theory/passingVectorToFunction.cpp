#include <iostream>
#include <vector>
using namespace std;
// void change(vector<int>a){
//     // v vector is copied to a vector..both are different
//     // each time we pass we get new vector
//    a[0]=200;
//    for(int i=0;i<a.size();i++){
//      cout<<a[i]<<" ";
//    }
//    cout<<endl;
// }

void change(vector<int>&a){
   // by using & we get the same vector that is passed to function...
   a[0]=200;
}


int main(){
    vector<int>v;
    v.push_back(9);
    v.push_back(3);
    v.push_back(1);

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    change(v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

}

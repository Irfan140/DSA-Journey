#include<iostream>
#include<vector>
using namespace std;
int main(){
   vector< vector<int> >v(3,vector<int> (4,20));
   // 3 rows and 4 columns..
 for(int i=0;i<3;i++){
    for(int j=0;j<4;j++){
        cout<<v[i][j]<<" ";
    }
    cout<<endl;
 }
cout<<endl;
cout<<v.size()<<endl; // vector size
cout<<v[0].size(); // menas 0th position main jo vector hain uska size...
}
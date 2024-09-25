#include<iostream>
#include<vector>
using namespace std;
void change2D(vector <vector<int> >&v){
  v[1][1]=100;
//   cout<<v.size();
}
int main(){
    // give some gap..
    vector <vector<int> >v;

    vector<int>v1;
    v1.push_back(1);

    vector<int>v2;
    v2.push_back(2);
    v2.push_back(3);

    vector<int>v3;
     v3.push_back(9);
     v3.push_back(8);
     v3.push_back(7);

// pushing vector to vector..
     v.push_back(v1);
     v.push_back(v2);
     v.push_back(v3);
// v becomes
// v= {{1},{2,3},{7,8,9}}

cout<<v[1][1]<<endl;
change2D(v);
cout<<v[1][1]<<endl;
}
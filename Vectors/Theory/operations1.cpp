#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;

    v.push_back(6);

    v.push_back(7);

    v.push_back(1);

    v.push_back(3);


    v.pop_back(); // last element gets removed..
    // size is reduced but capacity doesnot change....

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}
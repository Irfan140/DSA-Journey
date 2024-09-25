#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v; // we donot need to mention size

    v.push_back(6); // 6 is inserted from back to vector(size=1)

    v.push_back(1); // 2 is inserted from back to vector(size=2)
    v.push_back(9); 
    // we cannot initialise by v[0]=6;

v.push_back(0);
    //after v.push_back[0] we can excess using v[0]..
    cout << v[0] << " ";
    cout << v[1] << " ";
    cout << v[2] << " ";
    cout << v[3] << " ";
    
}

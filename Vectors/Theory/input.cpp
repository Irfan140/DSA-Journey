#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // vector<int> v(5);

     //! taking input in vector...(this is possible only if size is mentioned earlier )
    // cout << "Enter elements: ";
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cin >> v[i];
    // }
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] << " ";
    // }
    

// taking input when size is not mentioned earlier
    vector<int>v;
cout<<"Enter elements: ";
    for(int i=0;i<5;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }

    for(int i=0;i<5;i++){
        cout<<v[i]<<" ";
    }
}
#include<iostream>
using namespace std;
int main(){
    // we can also use as character array..
    string x;
    // cin>>x; // only take the words before space..
    getline(cin,x); // takes full string an input..
    cout<<x;
}
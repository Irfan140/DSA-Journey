#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
//  string str ="Irfan";

//  cout<<str.length()<<endl; // does not counts null character.. 

//  str.push_back('e'); // only one character
//  cout<<str<<endl;

//  str.pop_back();
//  cout<<str<<endl;


// + operator

// string x ="Irfan ";
// string y ="Mehmud";

// x+=y;
// cout<<x<<endl;

// x += " is a student"; // + operator used for modify (not append any number)
// cout<<x;


// string str = "Irfan";
// reverse(str.begin(),str.end());
// cout<<str;


string str ="Irfan";
reverse(str.begin()+1,str.begin()+4); // revere from idex 1 to index 3 ...
cout<<str;

}
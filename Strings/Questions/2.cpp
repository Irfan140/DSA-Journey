// Given two strings s and t , return true if t is an anagram of s and false otherwise 
// anagram means s and t can be rearranged simultaneosly to make one another
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
string s = "abc";
string t = "cba";

sort(s.begin(),s.end());
sort(t.begin(),t.end());

if(s==t) cout<<true;
else cout<<false;
}
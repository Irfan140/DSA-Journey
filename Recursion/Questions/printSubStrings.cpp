#include<iostream>
#include<vector>
using namespace std;
void helper(string ans,string oringinal,vector<string> &v){
  if(oringinal=="") {
         v.push_back(ans);
         return;
  }
   char ch = oringinal[0];
   helper(ans+ch,oringinal.substr(1),v);
   helper(ans,oringinal.substr(1),v);
}
int main(){
    string s;
    printf("Enter string: ");
    cin>>s;
    vector<string> v;
    helper("",s,v);
    for(string e : v) cout<<e<<endl;
}
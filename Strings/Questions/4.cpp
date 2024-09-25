// Giveb a sentance str , return the word that is accuring most number of times in that sentance.
#include<iostream>
#include<string>
#include<sstream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
string str ="Irfan Mehmud is a boy. He is also a man";
stringstream ss(str);
string temp;
vector<string> v;
 while(ss>>temp){
    v.push_back(temp);
 }
 sort(v.begin(),v.end());

 int maxCount=1;
 int count =1;
 for(int i=1;i<v.size();i++){
    if(v[i]==v[i-1]) count++;
    else count=1;
    maxCount = max(maxCount,count);

 }
 count =1;
 for(int i=1;i<v.size();i++){
    if(v[i]==v[i-1]) count++;
    else count=1;
    if(count==maxCount){
        cout<<v[i]<<" "<<maxCount<<endl;
    }

 }
}
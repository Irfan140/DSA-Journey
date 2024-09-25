#include<iostream>
#include<stack>
using namespace std;
int priority(char ch){
    if(ch=='+' || ch=='-') return 1;
    else return 2; // for * and /
}
string solve(string val1,string val2,char ch){
    // we have to store prefix in the ans
    // prefix is -> op val1 val2
    string s = "";
    s += val1;
    s += val2;
    s.push_back(ch);
    return s;
}
int main(){
    string s = "(7+9)*4/8-3"; // infix expression
    stack<string> val;
    stack<char> op;
    for(int i=0;i<s.size();i++){
        // check if s[i] is a digit (0-9)
        if(s[i]>=48 && s[i]<=57) val.push(to_string(s[i]-48));
        else{
            // not a digit
            if(op.size()==0) op.push(s[i]);
           else if(s[i]=='(') op.push(s[i]);
           else if(op.top()=='(') op.push(s[i]);
           else if(s[i]==')'){
                while(op.top()!='('){
                    char ch = op.top();
                    op.pop();
                    string val2 = val.top();
                    val.pop();
                    string val1 = val.top();
                    val.pop();
                    string ans = solve(val1,val2,ch);
                    val.push(ans);
                }
                op.pop();
            }
            else if(priority(s[i])>priority(op.top())) op.push(s[i]);
            else{
                // priority(s[i])<=priority(op.top())
                while(op.size()>0 && priority(s[i])<=priority(op.top())){
                    char ch = op.top();
                    op.pop();
                    string val2 = val.top();
                    val.pop();
                    string val1 = val.top();
                    val.pop();
                    string ans = solve(val1,val2,ch);
                    val.push(ans);
                }
                op.push(s[i]);
            }
        }
    }
   
    while(op.size()>0){
        char ch = op.top();
         op.pop();
         string val2 = val.top();
         val.pop();
         string val1 = val.top();
        val.pop();
        string ans = solve(val1,val2,ch);
         val.push(ans);
    }
    cout<<val.top();
}
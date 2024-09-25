#include<iostream>
using namespace std;
void fun(int x=7,int y=8){ 
     // 7 is now default value of x
    // 8  is now default value of y
    // we must give default values to all arguments , if not then will get error
    cout<<x<<" "<<y;
}
int main(){
    fun(); // now if we pass any values here it will not affect the default values
}
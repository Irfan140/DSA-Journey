#include<iostream>
using namespace std;
class Vehicle{ // base class , parent class
    public:
    int tyreSize;
    int engineSize;
    int lights;
    string companyName;
};

class Bike : public Vehicle{ // derived class , child class
    public:
    int handleSize;
    
};
int main(){
   Bike honda;
   honda.handleSize = 5;
   honda.engineSize = 10;
   honda.companyName="honda";
   cout<<honda.handleSize<<endl;

   
}
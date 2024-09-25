#include<iostream>
using namespace std;
int main(){
    class Player{
        public:
        int score; // data members
        int health;
        
        // member function
        void showHealth(){
            cout<<health;
        }
        
    };
    Player amit; // amit is object
    amit.score=90;
    amit.health=100;
    
    cout<<amit.health<<endl;
    amit.showHealth();
}
#include<iostream>
using namespace std;
int main(){
    class Player{
        private:
        int score;
        int health;

        public:
        // setter
        void setscore(int s){
            score=s;
        }

        void setHealth(int h){
            health=h;
        }
        // getter

        int getScore(){
            return score;
        }
        int getHealth(){
            return health;
        }
    };
    Player amit;

    amit.setHealth(199);
    cout<<amit.getHealth()<<endl;
}
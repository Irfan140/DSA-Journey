#include<iostream>
using namespace std;
class Gun{
    public:
   int ammo;
   int damage;
   int scope;
};
class Player{
        private:
        int health;
        int age;
        int score;
        bool alive;
        Gun gun;

        public:
        //getter
        int getHealth(){
            return health;
        }
        int getAge(){
            return age;
        }
        int getScore(){
            return score;
        }
        int setIsAlive(){
            return alive;
        }
        Gun getGun(){
            return gun;
        }
        // setter
        void setHealth(int health){
               this->health=health;
        }
        void setAge(int age){
             this->age=age;
        }
        void setScore(int score){
             this->score=score;
        }
        void setIsAlive(bool alive ){
             this->alive=alive;
        }
        void setGun(Gun gun){
            this->gun=gun;
        }
    };
    
int main(){
    


    Player harsh; 
    Player raghav;

    harsh.setAge(20);
    harsh.setHealth(100);
    harsh.setIsAlive(true);
    harsh.setScore(25);

    raghav.setAge(10);
    raghav.setHealth(150);
    raghav.setIsAlive(false);
    raghav.setScore(50);

   Gun ak47;
   ak47.ammo=100;
   ak47.damage=50;
   ak47.scope=8;

   Gun awm;
   awm.ammo=70;
   awm.damage=100;
   awm.scope=6;

   harsh.setGun(ak47);
   raghav.setGun(awm);


   


}
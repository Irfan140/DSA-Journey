#include<iostream>
using namespace std;

class Player{
        private:
        int health;
        int age;
        int score;
        bool alive;

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

   Player players[2]={harsh,raghav}; // array of objects
   cout<<players[0].getAge()<<endl;
   cout<<players[0].getHealth();

   

}
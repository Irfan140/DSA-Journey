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
    int addScore(Player a,Player b){
        return a.getScore()+b.getScore();

    }
    Player maxScore(Player a,Player b){
        if(a.getScore()>b.getScore()) return a;
        else return b;
    }
int main(){
    


    Player harsh; // object creation statically
    Player raghav;

    harsh.setAge(20);
    harsh.setHealth(100);
    harsh.setIsAlive(true);
    harsh.setScore(25);

    raghav.setAge(10);
    raghav.setHealth(150);
    raghav.setIsAlive(false);
    raghav.setScore(50);

    cout<<addScore(harsh,raghav)<<endl;
   Player sanket =  maxScore(harsh,raghav);
   cout<<sanket.getScore()<<endl<<endl; // same as harsh

   // dynamic memory allocation
   Player *urvi;
   urvi=new Player; // run time allocation

   Player urviObject = *urvi; // we get the value of urvi
   urviObject.setAge(100);
   cout<<urviObject.getAge();
}
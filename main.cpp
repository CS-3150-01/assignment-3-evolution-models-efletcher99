#include <stdio.h>
using namespace std;

int creatures;

class Actions{
    public: 
        void die();
        void reproduce();
};

class Creature: public Actions{
    int dieChance, reproduceChance, position;

    public: 
        void die(int dieChance){

        }
        void reproduce(int reproduceChance){

        }
        void setDieChance(int dc){
            dieChance = dc;
        }
        int getDieChance(){
            return dieChance;
        }
        void setReproduceChance(int rc){
            reproduceChance = rc;
        }
        int getReproduceChance(){
            return reproduceChance;
        }
        void setPosition(int pos){
            position = pos;
        }
        int getPostion(){
            return position;
        }

};

class World: public Actions{
    public:
        
        void die(int dieChance){

        }
        void reproduce(int reproduceChance){

        }
        
        void createCreature(Creature* c, int rC, int dC){
        }
};

int main(){
   
    return 0;
}
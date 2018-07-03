#include <iostream>
#include <string>
#include <ctime>
#include <math.h>

class Character{
    int attak;
    int block;
public:
    std::string name;
    int health;
    Character(std::string name, int health, int attak, int block){
        this->name = name;
        this->health = health;
        this->attak = attak;
        this->block = block;
    }

    int Attack(){
        return std::rand()%this->attak;
    }

    int Block(){
        return std::rand()%this->block;
    }
};

class Battle{
public:
    static void StartFight(Character& character1, Character& character2){
        while(true){
            if(Battle::GetAttackResult(character1, character2).compare("Game Over") == 0){
                std::cout << "Game Over\n";
                break;
            }
            if(Battle::GetAttackResult(character2, character1).compare("Game Over") == 0){
                std::cout << "Game Over\n";
                break;
            }
        }
    }

    static std::string GetAttackResult(Character& characterA, Character& characterB){
        int characterAAttkAmt = characterA.Attack();
        int characterBBlockAmt = characterB.Block();
        int damage2WarriorB = ceil(characterAAttkAmt - characterBBlockAmt);

        damage2WarriorB = (damage2WarriorB <= 0) ? 0 : damage2WarriorB;
        characterB.health = characterB.health - damage2WarriorB;
        std::cout << characterA.name << " attacks " << characterB.name << " and deals " << damage2WarriorB << " damage\n";
        std::cout << characterB.name << " is down to " << characterB.health << " health\n";

        if(characterB.health <= 0){
            std::cout << characterB.name << " has died and " << characterA.name << " is Victorious\n";
            return "Game Over";
        } else {
            return "Fight Again";
        }
    }
};

int main(){
    srand(time(NULL));

    std::string name;
    int health, damage, block;

    std::cout << "Enter the name, health, damage and block stats of Character 1\n";
    std::cin >> name >> health >> damage >> block;
    Character first(name, health, damage, block);

    std::cout << "\nEnter the name, health, damage and block stats of Character 2\n";
    std::cin >> name >> health >> damage >> block;
    Character second(name, health, damage, block);

    Battle::StartFight(first, second);

    return 0;
}

#include <iostream>
#include "Player.h"

void DisplayPlayer(const Player &player){
    std::cout << player << std::endl;
}

int main() {
    char name []{'A','m','i','r','\0'};

    Player p(name,12412);

    std::cout << p << std::endl;
    DisplayPlayer(p);

    p.setScore(100);

    char name2[] {'A','n','a','n','\0'};
    Player p2(name2, 123412);
    p2.setScore(100);

    p = p2;

    DisplayPlayer(p);

    return 0;
}

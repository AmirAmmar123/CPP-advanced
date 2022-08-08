#include <iostream>
#include "Player.h"
#include <vector>
#include <algorithm>
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

    p = Player(name2,10);

    DisplayPlayer(p);

    std::vector<Player> v_p;
    v_p.emplace_back(name, 10);
    v_p.emplace_back(name2, 10);

    std::for_each(v_p.begin(),v_p.end(), DisplayPlayer);


    return 0;
}

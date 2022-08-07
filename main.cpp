#include <iostream>

#include "Player.h"
int main() {
    char name []{'A','m','i','r'};

    Player p(name,12412);

    std::cout << p << std::endl;

    return 0;
}

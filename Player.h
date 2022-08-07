//
// Created by merom on 8/7/2022.
//

#ifndef C___ADVANCED_PLAYER_H
#define C___ADVANCED_PLAYER_H

#include <cctype>
#include <iostream>

class Player {


public:
     ~Player();
    Player()= default;
    explicit Player(char * pName = nullptr, unsigned int pid = 0);
    Player(const Player & other);
    friend std::ostream &operator<<(std::ostream & os, const Player& player);
    char * get_name() const;
    unsigned int get_id() const;
    unsigned int get_score() const;

private:
    char * name{};
    unsigned int id{};
    unsigned int score{};

};


#endif //C___ADVANCED_PLAYER_H

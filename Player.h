//
// Created by merom on 8/7/2022.
//

#ifndef C___ADVANCED_PLAYER_H
#define C___ADVANCED_PLAYER_H

#include <cctype>
#include <iostream>

class Player {


public:

// constructors
     ~Player();
    Player()= default;
    explicit Player(char * pName = nullptr, unsigned int pid = 0);

// copy constructor
    Player(const Player & other);
// copt assignment
    Player &operator=(const Player &rhs);
// getters
    char * get_name() const;
    unsigned int get_id() const;
    unsigned int get_score() const;

// setters
    void setName(char *name);

    void setId(unsigned int id);

    void setScore(unsigned int score);
// class friends
    friend std::ostream &operator<<(std::ostream &os, const Player &player);

private:
    char * name{};
    unsigned int id{};
    unsigned int score{};

};


#endif //C___ADVANCED_PLAYER_H

//
// Created by merom on 8/7/2022.
//

#include "Player.h"
#include <cstring>

Player::Player(char *pName, unsigned int pid) :
    id(pid),score(0)
{

    name = new char[strlen(pName)+1];
    strcpy(name,pName);
}


Player::Player(const Player &other):id(other.id), score(other.score)
{
    this->name = new char [strlen(other.name)+1];
    strcpy(this->name,other.name);

}

char *Player::get_name() const {return name;}
unsigned int Player::get_id() const {return id;}
unsigned int Player::get_score() const {return score;}


std::ostream &operator<<(std::ostream &os, const Player& player) {
    os << "Name: " << player.get_name() << "\tid: " << player.get_id() << '\n';
    return os;
}


Player::~Player()  {
    delete[] name;
}

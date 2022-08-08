//
// Created by merom on 8/7/2022.
//

#include "Player.h"
#include <cstring>

Player::Player(char pName[], unsigned int pid) :
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


Player::~Player()  {
    delete[] name;
}

void Player::setName(char *name) {
    Player::name = name;
}

void Player::setId(unsigned int id) {
    Player::id = id;
}

void Player::setScore(unsigned int score) {
    Player::score = score;
}

Player &Player::operator=(const Player &rhs) {
    if(this == &rhs){return *this;}
    delete this->name;

    this->name = new char [strlen(rhs.name)+1];
    strcpy(this->name, rhs.name);

    this->score = rhs.score;
    this->id = rhs.id;

    return *this;

}

std::ostream &operator<<(std::ostream &os, const Player &player) {
    os << "name: " << player.name << " id: " << player.id << " score: " << player.score;
    return os;
}

Player::Player(Player &&rhs)  noexcept {
    this->name = rhs.name;
    this->id = rhs.id;
    this->score =rhs.score;

    rhs.name = nullptr;
    rhs.score = 0;
    rhs.id = 0;
}

Player &Player::operator=( Player && rhs) noexcept {
    if(this == &rhs) return *this;

    delete [] this->name;

    this->name = rhs.name;
    this->id = rhs.id;
    this->score =rhs.score;

    rhs.name = nullptr;
    rhs.score = 0;
    rhs.id = 0;

    return *this;
}

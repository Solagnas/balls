//player.cpp
#include <iostream>
#include "../depend/player.hpp"

using namespace std;

const std::string Player::playerPosStr[]={ "Bottom", "Left", "Top", "Right" };

// ==================== Public Methods ====================
// --------------------- Constructors ---------------------
Player::Player() {}
Player::~Player() {}
Player::Player(std::string name, PlayerPosition position) {
    m_name = name;
    m_position = position;
}


// ----------------------- Getters ------------------------
std::string Player::getName() { return m_name; }
std::string Player::getPosStr() { return playerPosStr[m_position]; }
int Player::getPos() { return m_position; }

        
// ----------------------- Setters ------------------------
void Player::setName(std::string name) { m_name = name; }
void Player::setPos(PlayerPosition position) { m_position = position; }


// ----------------------- Printing -----------------------
void Player::print() {
    std::cout << getName() << ", " << getPos() << std::endl;
    std::cout << std::endl;
}

void Player::prettyPrint() {
    std::cout << "Name: " << getName() << std::endl;
    std::cout << "Position: " << getPosStr() << std::endl;
    std::cout << std::endl;
}
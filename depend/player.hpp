#ifndef PLAYER_HPP
#define PLAYER_HPP

using namespace std;

enum PlayerPosition { bottom=0, left, top, right };

class Player {
    private:
        std::string m_name;
        PlayerPosition m_position;
        // Hand
        // Points
        
        static const std::string playerPosStr[4];
        
    public:
        // ------- Constructors -------
        Player();
        ~Player();
        Player(std::string, PlayerPosition);
        
		// --------- Getters ----------
		std::string getName();
		std::string getPosStr();
		int getPos();
		
        // --------- Setters ----------
		void setName(std::string);
		void setPos(PlayerPosition);

        // --------- Printing ---------
        void print();
        void prettyPrint();
};

#endif
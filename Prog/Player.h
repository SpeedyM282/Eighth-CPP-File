/*
Name: Akhadbek Rizakulov
ID: 2010227
Date: 08.03.2021
*/

#include<iostream>
#include<string>
#include"FullName.h"
using namespace std;

#ifndef PLAYER_H
#define PLAYER_H

class Player{
    private:
        string playerID; 
        int matchesPlayed, goalsScored;
    public:
        Player(){playerID = "0000"; matchesPlayed = 0; goalsScored = 0;}

        void setPlayer_ID(string playerID_1){
    		playerID = playerID_1;
		}
        
        string getPlayer_ID() const{
    		return playerID;
		}
        
        void setMatches_Played(int matchesPlayed_1){
    		matchesPlayed = matchesPlayed_1;
		}
        
        int getMatches_Played() const{
    		return matchesPlayed;
		}
        
        void setGoals_Scored(int goalsScored_1){
    		goalsScored = goalsScored_1;
		}
        
        int getGoals_Scored() const{
    		return goalsScored;
		}
        
        friend int increaseGoalsScored(int, Player);
        
        friend void setName(string, string, string, FullName);
        
        friend void getName(FullName);
        
        ~Player(){cout << "Good Bye Player\n";}
};

int increaseGoalsScored(int goals, Player *g){
	g->setGoals_Scored(goals+g->getGoals_Scored()); 
    return goals;
}

void setName(string firstName_1, string middleName_1, string lastName_1, FullName *set){
	set->setFirstName(firstName_1);
	
	set->setMiddleName(middleName_1);
	
	set->setLastName(lastName_1);
}

void getName(FullName *get){
    cout << get->getFirstName() << " " << get->getMiddleName() << " " << get->getLastName() << " ";
}

#endif

/*
Name: Akhadbek Rizakulov
ID: 2010227
Date: 08.03.2021
*/

#include<iostream>
#include<string>
#include<iomanip>
#include"FullName.h"
#include"Player.h"
using namespace std;

int main(){
    int command, goals, playedMatches, scoredGoals;
    string playerID, firstName, middleName, lastName;
   
    FullName myObj;
    
	Player myObj1();
    Player myPlayer;

    for(;;){
    	cout << setfill('-') << setw(55) << "\n";
    	cout << "\t  Players' Information System\n";
    	cout << setfill('-') << setw(55) << "\n";
/*Taking command from the user*/
	    cout << "1. Set player details\n";
	    cout << "2. Display player details\n";
	    cout << "3. Increase player goal scored\n";
	    cout << "0. Exit\n";
	    cout << "Enter any command (0-3): ";
	    cin >> command;
        switch(command){
        	case 1:{
        			cout << setfill('-') << setw(55) << "\n";
			    	cout << "\t  Setting details menu\n";
			    	cout << setfill('-') << setw(55) << "\n";
/*Entering player's information*/        			
					cout << "Enter player's first name: ";
		            cin >> firstName;
		            cout << "Enter player's middle name: ";
		            cin >> middleName;
		            cout << "Enter player's last name: ";
		            cin >> lastName;
		            setName(firstName, middleName, lastName, &myObj);
		            cout << "Enter player's ID number: ";
		            cin >> playerID;
		            myPlayer.setPlayer_ID(playerID);
		            cout << "Enter player's number of played matches: ";
		            cin >> playedMatches;
		            myPlayer.setMatches_Played(playedMatches);
		            cout << "Enter player's scored goals: ";
		            cin >> scoredGoals;
		            myPlayer.setGoals_Scored(scoredGoals);
		    		cout << "\nEnter 0 to exit: ";
		    		cin >> command;
					break;		
				}
        	case 2:{
        			cout << setfill('-') << setw(55) << "\n";
			    	cout << "\t  Displaying details menu\n";
			    	cout << setfill('-') << setw(55) << "\n";
/*Displaying player's information*/					
					cout << "Full Name: ";
					getName(&myObj);
		            cout << "\nID: " << myPlayer.getPlayer_ID() << "\n";
		            cout << "Played Matches: " << myPlayer.getMatches_Played() << "\n";
		            cout << "Scored goals: " << myPlayer.getGoals_Scored() << "\n";	
		        	cout << "\nEnter 0 to exit: ";
		    		cin >> command;
					break;		
				}
        	case 3:{
        			cout << setfill('-') << setw(55) << "\n";
			    	cout << "\t  Increasing number of goals menu\n";
			    	cout << setfill('-') << setw(55) << "\n";
        			cout << "Enter number of goals you want to add: ";
		            cin >> goals;
		            increaseGoalsScored(goals, &myPlayer);
					cout << "\nEnter 0 to exit: ";	
					cin >> command;
					break;		
				}
        	case 0:{
					cout << "\nExited\n";
            		exit(0);			
					break;		
				}
		}
	}
    system("pause");
    return 0;
}

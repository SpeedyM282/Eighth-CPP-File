/*
Name: Akhadbek Rizakulov
ID: 2010227
Date: 08.03.2021
*/

#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

#ifndef FULLNAME_H
#define FULLNAME_H


class FullName{
    private:
        string firstName, middleName, lastName;
    public:

        FullName(){firstName = "No Name "; middleName = "No Middle Name "; lastName = "No Last Name ";}
    
        void setFirstName(string firstName_1){
    		firstName = firstName_1;
		}     
    
        string getFirstName() const{
    		return firstName;
		}
    
        void setMiddleName(string middleName_1){
    		middleName = middleName_1;
		}
    
        string getMiddleName() const{
    		return middleName;
		}
    
        void setLastName(string lastName_1){
    		lastName = lastName_1;
		}
    
        string getLastName() const{
    		return lastName;
		}
        
        ~FullName(){cout << "\n" << setfill('-') << setw(55) << "\n";}
};

#endif

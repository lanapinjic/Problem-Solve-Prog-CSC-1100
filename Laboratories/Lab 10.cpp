/*========================================================== 

Title:       Lab 10 - Wizard Identification using Classes 
Course:      CSC 1100 
Author:      <Lana Pinjic> 
Date:        <03/29/2022> 
Description: This program allows us to store the user input data 
that stored the age, first and last name and the ID number and stores it and returns 
it at the very end. 

 ========================================================== */ 
#include <iostream> 
using namespace std; 

class Wizard{
    private: //creating private class to store the information
    int AGE;         //wizardAge 
    string FN;         //wizardFirstName
    string LN;        //wizardLastName
    int IDw;      //wizard_ID
    public:
    
    void set_wizardAge(int a){ //setting AGE var equal to user input 
        AGE = a;
    }
    
    void set_wizardFirstName(string b){ //setting the FN variable = to user input 
        FN = b;
    }
    
    void set_wizardLastName(string c){ //setting the LN var = to user input
        LN = c;
    }
    
    void set_wizard_ID(int d){ //setting the IDw variable equal to what the user inputted
        IDw = d;
    }
    
    int get_wizardAge(){ //returning the information for AGE
        return AGE;
    }
    
    string get_wizardFirstName(){ //returning the information for FN
        return FN;
    }
    
    string get_wizardLastName(){ //returning information for LN
        return LN;
    }
    
    int get_wizard_ID(){ //returning information for IDw
        return IDw;
    }
};
 

int main() { 
//DO NOT MODIFY THE MAIN()!!!! 
    int wizardAge, wizard_ID; 
    string wizardFirstName, wizardLastName; 

    cin >> wizardAge >> wizardFirstName >> wizardLastName >> wizard_ID; 

    Wizard wiz; 
    wiz.set_wizardAge(wizardAge); 
    wiz.set_wizard_ID(wizard_ID); 
    wiz.set_wizardFirstName(wizardFirstName); 
    wiz.set_wizardLastName(wizardLastName); 

    cout << wiz.get_wizardAge() << "\n"; 
    cout << wiz.get_wizardLastName() << ", " << wiz.get_wizardFirstName() << "\n"; 
    cout << wiz.get_wizard_ID(); 

    return 0; 
} 

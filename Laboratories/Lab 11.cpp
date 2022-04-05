/*==========================================================

 Title:       Lab 11 - Arena Area Inheritance
 Course:      CSC 1100
 Author:      <Lana Pinjic>
 Date:        <04/05/2022>
 Description: This program takes in a radius of a stadium and then we print firstly 
 the radius squared, and then print the area of the arena next. We are able 
 to do this by creating a class and a sub class, and changing the inheritence 
 in overriding the display funtion to give two different outputs. 

 ==========================================================
*/

#include <iostream>
#include <string>
using namespace std;


//first class
class Arena {
    public:
    double r;
    double r2;
    void display(){
        r = (r2 * r2 );//simplifying the new radius
        cout << r << endl;//printing the new radius
    }
};
//creating the sub class
class ArenaArea : public Arena{
    public:
    double a;
    void scan_input(){//inputting a new radius to be calculated
        cin >> r2;
    }    //displaying the new radius in the new display function. 
    void display(){
        a = 3.14 * r;
        cout << a;
    }
};
int main()
{
    //DO NOT MODIFY ANYTHING IN THE main() !!!
    
    ArenaArea stadium; //Declaring ArenaArea object stadium
    
    stadium.scan_input(); //Read the radius input
    
    stadium.Arena::display(); //Print the radius squared
    
    cout << endl;
    
    stadium.display(); //Print the area of the Arena (stadium) object
    
    return 0;
}



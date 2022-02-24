/*==========================================================

Title: Lab6 - Numerical Reversal

Course: CSC 1100

Author: <Lana Pinjic>

Date: <02/24/2022>

Description: This program will first take in a number
that represents how we will determine how long 
the array is. Then the second user input will put 
in a list of numbers seperated by spaces 

Then we need to reverse the numbers / list given and Then
print that out 


==========================================================

*/

#include <iostream>

using namespace std;

int main() {

    //using arrays and loops 
    //the user inputs / defining the variables
    int x;
    
    int y;
    
    cin >> x;
    //name of array is z 
    //size of array is x
    //user input of x
    int z[x];
    /*for loop for putting the int's from y 
    into the array*/
    for (int i=1; i<=x; i++){
    //user input of y
        cin >> y;
     //assigning y input to the array   
        z[i] = y;
    }
    /*print the final backwards/reversing 
    the array*/
    for (int i=x; i>0; i--){
        
        cout << z[i] << " ";//printing with spaces in between each int
    }

    return 0;

}


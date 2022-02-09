/*==========================================================

 Title:       Lab4 - Giftbox to Tricity
 Course:      CSC 1100
 Author:      <Lana Pinjic>
 Date:        < 02/08/2022>
 Description: This program lets us ask the user for two numbers, which 
 represent the two sides of wooden planks. here I am able to test to 
 see if these two values equal each other or one is greater than 
 or less than the other. from the the program first says if they are eqaul, 
 if the first value is less than, then lastly if the first value is greater 
 than the second. Thehn we calculate the hyptenuse with these two values.

 ==========================================================
*/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    //classify our variables and ask for user input
  float wpone;
  float wptwo;
  cin >> wpone;
  cin >> wptwo; 
  //compare if they are equal , true =1 , false = 0
  cout << (wpone == wptwo) << endl;
  //compare if first is less than second
  cout << (wpone < wptwo) << endl;
  //compare if first is greater than second
  cout << (wpone > wptwo) << endl;
  
  int side1;
  int side2;
  int hyp;
  //use pow to create an exponent for the hypotenuse equation 
  side1 = pow(wpone, 2.0); //for the first plank, pow(base, exponent)
  side2 = pow(wptwo, 2.0); //for the second plank
  hyp = round(sqrt(side1 + side2)); //add the two and sqrt them 
  
  cout << "The hypotenuse of triangle equals to " << hyp; //print out the result.

  return 0;
}


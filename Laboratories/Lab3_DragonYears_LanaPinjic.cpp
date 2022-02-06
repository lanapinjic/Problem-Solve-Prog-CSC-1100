/*==========================================================

 Title:       Lab3 - Dragon Years
 Course:      CSC 1100
 Author:      <Lana Pinjic>
 Date:        < 02/03/2022>
 Description: This program takes in a dragons name and
 their age in dragon years, then we print out the name given
 and then convert the dragon years into wizard years.

 ==========================================================
*/

#include <iostream>
using namespace std;

int main() {
  //first define all of the variables that you will be using
  string name;
  float years;
  //ask for user input
  cin >> name;
  cin >> years;
  float wizyears;
  //minus 2 since the first 2 don't count
  years = years - 2;
  //then 21 years for the first 2 , and mutiple the rest of the years by 4
  wizyears = (4*years) + 21;
 
  cout <<"The dragon named "<< name<< " is "<< wizyears <<" years old in wizard years.";

  return 0;
}







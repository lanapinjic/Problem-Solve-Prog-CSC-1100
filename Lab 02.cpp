/*==========================================================

Title: Lab2 - Output Manipulation

Course: CSC 1100

Author: <Lana Pinjic>

Date: < 01/25/2022 >

Description: This program prints the ten with 10 spaces then the text fourfour. 
Then I was able to print 80 dashes in the next line all consecutivly. 

==========================================================

*/
#include <iomanip>
#include <iostream>

using namespace std;

int main() {
    
    
    cout<<"ten          fourfour"<<endl;
    cout<<setfill ('-') <<setw (80);
    cout<< "--" <<endl;
    

//write your code here and include comments to explain your solution

return 0;

}



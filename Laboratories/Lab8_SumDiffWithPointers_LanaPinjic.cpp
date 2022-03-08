/*==========================================================

 Title:       Lab 8 - Sum/Difference with Pointer
 Course:      CSC 1100
 Author:      <Lana Pinjic>
 Date:        <03/08/2022>
 Description: This program firstly wants us to add the two numbers 
 of x and y together and relocate the value of x to this sum. 
 Secondly, this program then changes to store the absolute difference 
 between the two inputed numbers, we use another varible in order to be able to use 
 the orginal inputted values. 

 ==========================================================
*/
#include <iostream>
#include <cmath>
using namespace std;


void Modify(int *x, int *y) {
  
    int c;/*new variable established in order to later access the inputed 
    values*/
    c = *y;
    *y = abs(*x - *y);//absolute value
    *x = *x + c; //use this new value of c to access the orginal inputed values
   //sum of the two
}

int main() {
    //DO NOT MODIFY ANYTHING IN THE main() !!!
    
    int x, y;
    
    int *ptr_x = &x;
    int *ptr_y = &y;
    
    cin >> x;
    cin >> y;
    
    Modify(ptr_x, ptr_y);
    
    cout << x << endl;
    cout << y;
                 
    return 0;
}


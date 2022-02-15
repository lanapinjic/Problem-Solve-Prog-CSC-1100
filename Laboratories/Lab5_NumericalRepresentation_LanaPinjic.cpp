/*==========================================================

Title: Lab5 - Numerical Representation

Course: CSC 1100

Author: <Lana Pinjic>

Date: <02/15/2022>

Description: This program  prints the range of two numbers 
and anything in between them in lowercase. Then if the number/numbers are
over 9, it prints whether they are even or odd. 


==========================================================

*/

#include <iostream>

using namespace std;

int main() {
    //define variable
    int x;
    
    int y;
    //user input 
    cin >> x;
    
    cin >> y;
    
    
    
    switch (x){
        
        //for #1
        case 1:
        cout << "\none";
        if (y==1){
            break;
        }
        //for#2
        case 2:
        cout << "\ntwo";
        if (y==2){
            break;
        }
        
        
        //for #3
        case 3:
        cout << "\nthree";
        if (y==3){
            break;
            
        }
        //for #4
        case 4:
        cout << "\nfour";
        if (y==4){
            break;
        }
        //for #5
        case 5:
        cout << "\nfive";
        if (y==5){
            break;
        }
        //for #6
        case 6:
        cout << "\nsix";
        if (y==6){
            break;
        }
        //for #7
        case 7:
        cout << "\nseven";
        if (y==7){
            break;
         //for #8   
        }
        
        case 8:
        cout << "\neight";
        if (y==8){
            break;
            
        }
        //for # 9
        case 9:
        cout << "\nnine";
        if (y==9){
            break;
        }
        
        default:
        //if it is over 10 and greater than y then it will do the following
        for (int a = 10; a<=y; a++){
            //to see if it is even
            if (a % 2 == 0 )
                cout << "\neven";
                //to see if it is odd
            else
                cout << "\nodd";
            
        }
    }


return 0;
}

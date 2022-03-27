/*==========================================================

 Title:       Lab 9 - C++ Basketball Season
 Course:      CSC 1100
 Author:      <Lana Pinjic>
 Date:        <03/24/2022>
 Description: This program firstly stores every game 
 from the season.Then it adds all the addiotnal points to that 
 game, the  finally we can print out the updated total Score
 for the whole season. 

 ==========================================================
*/

#include <iostream>
using namespace std;

void alterGameScore(int *pArr, int numberOfGame){
    int i = numberOfGame; 
    int k;//defining k
    cin >> k;//user input for k
    *(pArr +i)= *(pArr +numberOfGame)+k;
}

int totalScore(int *pArr, int SIZE){
int total = 0; //defining
for(int i = 0; i < SIZE; i++){
    *(pArr+i)=total += pArr[i];//returns all the added points 
    //to the dynamic array
}
    return total;
}

void printScores(int *pArr, int SIZE){
    for(int i=0; i < SIZE;i++){
        cout << *(pArr +i) << " "; //printing the final array
    }
}


int main() {

    const int SIZE = 5;
    int* pArr;
    pArr = new int[SIZE];
    int numberOfGame;

    for (int i = 0; i < SIZE; i++) 
            *(pArr + i) = ((i + 2) * 10) + (i + 1); 

    //cout << "Enter game to check: ";
    cin >> numberOfGame;
    
    alterGameScore(pArr, numberOfGame - 1);
    //cout << "new value: ";
    cout << *(pArr + numberOfGame - 1) << endl;
    
    printScores(pArr, SIZE);
    
    //cout << "\ntotal Score: ";
    cout << endl << totalScore(pArr, SIZE);

}


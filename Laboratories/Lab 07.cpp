/*==========================================================

 Title:       Lab 7 - C++ Care Unit
 Course:      CSC 1100
 Author:      <Lana Pinjic>
 Date:        < 03/01/2022>
 Description: This program first lets us create a function that converts 
 height into meters. The second function allows us to calculate the BMI
 of a kid with the defult height of 1.8m with the inputed weight. The third 
 functions lets us calculate the BMI of a kid with the inputed height and 
 weight. The last function allows us to change the BMI of the two by 
 excahnging their weights but keeping their height the same. 

 ==========================================================
*/

#include <iostream>
using namespace std;

//changing the height in feet to meters 
double conversionMeters(double h){
    double h_m;
    h_m = h/3.281;
    return h_m;
}
//calculating the bmi of the input weight and the height of 1.8 m
double BMIcalculator(double w1){
    double bmi;
    bmi = ((w1)/(3.24));
    return bmi;
}
// calculating the bmi of the input weight and an inputed height 
double BMIcalculator(double w2, double h){
    double bmi;
    bmi = ((w2)/(h * h));
    return bmi;
}
//swapping the weights of the two boys
void swap(double &w1, double &w2){
    double x = w1;
    w1 = w2;
    w2 = x;
}
//main function
int main() {
    double w1, w2, h;
    cin >> w1 >> w2 >> h;

    float index1 = BMIcalculator(w1);
    float index2 = BMIcalculator(w2, conversionMeters(h));

    cout << index1 << " " << index2 << endl;

    swap(w1, w2);

    index1 = BMIcalculator(w1);
    index2 = BMIcalculator(w2, conversionMeters(h));
    cout << index1 << " " << index2 << endl;
}


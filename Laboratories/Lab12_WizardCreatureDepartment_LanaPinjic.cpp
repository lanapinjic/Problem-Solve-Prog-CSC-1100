/*==========================================================

 Title:       Lab 12 - C++ Wizard Creature Department
 Course:      CSC 1100
 Author:      <Lana Pinjic>
 Date:        < 04/16/2022>
 Description: This program creates one main class and 
 two derrived classes, catigorized into the creatures. 
 Each class has the attributes of name, creaturetype and 
 quantity. This porgram will ask for user input for 
 two names which will be passed as protected variables
 using the get/set Functions. The 3rd name will automatically
 be clover. This user input is stored in an array. Then the
 program will print out a table showing the titles of 
 creaturetype, name and quantity. Then underneath it will list 
 a formatted table of these associated values of the 
 two names inputed in the clover name as well. 

 ==========================================================
*/


#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

//create classes.....
class Creature{ 
    protected://specifying access
    
    string name;
    string creaturetype = "unknown";
    int quantity;
    
    
    public://specifying access
    void setN(string varN){//name set function
        name = varN;
    }
    string getN(){ //name get function
        return name;
    }
    void setQ(int varQ){//quantity set function
        if (0>varQ){
        quantity = varQ * -1;//to ensure it is positive
    }
    else{
        quantity = varQ;
    }
    }
    int getQ(){//quantity get function
        return quantity;
    }

    void printStatement(){//set up for the printouput
        cout << creaturetype << setfill(' ') << 
        setw( name.length() + 11) << name 
        << setfill(' ')<<setw(34-name.length()) 
        << quantity << endl;
    }
    
    Creature(string varN, int varQ){//constructing....
        name = varN;
        quantity = varQ;
    }
    Creature(string varN, int varQ, string c){
    }
    Creature(){//constructing...
    }
};

class Phoenix: public Creature{//new sub class
    public://specifying access
    string creaturetype = "phoenix";
    string color;
    void setC(string VarC){//color set function
        color = VarC;
    }
    string getC(){//color get function
        return color;
    }
    void printStatement(){//printStatement for output
        cout << creaturetype <<setfill(' ')<< 
        setw(11+name.length())<< name << 
        setfill(' ')<<setw(34 - name.length()) 
        << quantity << endl;
    }
};
    
class Basilisk: public Creature{//second sub class
    public:
    string creaturetype = "basilisk";
    
    void printStatement(){
        quantity = 1;//already set
        //printStatement for output
        cout << creaturetype << setfill(' ')<< 
        setw(name.length()+10) << name << 
        setfill(' ')<< setw(34-name.length())<<
        quantity<<endl;
    
    }
};


int main() {

    //create array of size 3 for storing name
    string nameArr[3];

    //call loop to record user input as names
    // sets third name to “Clover”
    for(int j=0; j<3; j++){
        if (j ==2){
            nameArr[j] = "Clover";
            break;
        }
        cin >> nameArr[j];
    }//printing top of output
cout << "CreatureType"<< setfill(' ')<< 
setw(10)<< "Name"<< setfill(' ') << 
setw(30) << "Quantity" << endl;

cout << setfill('_')<< setw(53)<<"_"<< endl;  
    //first object fro class Creature
    Creature c(nameArr[0], 2);
    //print statement from class
    c.printStatement();


    //creation of object from class Phoenix
    Phoenix p;
    //sets name, quantity and color
    p.setN(nameArr[1]);
    p.setQ(-3);
    p.setC("golden");
    //print statement form class
    p.printStatement();


    //creation of object from class Basilisk
    Basilisk b;
    //sets name
    b.setN(nameArr[2]);
    //prints statement from class
    b.printStatement();


    //extra credit - 3 points

}

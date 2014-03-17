/* 
 * File:   main.cpp
 * Author: Paul Wilfley
 * Created on March 17, 2014, 12:07 AM
 * Purpose: Determine the amount owed for 6 months retroactive pay at 7.6%
 */

//system Libraries
#include <iostream>
using namespace std;

//Global Constants
const float PAY_INC = .076;     //Calculates the retroactive percentage.
const float HALF_AN = .5;       //Calculates 6 months of salary increase.

//Function Prototypes

//Program Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    float prAnSal, amt_owd, new_sal;
    
    //Ask for Total Annual Gross for last year.
    cout << "What was your Total gross salary for last year?" <<endl;
    cin >> prAnSal;
    
    //calculate amount owed and new rate
    amt_owd = (prAnSal * HALF_AN) * PAY_INC;
    new_sal = prAnSal * PAY_INC;
    
    //Output Amount of pay owed
    cout << "Based on your previous years salary," <<endl;
    cout << "you will receive $" << amt_owd <<" retroactively." <<endl;
    
    //Output new salary
    cout << "Your New salary will be $" << new_sal;
    cout << " a year." <<endl;
    
    //End of Program
    return 0;
}


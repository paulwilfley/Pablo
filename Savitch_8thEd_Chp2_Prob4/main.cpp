/* 
 * File:   main.cpp
 * Author: Paul Wilfley
 * Purpose: Determine the amount of retroactive pay for any 
 * number months retroactively pay at 7.6%
 */

//system Libraries
#include <iostream>
using namespace std;

//Global Constants
const float PAY_INC = .076;     //Calculates the retroactive percentage.

//Function Prototypes

//Program Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    float prAnSal, amt_owd, new_sal;
    int amt_mth;
    //Ask for Total Annual Gross for last year.
    cout << "What was your Total gross salary for last year?" <<endl;
    cin >> prAnSal;
    
    //Ask for number of months of retroactive pay.
    cout << "How many months of retroactive pay are you owed?" <<endl;
    cin >> amt_mth;
    
    //calculate amount owed and new rate
    amt_owd = (prAnSal / 12) * (amt_mth) * PAY_INC;
    new_sal = prAnSal / 12) * PAY_INC + prAnSal;
    
    //Output Amount of pay owed
    cout << "Based on your previous annual salary," <<endl;
    cout << "you will receive $" << amt_owd <<" retroactively." <<endl;
    
    //Added Line space
    cout << endl;
    
    //Output new salary
    cout << "Your New salary will be $" << new_sal;
    cout << " a year." <<endl;
    
    //End of Program
    return 0;
}


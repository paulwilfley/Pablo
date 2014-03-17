/* 
 * File:   main.cpp
 * Author: Paul Wilfley
 * Created on March 16, 2014, 4:07 PM
 * Purpose: Determine the most cans of diet soda you can drink up to goal
 * weight and not die. Assuming a mouse weighs 10 ounces and will die if it
 * consumes 4% of its body weight of artificial sweetener.
 */

//Include System Libraries
#include <iostream>
using namespace std;

//Global Constants
float PNDOUNCE=.0625;

//Function Prototypes

//Program begins here
int main(int argc, char** argv) {
    //Declare variables
    float goal_wt, conv_wt, death; 
    int num_cans;
    
    //Enter weight
    cout << "Please enter your goal weight in pounds." <<endl;
    cin >> goal_wt;
    
    //Convert goal weight to pounds
    conv_wt = goal_wt * PNDOUNCE;
    
    //convert and show the max number of diet soda before death.
    death = conv_wt * .04;
    num_cans = death / .0001;
    
    //Output maximum cans of diet soda to be consumed before death.
    cout << "You may drink "<< num_cans -1;
    cout << " 12 ounce cans of diet soda, as long" << endl;
    cout << "as you DO NOT lose more weight than your goal weight." << endl;
        return 0;
}
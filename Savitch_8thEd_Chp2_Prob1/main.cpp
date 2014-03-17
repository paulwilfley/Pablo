 /* Author: Paul Wilfley
 * Created on March 10, 2014, 8:52 AM
 * Purpose:Input a box of cereal in ounces and out put weight
 * in Metric tons. Output amount of boxes needed to make 1 ton.
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//Global Constants
const int MET_TONS=35273.92;
//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) 
{
    //Declare variables
    float bx_cereal, tot_tons, num_box;
    
    //Get input in ounce of a box of cereal.
    cout << "What is the weight of one box of cereal in ounces?" << endl;
    cin >> bx_cereal;
    //Conversion
    tot_tons = bx_cereal / MET_TONS;
    //Output weight in metric tons
    cout <<"You have ";
    cout <<setprecision(4)<< tot_tons;
    cout << " metric tons of cereal per box."<<endl;
    //Conversion
    num_box = 35237.92/bx_cereal +.50;
    //Output Boxes needed to = a metric ton.
    cout << "You will need at least "<< num_box << " boxes of ";
    cout << "cereal to equal metric ton."<<endl;
    
    //End of Program
    return 0;
}

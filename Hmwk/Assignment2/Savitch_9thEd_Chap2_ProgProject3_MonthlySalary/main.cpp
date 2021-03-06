/* 
   File:   main
   Author: Cody Steimle
   Created on September 27, 2016, 9:24 PM
   Purpose:  Modifies the programming project 3 to allow the user to set retroactive months of pay.
 */

//System Libraries
#include <iostream>   //Input/Output objects
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants
const float PAYINCR=7.6e-2f;  //The 7.6% pay increase

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    float prevAnl, newAnnl, monSlry, amtOwed; //Previous annual income, New annual income, New monthly salary, Amount due to the employee
    int retro;                                //Months of retroactive pay
    
    //Input values
    cout<<"This program will calculate an employee's salary after a 7.6% pay increase. Including retroactive pay."<<endl;
    cout<<"Enter the workers annual salary before the pay increase:"<<endl;
    cin>>prevAnl;
    cout<<"How many months are retroactive?"<<endl;
    cin>>retro;
            
    //Process values -> Map inputs to Outputs
    amtOwed=prevAnl*PAYINCR/(12/retro)+0.005;  //adding 0.005 to round to the nearest cent.
    newAnnl=prevAnl+(prevAnl*PAYINCR)+0.005;
    monSlry=newAnnl/12+0.005;
   
    //Displays proper dollar amounts
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

    //Display Output
    cout<<"The amount due to the employee: $"<<amtOwed<<endl;
    cout<<"The new annual salary is:       $"<<newAnnl<<endl;
    cout<<"The new monthly salary is:      $"<<monSlry<<endl;
            
    //Exit Program
    return 0;
}
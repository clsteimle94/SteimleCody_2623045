/* 
 * File:   main.cpp
 * Author: Cody Steimle
 * Created on Oct 3, 2016, 8:50 AM
 * Purpose:  Quadratic formula solution
 */

//System Libraries Here
#include <iostream>
#include <cmath>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float a,b,c;
    
    //Input or initialize values Here
    cout<<"Solution to Quadratic ax^2+bx+c=0"<<endl;
    cout<<"Input 3 float data types a b c"<<endl;
    cin>>a>>b>>c;
    
    //Process/Calculations Here -> Map inputs to outputs and display
    float vb4sqrt=b*b-4*a*c; //Value before square root
    if(a==0){
        if (b==0){
             cout<<"This is not an algebraic equation"<<endl;  
        }else{
            cout<<"The solution is x = "<<-c/b<<endl;
        }
    }else if(vb4sqrt>0){
        cout<<"x = ("<<((-b+sqrt(vb4sqrt))/(2*a))<<" , "
                     <<((-b-sqrt(vb4sqrt))/(2*a))<<")"<<endl;
    }else{
        cout<<"x = ("<<(-b/(2*a))<<"+"<<( sqrt(-vb4sqrt)/(2*a))<<"i, " //takes the negative to calculate i
                     <<(-b/(2*a))<<"+"<<(-sqrt(-vb4sqrt)/(2*a))<<"i)"<<endl;
    }    

    //Exit
    return 0;
}


/*
 File:   main.cpp
   Author: Cody Steimle
   Created on September 11, 2016, 9:32 PM
   Purpose: Savitch 1.8 Sample Program - Calculating the number of peas
 */

//System Libraries
#include <iostream>  //Input/output objects
using namespace std; //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here!
int main( )
{
    //Declaration of Variables
	int numpods, pperpod, ttlpeas; //number of pods, peas per pod, total peas
	
	//Set values
	cout << "Press return after entering a number.\n";
	cout << "Enter the number of pods:\n";
	cin >> numpods;  //User inputs number of pods
	cout << "Enter the number of peas in a pod:\n";
	cin >> pperpod;  //User inputs the number of peas in a pod
	
	//Process values -> Map inputs to outputs
	ttlpeas = numpods * pperpod;
	
	//Display Output
	cout << "if you have \n";
	cout << numpods;
	cout << " pea pods\n";
	cout << "and \n";
	cout << pperpod;
	cout << " peas in each pod, then\n";
	cout << "you have \n";
	cout << ttlpeas;
	cout << " peas in all the pods.\n";
	
	//Exit Program
	return 0;
}
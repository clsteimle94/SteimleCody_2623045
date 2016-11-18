/* 
 * File:   main.cpp
 * Author: Cody Steimle
 * Created on November 16, 2016, 10:00 AM
 * Purpose:  Mark sort in 1 function
 */


//System Libraries Here
#include <iostream>  //I/O
#include <cstdlib>   //Random
#include <ctime>     //Time
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
void fillAry(int [],int);
void prntAry(int [],int);
void markSrt(int [],int,int);

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare all Variables Here
    int const SIZE=100;
    int array[SIZE],utilize;
    
    //Input or initialize values Here
    do{
        cout<<"How much of the array to utilize?"<<endl;
        cout<<"Choose a number between 2 and 100"<<endl;
        cin>>utilize;
    }while(utilize<2||utilize>100);
    
    //Fill the array
    fillAry(array,utilize);
    
    //Output Located Here
    prntAry(array,utilize);

    //Sort
    markSrt(array,utilize,0);
    
    //Output Located Here
    prntAry(array,utilize);
    
    //Exit
    return 0;
}

void markSrt(int a[],int size,int pos){
    for(int pos=0;pos<size-1;pos++){
        for(int i=pos+1;i<size;i++){
            if(a[pos]>a[i]){
                a[pos]=a[pos]^a[i];
                a[i]=a[pos]^a[i];
                a[pos]=a[pos]^a[i];
            }
        }
    }  
}

void prntAry(int a[],int n){
    //Output Located Here
    int count=0;
    cout<<"The Array"<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
        if((count++)%10==9)cout<<endl;
    }
    cout<<endl;
}

void fillAry(int a[],int n){
    //Fill the array
    for(int i=0;i<n;i++){
        a[i]=rand()%90+10;//Random 2 digit number
    }
}
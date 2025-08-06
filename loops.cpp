#include<iostream>
using namespace std;
int main (){
    //LOOPS
    //Loops are used to repeat a block of code multiple times .
    //The Types of loops in C++ are - 
    //For Loop
    //While Loop
    //Do While Loop

    //For Loop - For Loop is used when we know how many times we want to print or repeat something
    for(int i = 0 ; i <= 5 ; i++) { //initialization , condition , update or go on
        //from where to start , till where to go , how to go
        //Here i starts from 0 and goes till 5 or equal to 5 and increases by 1 each time  
        cout << i << endl;
    }


    //WHILE LOOP - While Loop is used when we do not know how many times we want to print or repeat something
    //It will run until the condition is true
    int index = 0;
    while(index< 20){
        cout << "We are at index : " <<index << endl;
        index++;
    }

    string name = "sunu";
    while(name == "sunu"){
        cout << "what is your name" << endl << "my name is :" << name << endl;
        

        }




    return 0;
}
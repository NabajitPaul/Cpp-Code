#include<iostream>
using namespace std;
int main (){
    // int age ;
    // cout << "Enter your age: " << endl;
    // cin >> age;

    // if(age>=18){ //goes to else only if the "if" statement is false or else only the if function runs
    //     cout <<"You are an adult " << endl;

    // }else{ // else will run only if the "if" statement is false
    //     cout << "You are not an adult " << endl;
    //}

    //SWITCH STATEMENT
    //A switch statement lets you choose what code to run based on the value of a variable.
    // It checks the variable and matches it to different cases.
    // Each case has its own code.
    // If no case matches, the default code runs.

    int num = 2;
    switch(num) {
        case 1:
            cout << "One" << endl;;
            break;
        case 2:
            cout << "Two" << endl;;
            break;
        default:
            cout << "Other number" << endl;
    }

    int age = 22;
    switch (age){
    case 12:
        cout << "You are 12 years old." << endl;
        break;
    case 18:
        cout << "You are 18 years old" << endl;
        break;
    case 20:
        cout << " Youa re 20 years old" << endl;
        break;
    default:
        cout << "Your age is more than 20" << endl;
        break;
    }

    //If Else checks condition of each statement one by one and can handle complex logics
    //The Switch Statement check  the value of the condition and if it matches , then the switch statement prints the value of the condition
    





    return 0;
}
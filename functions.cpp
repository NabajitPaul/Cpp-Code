#include<iostream>
using namespace std;

    //FUNCTIONS
    // A function is a block of code that performs a specific task. 
    //You can use functions to organize your code, avoid repetition, and make your program easier to read.
    //Functions are reusable blocks of code that perform a specific task.
    //They help organize code, making it easier to read and maintain.
    //A function has a name, a return type, and can take parameters.
    //To use a function, you first declare it (its name and return type), then define it (the actual code), and finally call it (execute it).
    

    // Function Declaration
//     int add ( int a , int b){
//     int c = a + b;
//     return c ;
// }


// int main (){
//     // Function Calling
//     int sum = add( 5 , 4 ); // Calling the function
//     // Function Definition
//     cout << "The sum of this two no.s is:" << sum << endl; // Output the result
//     return 0;

// }    


    //FUNCTION TO AD TWO NUMBERS
    // int add( int a , int b){
    //     return a +b;
    // }

    // int main(){
    //     int sum = add(5 , 3);
    //     cout << "The sum of 5 and 3 is : " << sum << endl;




    //FUNCTION TO FIND MAXIMUM OF TWO NUMBERS
    // int findMax ( int x , int y){
    //     if ( x > y)
    //         return x ;
    //     else
    //         return y;
    // }

    // int main(){
    // int maxNum = findMax ( 12 , 32);
    // cout << "The maximum of the two no.s is: " << maxNum << endl;



    //FUNCTION WITH LOOPS
    int printTable(int num ){
        for ( int i = 1 ; i <= 10 ; i ++){
            cout << num << " x " << i << " = " << num * i << endl;
        }
    }
    // This function prints the multiplication table of a given number
    int main(){

        int number = printTable(5);
        cout << "Table of 5 is " << number << endl;

        return 0;
    }













//     return 0;
// }
// Operators in C++


// Operators are special symbols in C++ that perform operations on variables and values. 
//They are used to manipulate data and variables in your program.

// Types of Operators in C++ -

// Arithmetic Operators -
// Used for mathematical calculations.
// Examples:
// + (Addition): a + b
// - (Subtraction): a - b
// * (Multiplication): a * b
// / (Division): a / b
// % (Modulus, remainder): a % b

// Assignment Operators -
// Used to assign values to variables.
// Examples:
// = (Assign): a = 5
// += (Add and assign): a += 2 (same as a = a + 2)
// -= (Subtract and assign): a -= 2
// *= (Multiply and assign): a *= 2
// /= (Divide and assign): a /= 2
// %= (Modulus and assign): a %= 2

// Comparison (Relational) Operators -
// Used to compare two values.
// Examples:
// == (Equal to): a == b
// != (Not equal to): a != b
// > (Greater than): a > b
// < (Less than): a < b
// >= (Greater than or equal to): a >= b
// <= (Less than or equal to): a <= b

// Logical Operators -
// Used to combine multiple conditions.
// Examples:
// && (Logical AND): (a > 0 && b > 0)
// || (Logical OR): (a > 0 || b > 0)
// ! (Logical NOT): !(a > 0)

// Increment and Decrement Operators -
// Used to increase or decrease a value by 1.
// Examples:
// ++ (Increment): a++ or ++a
// -- (Decrement): a-- or --a

// Bitwise Operators -
// Used to perform operations on bits.
// Examples:
// & (AND): a & b
// | (OR): a | b
// ^ (XOR): a ^ b
// ~ (NOT): ~a
// << (Left shift): a << 1
// >> (Right shift): a >> 1


#include <iostream>
using namespace std;
int main(){


    int a = 5 , b = 10; // Here we are declaring and initializing three integer variables a, b, and c
    // Example of using arithmetic operators
    cout<< " a+ b is : " << a + b << endl;
    cout<< " a- b is : " << a - b << endl;
    cout<< " a* b is : " << a * b << endl;
    cout<< " a/ b is : " << a / b << endl;
    cout<< " a+ b is : " << a + b << endl;
   

    return 0;
}
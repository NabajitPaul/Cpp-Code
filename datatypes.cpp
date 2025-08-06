// Here are the main data types in C++ :-
// int (integer)
// short (short integer)
// long (long integer)
// float (floating-point number)
// double (double-precision floating-point)
// char (character)
// bool (boolean: true/false)
// unsigned int, unsigned short, unsigned long (unsigned versions)
// long long (very large integer)
// wchar_t (wide character)

// The following code demonstrates the use of different data types in C++.

#include <iostream>
using namespace std;
int main (){
    // cout <<"Hello World";
    int a , b , c; // Here we are declaring three integer variables a, b, and c but values are not assigned yet

    //SHORT - 
    short sa = 9;
    cout << sa << endl; // sa and Sa are both different things
    // variable names are case sensitive
    //we can use either a letter or an underscore to start a variable name
    // we can use letters, numbers and underscores in a variable name
    // we cannot use a number to start a variable name
    // we cannot use special characters in a variable name
    // we cannot use spaces in a variable name
    short _sa = 10;
    cout << _sa << endl; // _sa and sa are different things
    // we can use a number in the middle of a variable name
    short sa1 = 11;
    short _sa1 = 12;
    cout << sa1 << endl <<  _sa1;
    // we can use long variable names
    short sa_long_variable_name = 13; 
    cout << sa_long_variable_name << endl; // this is using a underscore

    //Camel Case Notation - 
    //Camel case notation is a way of writing names where you join words together and start each new word (except the first) with a capital letter, without spaces or underscores.
    //For example: marksInMaths is camel case.
    //It makes variable names easier to read in code.
    int marksInMaths = 90;
    cout << marksInMaths << endl; // this is using a camel case notation

    // You used int before marksInMaths to declare the variable and specify its data type.
    // int tells the compiler that marksInMaths will store an integer value (whole number).
    // In C++, every variable must have a type so the compiler knows how much memory to allocate and how to handle its value.

    short a = 5;
    int b = 10; 
    long c = 100000; 
    long long d = 10000000000; 
    float e = 5.75f; 
    double f = 3.14; //float is smaller and double is larger than float 
    char g = 'A';
    bool h = true; // used for true/false values

    
    
    cout << " the value is" << a << endl;
    cout << " the value is" << b << endl;
    cout << " the value is" << c << endl;
    cout << " the value is" << d << endl;
    cout << " the value is" << e << endl;
    cout << " the value is" << f << endl;
    cout << " the value is" << g << endl;
    cout << " the value is" << h << endl;

















    return 0;
} 
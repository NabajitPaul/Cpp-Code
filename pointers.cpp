#include<iostream>
using namespace std;
int main (){
    //[POINTERS]
    // A pointer is a variable that stores the address of another variable.
    // It allows you to directly access and manipulate memory locations.
    // To declare a pointer, use the * symbol before the pointer name.
    // For example, int* ptr; declares a pointer to an integer.

    int a = 34;
    int* ptra;
    ptra = &a ; // The & operator gives the address of a variable
    cout << *ptra << endl; // Output the value at the address stored in ptra 








    return 0;
}
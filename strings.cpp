//STRINGS
//Strings are a sequence of characters
//They are used to store text data
#include <iostream>
#include <string> // Include the string library
//We use the string class from the standard library to work with strings
//We can use some functions of strings from this string library
using namespace std;
int main(){
    string name = "nabajit";
    cout << "My name is : " << name << endl; // Output the string
    cout << "My name length is : " << name.length() << endl; // Output the length of the string
    cout << "My firs three name substring is : " << name.substr(0, 3) << endl; // Output a substring of the string - starts from index 0 and takes 3 characters
    cout << "My last three name substring is : " << name.substr(3, 3) << endl; // Output another substring of the string - starts from index 3 and takes 3 characters
    
    





    return 0; // Return 0 to indicate successful execution
}
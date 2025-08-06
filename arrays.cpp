#include<iostream>
using namespace std;
int main (){
    // ARRAYS
    // An array is a collection of items of the same type or datatype .
    // An Array is stored in contiguous memory locations, and accessed using an index.
    // It is used to store multiple values of the same type in a single variable.
    // Eg - int arr[3] = { 1 , 2 , 3}; // This creates an array of integers with 3 elements.

    // int arr[3] = { 1 , 2 , 3};
    // cout << arr[0] << endl; // Accessing the first element of the array 
    // cout << arr[1] << endl; // Accessing the first element of the array 
    // cout << arr[2] << endl; // Accessing the first element of the array 

    //Here it is not necessary to declare the size of the array , we can leave it empty and the compiler will automatically determine the size based on the number of elements provided.
    //Eg - int arr[] = { 1 , 2 , 3 , 4 , 5}; //This creates an array of of size 5  .


    // int marks[6];
    // for ( int i =0 ; i < 6 ; i ++){
    //     cout <<"Enter the marks of " << i << "th student: ";
    //     cin >> marks[i]; // Taking input for each element of the array
    // }



    int arr[5] = { 12 , 45 , 7 , 89 , 34};
    int max = arr[0]; // Assuming the first element is the maximum
    for ( int i = 1 ; i < 5 ; i ++){
        if(arr[i] > max){
            max = arr[i]; // Update max if current element is greater
        }
    }

    cout << " Maximum element in the array is: " << max << endl; // Output the maximum element 
   
   
    return 0;
}
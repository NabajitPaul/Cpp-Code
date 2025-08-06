#include<iostream>
using namespace std;

void doSomething(int num){
    cout << num << endl;
    num += 5;
    cout << num << endl;
    num += 5;
    cout << num << endl;
}





int main (){




    int num = 10;
    doSomething(num);
    cout << "Final value in main: " << num << endl;





    return 0;
}
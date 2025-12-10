#include<bits/stdc++.h>
using namespace std;
/*
Functions are blocks of code that perform a specific task
Functions are used to modularize code, improve readability and reusability
They can take input parameters and return output values
Types of functions:
    1. void functions: do not return any value
    2. return functions: return a value of a specific type
    3. parameterized functions: take input parameters
    4. recursive functions: call themselves
    5. non-parameterized functions: do not take any input parameters
Example of a simple function:
void greet(){
    cout << "Hello, World!" << endl;
}
*/

//1. Void function
// void greet(){
//     cout << "Hey, Pushkar!" << endl;
// }
// int main(){
//     greet(); //function call
//     return 0;
// }

//2. void parameterized function
void greet(string name){
    cout << "Hey, " << name << "!" << endl;
}


int main(){
    string name ;
    cin >> name;
    greet(name); //function call
    string name1 ;
    cin >> name1;
    greet(name1); //function call
    return 0;
}
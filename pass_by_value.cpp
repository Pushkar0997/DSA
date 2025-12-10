#include<bits/stdc++.h>
using namespace std;
/*
Here ,we will understand pass by value in C++ functions
In pass by value, a copy of the actual parameter is passed to the function
Any changes made to the parameter inside the function do not affect the actual parameter
This is because the function works with a copy of the data, not the original data
*/

//1.using numbers
// void doSomething(int num){
//     cout<<num<<endl;
//     num+=5;
//     cout<<num<<endl;
//     num+=5;
//     cout<<num<<endl;
// }

// int main(){
//     int a;
//     cin>>a;
//     doSomething(a); //function call
//     cout<<a<<endl; //original value of a remains unchanged
//     return 0;
// }

//2.using strings

// void changeString(string str){
//     cout<<str<<endl;
//     str+=" World";
//     cout<<str<<endl;
//     str+="!!!";
//     cout<<str<<endl;
// }

// int main(){
//     string s= "Hello";
//     changeString(s); //function call
//     cout<<s<<endl; //original value of s remains unchanged
//     return 0;
// }

//In both examples, the original values of 'a' and 's' remain unchanged 
//after the function calls, 
//demonstrating the concept of pass by value in C++ functions.

//pass by reference can be used to modify the original values.
//This can be done using pointers or reference variables.

void changeString(string &str){
    cout<<str<<endl;
    str+=" World";
    cout<<str<<endl;
    str+="!!!";
    cout<<str<<endl;
}

int main(){
    string s= "Hello";
    changeString(s); //function call
    cout<<s<<endl; //original value of s remains unchanged
    return 0;
}

//In this example, the original value of 's' is modified
//after the function call, demonstrating the concept of pass by reference
// in C++ functions.
#include <bits/stdc++.h>
using namespace std;
/*
Difference Between For and While 
For loop is used when the number of iterations is known
*/


int main(){
    int i = 2;
    while(i <=1){
        // cout << "Iteration " << i << endl;
        // i += 1;
    }


    /*
    Difference Between While and Do While
    In while loop, condition is checked first and then the loop is executed
    In do while loop, loop is executed first and then the condition is checked
    This ensure that do while loop is executed at least once
    */

    do{
        cout << "Iteration " << i << endl;
        i += 1;
    }while(i <=1);
    cout << i << endl;
    return 0;
}
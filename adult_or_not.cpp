#include <bits/stdc++.h>
using namespace std;

//Write a proram that take input of age and prints if adult or not
//>18 yes else no

int main(){
    int age;
    cin >> age;
    if (age >= 18){
        cout << "You are an adult." << endl;
    }
    else {
        cout << "You are not an adult." << endl;
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
/*
Take the age from the user and then decide accordingly
1. if age < 18,
    print -> not eligible for job
2. if age >= 18 and age <= 54,
    print -> eligible for job
3. if age > 54 and age <57,
    print -> eligible for job but retirement soon
4. if age >= 57,
    print -> Retirement age
*/


int main(){
    int age;
    cin >> age;
    if(age < 18){
        cout << "not eligible for job" << endl;
    }
    else{
        if(age <= 54){
            cout << "eligible for job" << endl;
        }
        else{
            if(age < 57){
                cout << "eligible for job but retirement soon" << endl;
            }
            else{
                cout << "Retirement age" << endl;
            }
        }
    }
    return 0;
}
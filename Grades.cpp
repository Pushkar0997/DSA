#include <bits/stdc++.h>
using namespace std;

/*
A School has following grading policy:
a. Below 25 - F
b. 25 to 45 - E
c. 45 to 50 - D
d. 50 to 60 - C
e. 60 to 80 - B
f. Above 80 - A
Write a program to read marks obtained by a student in an exam and 
print the corresponding grade.
*/

int main(){
    int marks;
    cin >> marks;
    if (marks < 25) {
        cout << "F";
    } else if (marks < 45) {
        cout << "E";
    } else if (marks < 50) {
        cout << "D";
    } else if (marks < 60) {
        cout << "C";
    } else if (marks < 80) {
        cout << "B";
    } else {
        cout << "A";
    }
    return 0;
}
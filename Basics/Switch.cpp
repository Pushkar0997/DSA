#include <bits/stdc++.h>
using namespace std;
/*
Take the day no and print the corresponding day name using switch case.
For day 1 print "Monday", for day 2 print "Tuesday" and so on.
If the day no is not between 1 to 7 print "Invalid Day"
*/
int main(){
    int day;
    cin >> day;
    switch(day){
        case 1:
            cout << "Monday" << endl;
            break;
        case 2:
            cout << "Tuesday" << endl;
            break;
        case 3:
            cout << "Wednesday" << endl;
            break;
        case 4:
            cout << "Thursday" << endl;
            break;
        case 5:
            cout << "Friday" << endl;
            break;
        case 6:
            cout << "Saturday" << endl;
            break;
        case 7:
            cout << "Sunday" << endl;
            break;
        default:
            cout << "Invalid Day" << endl;
    } 
    return 0;
}
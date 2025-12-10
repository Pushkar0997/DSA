#include<bits/stdc++.h>
using namespace std;

//Take 2 numbers and print its sum using functions


//1. Without Functions
// int main (){
//     int a, b;
//     cin >> a >> b;
//     cout << "Sum is: " << a + b << endl;
//     return 0;
// }

//2. Using Functions
// int sum(int num1, int num2){
//     int num3= num1 + num2;
//     return num3;
// }


// int main(){
//     int a,b;
//     cin >> a >> b;
//     int res = sum(a,b);
//     cout << "Sum is: " << res << endl;
//     return 0;
// }

//3.use of min and max functions
int maxx(int a, int b){
    if(a > b){
        return a;
    }
    return b;
}


int main(){
    int a,b;
    cin >> a >> b;
    int minimum = min(a,b);
    int maximum = maxx(a,b);
    cout << "Minimum is: " << minimum << endl;
    cout << "Maximum is: " << maximum << endl;
    return 0;
}
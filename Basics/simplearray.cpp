#include<bits/stdc++.h>
using namespace std;

// int main(){
//     int arr[5];
//     for (int i = 0; i < 5; i++) {
//         cin >> arr[i];
//     }

//     for (int i = 0; i < 5; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }

//using pass by reference for array

void printArray(int arr[], int n){
    arr[0] +=100; //modifying first element of array
    cout <<"Value inside function is: " << arr[0] << endl;
}

int main(){
    int n = 5;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    printArray(arr, n);

    cout <<"Value inside main is: " << arr[0] << endl;

    return 0;
}

//so pass by reference is used for arrays in c++ by default 
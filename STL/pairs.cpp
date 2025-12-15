#include<bits/stdc++.h>
using namespace std;

/*
===============================================================================
                              PAIRS IN C++ STL
===============================================================================

Pairs are part of the utility header in C++ Standard Template Library (STL).
A pair is a simple container that holds two objects of any types (same or different).

===============================================================================
DECLARATION AND INITIALIZATION
===============================================================================
pair<type1, type2> p;                  // Empty pair
pair<int, string> p1(10, "hello");    // With values
pair<int, int> p2 = {5, 20};          // Using braces
auto p3 = make_pair(30, "world");     // Using make_pair()

===============================================================================
ACCESSING ELEMENTS
===============================================================================
p.first   // Access first element
p.second  // Access second element

Example:
  pair<int, string> p(42, "answer");
  cout << p.first << " " << p.second;  // Output: 42 answer

===============================================================================
OPERATIONS
===============================================================================
Comparison: ==, !=, <, >, <=, >=
- Pairs are compared lexicographically (first by first element, then second)

Swapping: p1.swap(p2)

Assignment: p1 = p2

Nested Pairs: pair<int, pair<string, double>> nested;

===============================================================================
COMMON USE CASES
===============================================================================
1. Returning multiple values from functions
2. Using as map keys (key-value in map container)
3. Storing coordinate pairs (x, y)
4. Graph representation (edge: source-destination)
5. Storing related data of different types

===============================================================================
*/

void explainPair(){
    
    // ============ Declaration and Initialization ============
    pair <int , string> p1; // Empty pair
    pair <int , string> p2 (10 , "hello"); // Constructor initialization
    pair <int , int> p3 = {5 , 20}; // Brace initialization
    pair <int , string> p4 = {30 , string("world")}; // Explicit string conversion
    
    // ============ Accessing Elements ============
    cout << "Pair p2: " << p2.first << " , " << p2.second << endl;

    // ============ Nested Pairs ============
    pair <int, pair<int, int> > p5 = {1, {2, 3}};
    cout << "\nNested Pair p5: " << p5.first << " , (" << p5.second.first << " , " << p5.second.second << ")" << endl;

    // ============ Array of Pairs ============
    pair <int , int> arr[] = {{1, 2}, {3, 4}, {5, 6}};
    cout << "\nArray of Pairs:" << endl;
    for (int i = 0; i < 3; i++) {
        cout << arr[i].first << " " << arr[i].second << endl;
    }
}
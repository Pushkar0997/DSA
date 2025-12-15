#include<bits/stdc++.h>
using namespace std;

int main(){
    int s;
    cin >> s;
    cout << "The number input is :" << s <<endl;
    return 0;
}

/*
===============================================================================
                        C++ STANDARD TEMPLATE LIBRARY (STL)
===============================================================================

STL is divided into 4 basic parts:
1. Algorithms
2. Containers
3. Functions
4. Iterators

The STL (Standard Template Library) is a powerful set of C++ template classes to 
provide general-purpose classes and functions with templates that implement many 
popular and commonly used algorithms and data structures like vectors, lists, 
queues, and stacks.

===============================================================================
1. ALGORITHMS
===============================================================================
The C++ STL has a rich set of built-in algorithms that operate on containers. 
These algorithms are defined in the <algorithm> header and can be used to perform 
various operations such as searching, sorting, counting, manipulating, and more.

It has 4 broad categories of algorithms:
1. Non-modifying sequence operations
2. Modifying sequence operations
3. Sorting operations
4. Numeric operations

Some commonly used STL algorithms include:

Non-Modifying Sequence Operations:
- find: Searches for a specific value in a range.
- count: Counts the occurrences of a specific value in a range.
- find_if: Finds the first element satisfying specific criteria.
- count_if: Counts elements satisfying specific criteria.
- all_of: Checks if all elements satisfy a condition.
- any_of: Checks if any element satisfies a condition.
- none_of: Checks if no elements satisfy a condition.
- equal: Checks if two ranges are equal.
- search: Searches for a subsequence in a range.

Modifying Sequence Operations:
- copy: Copies a range of elements.
- fill: Assigns a value to all elements in a range.
- transform: Applies a function to a range and stores result.
- replace: Replaces elements equal to a value.
- remove: Removes elements equal to a value.
- unique: Removes consecutive duplicate elements.
- reverse: Reverses the order of elements in a range.
- rotate: Rotates elements in a range.

Sorting Operations:
- sort: Sorts the elements in a range in ascending order.
- stable_sort: Sorts while maintaining relative order of equal elements.
- partial_sort: Partially sorts a range.
- nth_element: Positions the nth element in its sorted position.
- binary_search: Checks if a value exists in a sorted range.
- lower_bound: Finds first position where value could be inserted.
- upper_bound: Finds last position where value could be inserted.

Numeric Operations (from <numeric> header):
- accumulate: Computes sum of elements in a range.
- inner_product: Computes inner product of two ranges.
- partial_sum: Computes partial sums.
- iota: Fills range with sequentially increasing values.

===============================================================================
2. CONTAINERS
===============================================================================
Containers are data structures that store collections of objects. STL provides 
several types of containers optimized for different operations.

Sequence Containers (maintain sequential ordering):
- vector: Dynamic array with fast random access.
  - push_back(), pop_back(), size(), empty(), clear()
  - Access: arr[i] or arr.at(i)
  - Time: O(1) access, O(1) amortized insertion at end

- deque: Double-ended queue allowing fast insertion/deletion at both ends.
  - push_front(), push_back(), pop_front(), pop_back()
  - Time: O(1) insertion/deletion at both ends

- list: Doubly linked list.
  - push_front(), push_back(), insert(), erase()
  - Time: O(1) insertion/deletion anywhere with iterator

- forward_list: Singly linked list (space efficient).
  - push_front(), insert_after(), erase_after()
  - Time: O(1) insertion/deletion with iterator

- array: Fixed-size array.
  - size(), fill(), at()
  - Time: O(1) access, fixed size

Associative Containers (sorted, typically implemented as trees):
- set: Collection of unique elements, sorted.
  - insert(), erase(), find(), count()
  - Time: O(log n) for most operations

- multiset: Set allowing duplicate elements.
  - insert(), erase(), find(), count()
  - Time: O(log n) for most operations

- map: Collection of key-value pairs, sorted by keys, unique keys.
  - insert(), erase(), find(), operator[]
  - Time: O(log n) for most operations

- multimap: Map allowing duplicate keys.
  - insert(), erase(), find(), count()
  - Time: O(log n) for most operations

Unordered Associative Containers (hash tables):
- unordered_set: Hash table of unique elements.
  - insert(), erase(), find(), count()
  - Time: O(1) average, O(n) worst case

- unordered_multiset: Hash table allowing duplicates.
  - insert(), erase(), find(), count()
  - Time: O(1) average, O(n) worst case

- unordered_map: Hash table of key-value pairs, unique keys.
  - insert(), erase(), find(), operator[]
  - Time: O(1) average, O(n) worst case

- unordered_multimap: Hash table allowing duplicate keys.
  - insert(), erase(), find(), count()
  - Time: O(1) average, O(n) worst case

Container Adapters (provide different interface to existing containers):
- stack: LIFO (Last In First Out) structure.
  - push(), pop(), top(), empty(), size()
  - Usually implemented with deque or vector

- queue: FIFO (First In First Out) structure.
  - push(), pop(), front(), back(), empty(), size()
  - Usually implemented with deque

- priority_queue: Heap structure (max-heap by default).
  - push(), pop(), top(), empty(), size()
  - Time: O(log n) for push/pop, O(1) for top
  - Usually implemented with vector

===============================================================================
3. FUNCTIONS (FUNCTORS)
===============================================================================
Functors are objects that can be used as functions. They are classes that 
overload the operator() function.

Built-in Function Objects:
- Arithmetic: plus, minus, multiplies, divides, modulus, negate
- Comparison: equal_to, not_equal_to, greater, less, greater_equal, less_equal
- Logical: logical_and, logical_or, logical_not

Lambda Functions (C++11):
Lambda expressions provide a concise way to create anonymous function objects.
Syntax: [capture](parameters) -> return_type { body }
Example: 
  auto sum = [](int a, int b) { return a + b; };
  sort(v.begin(), v.end(), [](int a, int b) { return a > b; });

Capture Modes:
- []: Capture nothing
- [=]: Capture all by value
- [&]: Capture all by reference
- [x]: Capture x by value
- [&x]: Capture x by reference
- [=, &x]: Capture all by value except x by reference
- [&, x]: Capture all by reference except x by value

===============================================================================
4. ITERATORS
===============================================================================
Iterators are objects that point to elements in containers and can be used to 
traverse through the elements. They act as a bridge between containers and 
algorithms.

Types of Iterators:
1. Input Iterator: Can read elements sequentially (forward only, single pass).
   - Operations: ++, *, ==, !=
   - Example: istream_iterator

2. Output Iterator: Can write elements sequentially (forward only, single pass).
   - Operations: ++, *
   - Example: ostream_iterator

3. Forward Iterator: Can read/write and move forward (multiple passes).
   - Operations: ++, *, ==, !=
   - Example: forward_list iterators

4. Bidirectional Iterator: Can move forward and backward.
   - Operations: ++, --, *, ==, !=
   - Example: list, set, map iterators

5. Random Access Iterator: Can jump to any element in constant time.
   - Operations: ++, --, +, -, [], *, ==, !=, <, >
   - Example: vector, deque, array iterators

Iterator Functions:
- begin(): Returns iterator to the first element.
- end(): Returns iterator to one past the last element.
- rbegin(): Returns reverse iterator to the last element.
- rend(): Returns reverse iterator to one before the first element.
- cbegin(): Returns const iterator to the first element.
- cend(): Returns const iterator to one past the last element.

Advanced Iterator Operations:
- advance(it, n): Moves iterator forward/backward by n positions.
- distance(it1, it2): Returns number of elements between iterators.
- next(it, n): Returns iterator n positions ahead.
- prev(it, n): Returns iterator n positions behind.

Usage Example:
  vector<int> v = {1, 2, 3, 4, 5};
  for(auto it = v.begin(); it != v.end(); it++) {
      cout << *it << " ";
  }
  // Range-based for loop (uses iterators internally):
  for(int x : v) {
      cout << x << " ";
  }

===============================================================================
KEY ADVANTAGES OF STL
===============================================================================
1. Reusability: Pre-written, tested code ready to use.
2. Efficiency: Highly optimized implementations.
3. Type Safety: Template-based, compile-time type checking.
4. Flexibility: Works with any data type.
5. Interoperability: Containers, algorithms, and iterators work together.
6. Standard: Part of C++ standard, available everywhere.

===============================================================================
COMMON TIME COMPLEXITIES
===============================================================================
Vector:
  - Access: O(1)
  - Insert/Delete at end: O(1) amortized
  - Insert/Delete at beginning/middle: O(n)

List/Forward_list:
  - Access: O(n)
  - Insert/Delete (with iterator): O(1)

Deque:
  - Access: O(1)
  - Insert/Delete at ends: O(1)
  - Insert/Delete in middle: O(n)

Set/Map:
  - Search/Insert/Delete: O(log n)

Unordered_set/Unordered_map:
  - Search/Insert/Delete: O(1) average, O(n) worst

===============================================================================
*/
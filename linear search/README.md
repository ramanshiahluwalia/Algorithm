
#  Implementing linear search in C
 
Linear search, also known as sequential search, is a searching algorithm that traverses through a given list of elements in a sequential manner, comparing each element with a key until a match is found or the entire list has been searched. It is the simplest and easiest search algorithm and is suitable for small lists or unsorted data.


## Time complexity
The time complexity of linear search is O(n), where n is the size of the array. This means that in the worst-case scenario, when the element being searched for is the last element of the array or not present in the array, the algorithm will have to traverse through all the elements, resulting in a worst-case time complexity of O(n).








## Explanations
The given code implements linear search to find the index of an element in an array. It initializes an array of integers and a key element. It then iterates through the array to check if the key element matches with any of the array elements. If a match is found, the index is stored in a variable called 'index' and the loop is terminated. If no match is found, the value of 'x' remains 0, and the program prints "Element not found". If a match is found, the program prints "element is found at <index>".





## Sample output
````
Available array: 40 72 89 40 10 24

Element is found at 1
````



## Usage
Compile the code using a C compiler.
Run the executable file.
The program outputs the index of the element if found, or "Element not found" if not found.
Linear search is not the most efficient search algorithm, especially for large or sorted lists of elements. In comparison to other searching algorithms like binary search, interpolation search, or hash-based search, linear search has a higher time complexity and may not be suitable for large datasets.

In summary, linear search is a simple and easy-to-implement search algorithm that is suitable for small or unsorted data, but may not be the best choice for large or sorted datasets where other algorithms can perform better.

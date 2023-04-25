
#  Binary Search Implementation using Bubble Sort for Sorting


The code implements the binary search algorithm to find an element in an array. Before performing binary search, the code uses bubble sort to sort the array in ascending order.


## Bubble sort
The code uses the bubble sort algorithm to sort the array in ascending order. Bubble sort is a simple sorting algorithm that works by repeatedly swapping the adjacent elements if they are in the wrong order.



## Binary search
The code implements the binary search algorithm to find an element in the sorted array. Binary search is a search algorithm that works by repeatedly dividing the search interval in half. The algorithm compares the search element with the middle element of the sorted array. If the search element is smaller, it searches the left half of the array. If the search element is larger, it searches the right half of the array. The algorithm repeats this process until the element is found or the search interval is empty.





## Explanations
The code first takes an array of integers as input and calls the Bubble function to sort the array in ascending order. The Bubble function implements the bubble sort algorithm to sort the array in ascending order.
The code takes an array of integers and an integer element as input. It then performs bubble sort to sort the array in ascending order. It then performs binary search to find the element in the sorted array.





## Sample output
````
Enter an element: 88
Element found.


Enter an element: 99
Element not found.
````



## Usage
The code can be used to find an element in an array of integers. It is useful when the array is sorted in ascending order. The bubble sort algorithm is used to sort the array in ascending order before performing binary search.
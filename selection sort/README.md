
# Selection Sort Implementation in C

The selection sort algorithm is a simple sorting algorithm that sorts an array by repeatedly finding the minimum element from the unsorted part of the array and placing it at the beginning. The algorithm maintains two subarrays: the sorted subarray and the unsorted subarray. The sorted subarray is initially empty, and the unsorted subarray is the entire input array. The selection sort has a time complexity of O(n^2), making it inefficient on large lists.



## Time complexity of selection sort
The time complexity of selection sort is O(n^2), where n is the number of elements in the array. This means that as the size of the array increases, the time taken to sort it using selection sort grows at a rate proportional to the square of the size of the array.

Selection sort is not as efficient as other sorting algorithms such as merge sort, quicksort, or heap sort, which have a time complexity of O(n log n). However, selection sort can be easier to implement and may be faster for small arrays, as the overhead for the more complex algorithms may outweigh the benefits.







## Explanations

The code starts by initializing an array of 5 integers and then prints the initial array using a for loop. The SelectionSort() function is called, which implements the selection sort algorithm on the array. It first finds the smallest element in the unsorted part of the array and places it in the sorted part of the array. It repeats this process until the entire array is sorted. Finally, the sorted array is printed using another for loop.

The SelectionSort() function is implemented as follows:


````
void SelectionSort(int a[], int n)
{
int smallest_index;
int temp;
int i, j;
````



## Sample output
````
Available array:
55 11 99 66 77
````
````
Sorted array (Selection Sort):
11 55 66 77 99


````


## Usage
The Insertion Sort algorithm can be used for sorting a small number of elements. It is useful when the number of elements to be sorted is less than 10^5. The algorithm can be used in various applications such as sorting data in a database or sorting numbers in a game.


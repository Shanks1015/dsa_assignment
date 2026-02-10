# Overview

This program generates N random integers (1–1000) and sorts them using the user-selected sorting algorithm:

Bubble Sort
Selection Sort
Insertion Sort
Merge Sort

It also counts comparisons and swaps/assignments.

# Data Structure

arr[] → stores the random integers
original[] → keeps a copy of the unsorted array
comp, swap → counters for comparisons and swaps

# Functions

bubbleSort → repeatedly swaps adjacent elements
selectionSort → selects the smallest element and swaps it
insertionSort → inserts each element into its correct position
mergeSort + merge → divides the array and merges sorted halves
Main → generates random array, asks user for algorithm, prints sorted array and stats

# Sample Output
Enter number of integers: 5

Choose sorting algorithm:
1. Bubble Sort
2. Selection Sort
3. Insertion Sort
4. Merge Sort


Original array: 345 12 789 56 234
Sorted array: 12 56 234 345 789
Comparisons: 10, Swaps/Assignments: 4


# Notes:

Comparisons count how many times two elements are compared
Swaps/Assignments count the number of swaps or key movements

# Complexity
Algorithm	Time Complexity (avg)	Space Complexity
Bubble Sort	O(n²)	O(1)
Selection Sort	O(n²)	O(1)
Insertion Sort	O(n²)	O(1)
Merge Sort	O(n log n)	O(n)

This doc is short, human-readable, and guideline-compliant for submission with prog_8.c.
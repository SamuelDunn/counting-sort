/*
 This file contains the declaration for the function used to impliment the
 counting sort algorithm.

 int* myCountingSort(int *arrayToSort, int size, int range);
 takes a plain old array of type int as input, a "size" parameter that gives
 the size of the array, and a "range" parameter that must be greater than or
 equal to the largest possile that the input array can contain. Further, all
 elements in the input array must be greater than or equal to 0 therefore every
 element must fall witin the range [0, range]. Additionally, this function
 returns a new sorted array that is allocated on the heap leaving the original
 input array uneffected. The user should note that the array returned by this
 function will not be deleted automatically. It must be manually deleted from
 inside the calee before the calee before control is transferred from it.
*/

#ifndef my_counting_sort_h
#define my_counting_sort_h

int* myCountingSort(int *arrayToSort, int size, int range);

#endif

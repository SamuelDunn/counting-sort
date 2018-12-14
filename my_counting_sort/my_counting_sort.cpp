/*
 Definition for the function used to implement the counting sort algorithm.
 */

#include "my_counting_sort.hpp"

int* myCountingSort(int *arrayToSort, int size, int range) {
   int *countingArray = new int[range + 1];
   int *returnArray = new int[size];
   for(int count = 0; count < range + 1; count ++) {
      countingArray[count] = 0;
   }
   for(int count = 0; count < size; count ++) {
      countingArray[arrayToSort[count]] += 1;
   }
   //add up elements
   for(int count = 0; count < range; count ++) {
      countingArray[count + 1] += countingArray[count];
   }
   // shift all elements in array right
   for(int count = range - 1; count >= 0; count --) {
      countingArray[count + 1] = countingArray[count];
   }
   countingArray[0] = 0;
   // Now create the new sorted array
   for(int count = 0; count < size; count ++) {
      returnArray[countingArray[arrayToSort[count]]] = arrayToSort[count];
      countingArray[arrayToSort[count]] += 1;
   }
   delete [] countingArray;
   return returnArray;
}

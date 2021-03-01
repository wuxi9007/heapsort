// -----------------------------------
// COMP 211
//
// -----------------------------------


// ----------------------------------------------
// These are the only libraries that can be 
// used. Under no circumstances can additional 
// libraries be included
#include <stdio.h>	// IO functions
#include <stdlib.h> // atof function
#include <math.h>	// math functions
#include <string.h>	// string functions
#include "sort.h"	// your own functions

// DO NOT MODIFY: Swaps position of two v_structs in an array.
void swap (v_struct* p1, v_struct* p2) {
    v_struct  temp = *p1;
    *p1 = *p2;
    *p2 = temp;
    p1->count++;
    p2->count++;
}

void checkAndSwap (int childIndex, int parentIndex, int array_length, v_struct* v_array, int *largestIndex) {
    if (childIndex < array_length) {
        if (v_array[childIndex].value > v_array[parentIndex].value) {
            swap(&v_array[parentIndex], &v_array[childIndex]);
            *largestIndex = childIndex;
        } 
    } 

}
// DO NOT MODIFY: Prints the contents of each v_struct in an array; used for grading.
void print_array(v_struct* v_array, int array_length) {
    for(int i = 0; i < array_length; i++) {
        printf("[priority: %d value: %d count: %d]\n", v_array[i].priority, v_array[i].value, v_array[i].count);
    }
}

// PART 1: HEAPIFICATION

// TO-DO: Sort array such that values form a maximum heap.
void max_heapify_value( v_struct* v_array, int array_length ) {
    //check each node in the array -> through a for loop, starting index is array-length -1, ending index is 0

    for (int i = array_length-1; i > 0; i--) {
        int currentIndex = i; 
        //while loop that continues when the currentIndex is smaller than the arraylength
        while (currentIndex < array_length){
            
            int parentIndex = (currentIndex - 1) / 2;
            int leftChildIndex = parentIndex * 2 + 1;
            int rightChildIndex = parentIndex * 2 + 2;   

            int *largestIndex = &parentIndex;

            //check if left child exists, if so, swap if necessary 
            checkAndSwap(leftChildIndex, parentIndex, array_length, v_array, largestIndex);
            checkAndSwap(rightChildIndex, parentIndex, array_length, v_array, largestIndex);
            if (currentIndex == *largestIndex) {
                  break;
            }
            currentIndex = *largestIndex;

        }  
    }
}

// TO-DO: Sort array such that values form a minimum heap.
void min_heapify_value( v_struct* v_array, int array_length ) {

}

// TO-DO: Sort array such that priorities form a maximum heap.
void max_heapify_priority( v_struct* v_array, int array_length ) {

}

// TO-DO: Sort array such that priorities form a minimum heap.
void min_heapify_priority( v_struct* v_array, int array_length ) {

}

// PART 2: HEAPSORT

// ------------------------------------
// Function prototype
// description: sort (using heap sort algo) the array using value field 
// return:
//	 error code: -1=error or 0=no error
// arguments:
//	 sort_type = "ascend" or "descend"
// 	 v_struct* = array 
//   array_length = number of v_struct elements in array

int sort_value( char* sort_type, v_struct* v_array, int array_length ) {
    return 0;
}

// ------------------------------------
// Function prototype
// description: sort (using heap sort algo) the array using priority field
// return:
//	 error code: -1=error or 0=no error)
// arguments:
//	 sort_type = "ascend" or "descend"
// 	 v_struct* = array 
//   array_length = number of v_struct elements in array

int sort_priority( char* sort_type, v_struct* v_array, int array_length ) {
    return 0;
}

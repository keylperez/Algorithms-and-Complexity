#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "HeapifyArray.h"
//#include "HeapifyStruct"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
//	HeapStruct hs;
//	initHeap(&hs);

	int heap[SIZE + 1];
	heap[0] = 0;
	
	int array[] = {29, 25, 3, 23, 20, 6, 24, 5, 12, 17, 14, 2, 9, 18, 19};
//	int size = sizeof(array)/sizeof(int);
	buildHeap(array, SIZE, heap);
	
	displayHeap(heap);
//	
//	free(heap.set);
	
	return 0;
}

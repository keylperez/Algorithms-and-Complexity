#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "Functions.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	Heap heap;
	initHeap(&heap);
	
	int array[] = {29, 25, 3, 23, 20, 6, 24, 5, 12, 17, 14, 2, 9, 18, 19};
	int size = sizeof(array)/sizeof(int);
	buildHeap(array, size, &heap);
	
	displayHeap(heap);
	
	free(heap.set);
	
	return 0;
}

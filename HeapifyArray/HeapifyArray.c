#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "HeapifyArray.h"


int getLeftChild(int n){
	return (2*n);
}

int getRightChild(int n){
	return (2*n) + 1;
}

int getParent(int n){
	return n/2;
}

void buildHeap(int arr[], int size, int heap[]){
	
	int i;
	for(i = 0; i < size; i++){
		heapify(arr[i], ++heap[0], heap);
		displayHeap(heap);
	}
	
}

void heapify(int data, int index, int heap[]){
	
	heap[index] = data;
	int parent = getParent(index);

	if(heap[parent] > data && parent != 0){
		
		heap[index] = heap[parent];
		heapify(data, parent, heap);
	} 

}

bool isEmpty(int heap[]){
	return heap[0] == 0;
}

void displayHeap(int heap[]){
	
	int i;
	printf("\nHeap: \n");
	for(i = 0; i <= heap[0]; i++){
		printf("%-4d", heap[i]);
	}
	printf("\n");
	for(i = 0; i < SIZE + 1; i++){
		printf("%-4d", i);
	}
	printf("\n");
}

//#include <stdio.h>
//#include <stdlib.h>
//#include <stdbool.h>
//#include "HeapifyStruct.h"
//
//void initHeap(HeapStruct *heap){
//	heap->lastIndex = 0;
//	heap->set = (int *) malloc(SIZE * sizeof(int));
//	if(heap->set == NULL){
//		printf("\nError allocating memory for heap!!");
//		exit(0);
//	}
//	
//	printf("\nSuccess initialize!!");
//}
//
//int getLeftChild(int n){
//	return (2*n) + 1;
//}
//
//int getRightChild(int n){
//	return (2*n) + 2;
//}
//
//int getParent(int n){
//	return (n - 1)/2;
//}
//
//void buildHeap(int arr[], int size, HeapStruct *heap){
//	
//	int i;
//	for(i = 0; i < size; i++){
//		heapify(arr[i], heap->lastIndex++, heap);
//		displayHeap(*heap);
//	}
//	
//}
//
//void heapify(int data, int index, HeapStruct *heap){
//	
//	heap->set[index] = data;
//	int parent = getParent(index);
//	
//
//	if(heap->set[parent] > data){
//		
//		heap->set[index] = heap->set[parent];
//		heapify(data, parent, heap);
//	} 
//
//}
//int popHeap(HeapStruct *heap){
//	
//	int peek = peekHeap(*heap);
//	
//	heap->set[0] = heap->set[heap->lastIndex--];
//}
//
//int peekHeap(HeapStruct heap){
//	return heap.set[0];
//}
//
//bool isEmpty(HeapStruct heap){
//	return heap.lastIndex == 0;
//}
//
//void displayHeap(HeapStruct heap){
//	
//	int i;
//	printf("\nHeap: ");
//	for(i = 0; i < heap.lastIndex; i++){
//		printf("%-4d", heap.set[i]);
//	}
//	printf("\n");
//}

#ifndef HEAPIFY_ARRAY
#define HEAPIFY_ARRAY
#define SIZE 15

int getLeftChild(int n);

int getRightChild(int n);

int getParent(int n);

void buildHeap(int arr[], int size, int heap[]);

void heapify(int data, int index, int heap[]);


bool isEmpty(int heap[]);

void displayHeap(int heap[]);

#endif	

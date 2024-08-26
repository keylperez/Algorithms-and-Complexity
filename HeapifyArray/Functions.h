#ifndef HEAPIFY_FUNCTIONS
#define HEAPIFY_FUNCTIONS
#define SIZE 20

typedef struct {
	int *set;
	int lastIndex;
} Heap;

void initHeap(Heap *heap);

int getLeftChild(int n);

int getRightChild(int n);

int getParent(int n);

void buildHeap(int arr[], int size, Heap *heap);

void heapify(int data, int index, Heap *heap);

int popHeap(Heap *heap);

int peekHeap(Heap heap);

bool isEmpty(Heap heap);

void displayHeap(Heap heap);

#endif	

#ifndef HEAPIFY_ARRAY
#define HEAPIFY_ARRAY

typedef struct {
	int *set;
	int lastIndex;
} MaxHeap;

void initHeap(MaxHeap *heap);

int getLeftChild(int n);

int getRightChild(int n);

#endif

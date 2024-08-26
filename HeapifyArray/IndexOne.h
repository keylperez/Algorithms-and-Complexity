#ifndef INDEX_ONE
#define INDEX_ONE

typedef struct {
	int *set;
} MaxHeap;

void initHeap(MaxHeap *heap);

int getLeftChild(int n);

int getRightChild(int n);

#endif

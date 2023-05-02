#include <stdbool.h>
#define MAX 1000

typedef struct {
    int count;
    int data[MAX];
} List;

void insert(List*, int, int);
void delete(List*, int);
void retrieve(List*, int, int*);
void init(List*);
bool isEmpty(List*);
int length(List*);
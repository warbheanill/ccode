#include <stdio.h>
#include<malloc.h>
struct LinkedListNode{
    int data;
    struct Node *next;
};
typedef struct LinkedListNode Node;
Node *start, *temp;
int main() {
    // start = (struct Node *) malloc(sizeof(struct Node));
    start = ( Node *) malloc(sizeof( Node));
    return 0;
}

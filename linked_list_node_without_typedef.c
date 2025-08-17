#include <stdio.h>
#include<malloc.h>
struct Node{
    int data;
    struct Node *next;
};

struct Node *start, *temp;
int main() {
    start = (struct Node *) malloc(sizeof(struct Node));

    return 0;
}

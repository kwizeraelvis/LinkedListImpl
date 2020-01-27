#include <stdio.h>
#include <stdlib.h>



typedef struct node{
    int data;
    struct node *next;
}NODE;

main() {
   NODE *h = NULL;
   h = (NODE*) malloc(sizeof(NODE));
   h->data = 50;
   h->next = NULL;
   printf("The value is: %d", h->data);
}
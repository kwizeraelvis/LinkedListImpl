#include <stdio.h>
#include <stdlib.h>
#include "include/LinkedList.h"



main() {
   NODE *h = NULL;
   h = (NODE*) malloc(sizeof(NODE));
   h->data = 50;
   h->next = NULL;
   printf("The value is: %d", h->data);
}
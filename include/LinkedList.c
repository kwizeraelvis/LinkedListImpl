//
// Created by elvis on 1/27/20.
//

#include "LinkedList.h"


push(){
    NODE *p = (NODE) malloc(sizeof(NODE));
    scanf("%d", &p->data);
    p->next = h;
    h=p;
}
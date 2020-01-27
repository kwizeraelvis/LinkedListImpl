//
// Created by elvis on 1/27/20.
//

#include "LinkedList.h"

HEAD *h = NULL;

push(){
    NODE *p;
    p = (NODE*) malloc(sizeof(NODE));
    scanf("%d", &p->data);
    p->next = h;
    h = p;
}

display(){
    NODE *t;
    t = h;
    while (t != NULL){
        printf("%d\t", t->data);
        t = t->next;
    }
}
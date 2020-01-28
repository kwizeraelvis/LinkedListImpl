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

append(){
    NODE *p,*q;
    p = (NODE*)malloc(sizeof(NODE));
    scanf("%d\t", &p->data);
    p->next = NULL;
    if(h == NULL){
        h = p;
    }else{
        q = h;
        while (q->next != NULL){
            q = q->next;
            q->next = p;
        }
    }
}
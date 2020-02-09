//
// Created by elvis on 1/27/20.
//

#ifndef LINKEDLIST_LINKEDLIST_H
#define LINKEDLIST_LINKEDLIST_H

#include <stdlib.h>
#include <stdio.h>

typedef struct node{
    int data;
    struct node *next;
}NODE, HEAD;

void push();
void display();
void append();


#endif //LINKEDLIST_LINKEDLIST_H

//
//  Link_Stack.c
//  Algorithm
//
//  Created by 양혜리 on 25/09/2019.
//  Copyright © 2019 hryang. All rights reserved.
//

#include "Link_Stack.h"
#include <stdio.h>
#include <stdlib.h>
/*
typedef int element;
typedef struct StackNode {
    element item;
    struct StackNode *link;
    
} StackNode;

typedef struct {
    StackNode *top;
} LinkedStackType;

void init(LinkedStackType *s) {
    s->top = NULL;
}

int is_empty(LinkedStackType *s) {
    return (s->top == NULL);
}

void push(LinkedStackType *s, element item) {
    StackNode *temp = (StackNode *)malloc(sizeof(StackNode));
    if ( temp == NULL ) {
        fprintf(stderr, "메모리 할당에러\n");
        return;
    } else {
        temp->item = item;
        temp->link = s->top;
        s->top = temp;
    }
}

element pop(LinkedStackType *s) {
    if (is_empty(s)) {
        fprintf(stderr, "스택이 비어있음\n");
        exit(1);
    } else {
        StackNode *temp=s->top;
        element item = temp->item;
        s->top = s->top->link;
        free(temp);
        return item;
    }
}

element peek(LinkedStackType *s) {
    if (is_empty(s)) {
        fprintf(stderr, "스택이 비어있음\n");
        exit(1);
    } else {
        return s->top->item;
    }
}
 */

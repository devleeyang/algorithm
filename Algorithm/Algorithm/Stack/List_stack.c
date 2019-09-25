//
//  List_stack.c
//  Algorithm
//
//  Created by 양혜리 on 25/09/2019.
//  Copyright © 2019 hryang. All rights reserved.
//

#include "List_stack.h"
#include <stdio.h>
#include <stdlib.h>
/*
#define MAX_STACK_SIZE 100
#define MAX_STRING 100

typedef struct {
    int student_no;
    char name[MAX_STRING];
    char address[MAX_STRING];
} element;

// 정수배열버전
//typedef int element;
element stack[MAX_STACK_SIZE];

int top = -1;

int is_empty() {
    return (top == -1);
}

int is_full() {
    return (top == (MAX_STACK_SIZE-1));
}

void push(element item) {
    if (is_full()) {
        fprintf(stderr, "스택 포화 에러\n");
    } else {
        stack[++top] = item;
    }
}

element pop() {
    if (is_empty()) {
        fprintf(stderr, "스택 포화 에러\n");
        exit(1);
    } else {
        return stack[top--];
    }
}

element peek() {
    if (is_empty()) {
        fprintf(stderr, "스택 포화 에러\n");
        exit(1);
    } else {
        return stack[top];
    }
}
*/

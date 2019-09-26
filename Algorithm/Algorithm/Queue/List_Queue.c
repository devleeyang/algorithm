//
//  List_Queue.c
//  Algorithm
//
//  Created by 양혜리 on 26/09/2019.
//  Copyright © 2019 hryang. All rights reserved.
//

#include "List_Queue.h"
#include <stdio.h>
#include <stdlib.h>

typedef int element;
typedef struct QueueNode {
    element item;
    struct QueueNode *link;
} QueueNode;
typedef struct {
    QueueNode *front, *rear;
} QueueType;

void error(char *message) {
    fprintf(stderr, "%s\n",message);
}

void init(QueueType *q) {
    q->front = q->rear = NULL;
}

int is_empty(QueueType *q) {
    return (q->front==NULL);
}

void enqueue(QueueType *q, element item) {
    QueueNode *temp=(QueueNode *)malloc(sizeof(QueueNode));
    if (temp == NULL) {
         error("메모리를 할당할 수 없습니다.");
         exit(1);
    } else {
        temp->item = item;
        temp->link = NULL;
        if (is_empty(q)) {
            q->front = temp;
            q->rear = temp;
        } else {
            q->rear->link = temp;
            q->rear = temp;
        }
    }
}

element dequeue(QueueType *q) {
    QueueNode *temp = q->front;
    element item;
    if (is_empty(q)) {
        error("큐가 비어 있습니다");
        exit(1);
    } else {
        item = temp->item;
        q->front = q->front->link;
        if (q->front == NULL) {
            q->rear = NULL;
        }
        free(temp);
        return item;
    }
}

element peek(QueueType *q) {
    if (is_empty(q)) {
        error("큐가 비어 있습니다");
        exit(1);
    } else {
    return q->front->item;
    }
}

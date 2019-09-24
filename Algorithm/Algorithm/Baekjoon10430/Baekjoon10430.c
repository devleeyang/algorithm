//
//  Baekjoon10430.c
//  Algorithm
//
//  Created by 양혜리 on 24/09/2019.
//  Copyright © 2019 hryang. All rights reserved.
//

#include "Baekjoon10430.h"

void solution1() {
    int a;
    int b;
    int c;
    scanf("%d %d %d", &a, &b, &c);
    printf("%d\n", (a+b)%c);
    printf("%d\n", (a%c+b%c)%c);
    printf("%d\n", (a*b)%c);
    printf("%d\n", (a%c*b%c)%c);
}

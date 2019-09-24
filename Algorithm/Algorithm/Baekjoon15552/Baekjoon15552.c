//
//  Baekjoon15552.c
//  Algorithm
//
//  Created by 양혜리 on 24/09/2019.
//  Copyright © 2019 hryang. All rights reserved.
//

#include "Baekjoon15552.h"

void solution3() {
    int n;
    int a;
    int b;
    scanf("%d", &n);
    for (int i = 0; i < n; i++ ) {
        scanf("%d %d", &a, &b);
        printf("%d", a+b);
    }
}

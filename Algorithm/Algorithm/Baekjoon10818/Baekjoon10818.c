//
//  Baekjoon10818.c
//  Algorithm
//
//  Created by 양혜리 on 24/09/2019.
//  Copyright © 2019 hryang. All rights reserved.
//

#include "Baekjoon10818.h"

void solution4() {
    int n;
    int max = -1000000;
    int min = 1000000;
    int a;
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++ ) {
        scanf("%d", &a);
        if (max < a) {
            max = a;
        }
        if (min > a) {
            min = a;
        }
    }
    
    printf("%d %d", min, max);
}

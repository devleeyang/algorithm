//
//  Baekjoon2884.c
//  Algorithm
//
//  Created by 양혜리 on 24/09/2019.
//  Copyright © 2019 hryang. All rights reserved.
//

#include "Baekjoon2884.h"
#include "math.h"

void solution2() {
    int h;
    int m;
    scanf("%d %d", &h, &m);
    if (m-45 < 0) {
        if (h-1 < 0) {
            h = 23;
        } else {
            h--;
        }
      m = 60 - abs(m-45);
    } else {
        m = m - 45;
    }
    printf("%d %d", h, m);
}

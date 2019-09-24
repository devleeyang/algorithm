//
//  Baekjoon15596.c
//  Algorithm
//
//  Created by 양혜리 on 24/09/2019.
//  Copyright © 2019 hryang. All rights reserved.
//

#include "Baekjoon15596.h"

long long sum(int *a, int n) {
    long long ans = 0;
    for (int i=0; i<n; i++) {
        ans += a[i];
    }
    return ans;
}

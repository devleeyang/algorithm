//
//  Baekjoon4344.c
//  Algorithm
//
//  Created by 양혜리 on 24/09/2019.
//  Copyright © 2019 hryang. All rights reserved.
//

#include "Baekjoon4344.h"

void solution5() {
    int n;
    int a;
    int b;
    int array[1000] = {0,};
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++ ) {
        scanf("%d", &a);
        int total = 0;
        for (int j = 0; j < a; j++ ) {
            scanf("%d", &b);
            total += b;
            array[j] = b;
        }
        
        double average = (double)total/a;
        int count = 0;
        for (int k = 0; k < a; k++ ) {
            if(array[k] > average) {
                count++;
            }
        }
        printf("%.3f%%\n", (double)count * 100 / a);
    }
}

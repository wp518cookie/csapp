//
// Created by wuping on 2019/2/27.
//
#include <stdio.h>

float sum_elements(float a[], unsigned length);

int main(void) {
    float a[3] = {1, 2, 3};
    printf("%.2f", sum_elements(a, 0u));
}

float sum_elements(float *a, unsigned length) {
    int i;
    float result = 0;
    for (i = 0; i < length; i++) {
        result += a[i];
    }
    return result;
}
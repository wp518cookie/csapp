//
// Created by wuping on 2019/2/27.
//
#include <stdio.h>

void inplace_swap(int *x, int *y) {
    *y = *x ^ *y;
    *x = *x ^ *y;
    *y = *x ^ *y;
}

int main(void) {
    int a = 2;
    int b = 3;
    int *pa = &a;
    int *pb = &b;
    printf("pa : %d, pb: %d \n",*pa, *pb);
    inplace_swap(pa, pb);
    printf("a : %d, b : %d", a, b);
}
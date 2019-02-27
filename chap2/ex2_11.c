//
// Created by wuping on 2019/2/27.
//
#include <stdio.h>
void reverse_array(int a[], int cnt);
void inplace_swap(int *a, int *b);

int main(void) {
    int a[5] = {1, 2, 3, 4, 5};
    int len = sizeof(a);
    int int_len = sizeof(int);
    int size = len / int_len;
    reverse_array(a, size);
    for (int i = 0; i < size; i++) {
        printf("%d\n", a[i]);
    }
}

void reverse_array(int a[], int cnt) {
    int first, last;
    for (first = 0, last = cnt - 1;
         first < last;
         first++,last--) {
        inplace_swap(&a[first], &a[last]);
    }
}

void inplace_swap(int *x, int *y) {
    *y = *x ^ *y;
    *x = *x ^ *y;
    *y = *x ^ *y;
}
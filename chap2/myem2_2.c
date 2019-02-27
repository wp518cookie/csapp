//
// Created by wuping on 2019/2/27.
//
/**
 * 移位测试，c有控制，如果移动位置为k，实际被移动位数w小于k，实际移动的值是 k % w
 */
#include <stdio.h>

int main() {
    int a = 10;
    int k = 32;
    //余数为0，并不会移动任何位数,试了下java里头貌似也有类似机制
    printf("%d", a << k);
}

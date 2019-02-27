//
// Created by wuping on 2019/2/27.
//
#include <stdio.h>

int main() {
    int x;
    int y;
    printf("请输入x : \n");
    scanf("%d", &x);
    printf("请输入y : \n");
    scanf("%d", &y);
    if (!(x ^ y)) {
        printf("x 和 y 相等!\n");
    } else {
        printf("x 和 y 不相等!\n");
    }
}
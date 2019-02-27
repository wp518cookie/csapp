//
// Created by wuping on 2019/2/27.
//
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    unsigned int i = 0u;
    int j = -1;
    // java中不存在类似情况，无符号整数与有符号整数进行比较，会将有符号整数的位，依次挪到tmax后面
    printf("%d", i > j);
}

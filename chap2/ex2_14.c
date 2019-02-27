//
// Created by wuping on 2019/2/27.
//
/**
 * x : 0x66 : 0110 0110
 * y : 0x39 : 0011 1001
 * x & y : 0x20
 * x | y : 0x7f
 * ~x|~y : 0xdf
 * x &!y : 0x66
 * ===============
 * x && y : 0x01
 * x || y : 0x01
 * !x||!y : 0x00
 * x &&~y : 0x01
 */
#include <stdio.h>

int main() {
    int x = 0x66;
    int y = 0x39;
    printf("x & y : %.2x, my answer: 0x20\n", x & y);
    printf("x | y : %.2x, my answer: 0x7f\n", x | y);
    printf("~x|~y : %.2x, my answer: 0xdf\n", ~x | ~y); // wrong answer     ffffffdf
    printf("x &!y : %.2x, my answer: 0x66\n", x & !y);
    printf("x && y : %.2x, my answer: 0x01\n", x && y);
    printf("x || y : %.2x, my answer: 0x01\n", x || y);
    printf("!x||!y : %.2x, my answer: 0x00\n", !x || !y);
    printf("x &&~y : %.2x, my answer: 0x01\n", x && ~y);
}



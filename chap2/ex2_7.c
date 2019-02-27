//
// Created by wuping on 2019/2/27.
//

#include <stdio.h>
#include <string.h>

typedef unsigned char *byte_pointer;

void show_byte(byte_pointer p, int len) {
    size_t i;
    for (i = 0; i < len; i++) {
        printf("%.2x", p[i]);
        printf("%c", '|');
    }
    printf("\n");
}

int main() {
    const char *s = "abcdef";
    show_byte((byte_pointer)s, strlen(s));
}


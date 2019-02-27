//
// Created by wuping on 2019/2/26.
//

#include <stdio.h>
#include <string.h>
// typedef 定义别名：为unsigned char类型的指针定义别名byte_pointer
// mac貌似用的是小端法
typedef unsigned char *byte_pointer;

void show_bytes(byte_pointer start, size_t len) {
    size_t i;
    for (i = 0; i < len; i++) {
        printf("%.2x", start[i]); // %x 以十六进制输出
        printf("%c", '|');
    }
    printf("\n");
}

// sizeof 内存占用的字节数
void show_int(int x) {
    show_bytes((byte_pointer) &x, sizeof(int));
}

void show_float(float x) {
    show_bytes((byte_pointer) &x, sizeof(float));
}

void show_pointer(void *x) {
    show_bytes((byte_pointer) &x, sizeof(void *));
}

int main() {
    // 指针确实占8个字节，char类型的指针会以1字节单位挪动
//    printf("sizeof byte_pointer: %d\n", sizeof(byte_pointer));
//    int val;
//    printf("请输入需要打印的val:");
//    scanf("%d", &val);
//    printf("\n");
//    float fval = (float) val;
//    int *pval = &val;
//    show_int(val);
//    show_float(fval);
//    show_pointer(pval);
    const char *s = "abcdef";
    show_bytes((byte_pointer)s, strlen(s));
}




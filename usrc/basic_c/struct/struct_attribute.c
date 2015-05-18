/*
 * 1) The structure padding happens,
 * 2) In the first structure, size will be 10 - aligned to 1 byte
 * 3) In the second structure, size will be 12 - aligned to 4 byte
 * 4) In the second structure, size will be 10 - default aligned to 1 byte
 */

#include <stdio.h>

typedef struct __attribute__((packed, aligned(1))) s {
        int a;
        char b;
        int c;
        char d;
} st1;

typedef struct t {
        int a;
        char b;
        int c;
        char d;
}__attribute__((packed, aligned(4))) st2;

typedef struct u {
        int a;
        char b;
        int c;
        char d;
}__attribute__((packed)) st3;

int main()
{
        printf("The sizeof struct 'st1' is :%ld \n", sizeof(st1));
        printf("The sizeof struct 'st2' is :%ld \n", sizeof(st2));
        printf("The sizeof struct 'st3' is :%ld \n", sizeof(st3));

        return 0;
}


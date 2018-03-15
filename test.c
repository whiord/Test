#include "stdio.h"

static void foo1(void) {
    printf("Hi, `foo1()`\n");
}

static void foo2(void) {
    printf("Hi, `foo2()`\n");
}

int main(void) {
    foo1();
    return 0;
}

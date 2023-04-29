#include <stdio.h>

void foo(void);
void bar(void);

int main() {
    foo();
    bar();
    foo();
    return 0;
}

void foo(void) {
    static int i = 0; // 宣告一個靜態變數
    i++;
    printf("foo: i=%d\n", i);
}

void bar(void) {
    int j = 0;
    j++;
    printf("bar: j=%d\n", j);
}


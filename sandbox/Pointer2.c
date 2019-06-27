#include <stdio.h>

void add(int* x) {
    ++*x;
}
int main() {
    int foo = 10;
    add(&foo);
    printf("%d\n", foo);
}

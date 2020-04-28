#include <stdio.h>

// simple function
int add(int a, int b) {
    return a + b;
}

int main() {
    int num = add(5,10);
    printf("%d\n", num);
    return 0;
}

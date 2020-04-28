#include <stdio.h>
#include <string.h>


struct  Foo {
    int num;
    char name[10];
};

// structures are copied by value
// cannot by changed by func if
// you do not pass a pointer

void change(struct Foo foo) {
    foo.num = 22;
}

int main() {
    struct Foo foo;
    foo.num = 50;
    strcpy(foo.name, "hello");
    change(foo);
    printf("%d\n", foo.num);
    return 0;
}

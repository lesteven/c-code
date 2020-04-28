#include <stdio.h>
#include <string.h>


struct  Foo {
    int num;
    char *name;
};


int main() {
    struct Foo foo;
    foo.num = 50;
    foo.name = "hello there!";
    printf("%s\n", foo.name);

    foo.name = "goodbye!";
    printf("%s\n", foo.name);

    foo.name = "goodbye farewell so long!";
    printf("%s\n", foo.name);
    return 0;
}

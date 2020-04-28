#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main() {
    // print array of chars
    char word[] = "hey";
    printf("%s\n", word);

    // &word and word has same address for first element
    printf("%p\n", word);
    printf("%p\n", &word);
    printf("%p\n", &word[0]);

    // when incremented, the values are different
    printf("%c\n", word[1]);
    printf("%p\n", &word+1);
    printf("%p\n", word+1);

    /*
    this will not work b/c there's not enough space
    strncpy(word, "hello there!", 13);
    printf("%s\n", word);
    */
    printf("sizeof(word) = %lu\n", sizeof(word));

    return 0;
}

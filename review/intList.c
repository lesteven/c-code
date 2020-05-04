#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int value;
    struct Node *next;
} Node;

int main() {
    Node *start = NULL;
    for (int i = 0; i < 10; i++) {
        Node *node = malloc(sizeof(*start));
        node->value = i;
        printf("%d %p\n", node->value, node);
        node->next = start;
        start = node;
    }
    Node *node_it = start;
    while (node_it != NULL) {
        printf("node_value: %d\n", node_it->value);
        node_it = node_it->next;
    }

    return 0;
}


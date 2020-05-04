#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    char *value;
    struct Node *next;
} Node;

int main() {
    Node first = { "hello" };
    Node second = { "goodbye" };
    first.next  = &second;

    Node *curr_node = &first;

    while (curr_node != NULL) {
        printf("%s\n", curr_node->value);
        curr_node = curr_node->next;
    }

    Node *start = NULL;

    for (int i = 0; i < 10; i++) {
        char *str_num = malloc(2 *sizeof(char));
        sprintf(str_num, "%d",i);
        //Node node = { str_num };
        Node *node = malloc(sizeof(*start));
        node->value = str_num;
        printf("%s %p\n", node->value, node);
        node->next = start;
        start = node;
    }
    Node *node_it = start;
    int count = 0;
    while (node_it != NULL) {
        printf("node_value: %s %d\n", node_it->value, count);
        node_it = node_it->next;
        if (count > 15) {
            break;
        }
        count++;
    }

    return 0;
}


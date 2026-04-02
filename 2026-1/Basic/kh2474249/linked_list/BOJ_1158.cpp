#include <stdio.h>
#include <stdlib.h>

typedef struct NODE{
    int data;
    struct NODE* next;
}NODE;

int main() {
    int N,K;
    scanf("%d %d", &N, &K);

    NODE* head = NULL;
    NODE* temp = NULL;

    head = (NODE*)malloc(sizeof(NODE));
    temp = head;
    head->data = 1;

    for (int i = 2; i <= N; i++) {
        NODE* new_node = (NODE*)malloc(sizeof(NODE));
        new_node->data = i;
        temp->next = new_node;
        temp = temp->next;
    }

    temp->next = head;

    printf("<");

    int count = 1;
    while (temp->next != temp) {
        if (count == K) {
            NODE* delete = temp->next;
            printf("%d, ", delete->data);
            temp->next = delete->next;
            free(delete);
            count = 1;
        } else {
            temp = temp->next;
            count++;
        }
    }

    printf("%d", temp->data);
    printf(">");
    free(temp);

    return 0;
}
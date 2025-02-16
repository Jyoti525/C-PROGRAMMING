// C Program to Create a Copy of a Singly Linked List using Recursion
#include <stdio.h>
#include <stdlib.h>

// Structure for a node in the linked list
struct Node {
    int data;
    struct Node *next;
};


struct Node *copyLinkedList(struct Node *head) {
    if (head == NULL) {
        return NULL; 
    }

    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        perror("Memory allocation failed");
        exit(1);
    }
    newNode->data = head->data;

    newNode->next = copyLinkedList(head->next);

    return newNode;
}

void printList(struct Node *head) {
    while (head != NULL) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

struct Node *createList() {
    struct Node *head = (struct Node *)malloc(sizeof(struct Node));
    head->data = 10;

    struct Node *second = (struct Node *)malloc(sizeof(struct Node));
    second->data = 20;
    head->next = second;

    struct Node *third = (struct Node *)malloc(sizeof(struct Node));
    third->data = 30;
    second->next = third;

    third->next = NULL;

    return head;
}

int main() {
    struct Node *originalList = createList();

    printf("Original list: ");
    printList(originalList);

    struct Node *copiedList = copyLinkedList(originalList);

    printf("Copied list: ");
    printList(copiedList);

    return 0;
}

void freeList(struct Node *head) {
    while (head != NULL) {
        struct Node *temp = head;
        head = head->next;
        free(temp);
    }
}
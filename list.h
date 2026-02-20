#ifndef LIST_H
#define LIST_H

typedef struct Node {
    int data;
    struct Node* next;
    struct Node* prev;
} Node;

typedef struct List {
    Node* head;
    Node* tail;
} List;

List* create_list();
void insert_at_beginning(List* list, int data);
void insert_at_end(List* list, int data);
void delete_node(List* list, int data);
void print_list(List* list);
void free_list(List* list);

#endif


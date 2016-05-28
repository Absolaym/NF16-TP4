#ifndef TP4_H
#define TP4_H

typedef struct dir {
    char *name;
    int status;
    Node *sub;
    struct dir *father;
} Dir;

typedef struct node {
    Dir *dir;
    struct node *lc;
    struct node *rc;
} Node;

Dir *create_dir(char* name, int status, Node *sub);

Node *create_node(Dir *dir, Node *rc, Node *lc);

Dir *search_dir(char* name, Node *sub);

int add_dir_to_sub(Dir *dir, Node **sub);

void print_tree(Node *sub);

void print_path(Dir *dir);

#endif // TP4_H

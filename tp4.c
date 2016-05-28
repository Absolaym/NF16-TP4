#include <stdio.h>
#include <stdlib.h>
#include "tp4.h"


void emptyBuffer(void)
{
  int c;
  while((c=getchar()) != EOF && c != '\n');
}


Dir *create_dir(char* name, int status, Node *sub, Dir *father) {
    Dir *directory = malloc(sizeof(Dir));
    if(directory == NULL) return NULL;

    if(name == NULL || status < 0 || status > 1 || sub == NULL)
        return NULL;

    directory->name = name;
    directory->status = status;
    directory->sub = sub;
    directory->father = father;

    return directory;
}

Node *create_node(Dir *dir, Node *rc, Node *lc) {
    Node *node = malloc(sizeof(Node));
    if(node == NULL) return NULL;

    if(dir == NULL) return NULL;

    node->dir = dir;
    node->rc = rc;
    node->lc = lc;

    return node;
}

Dir *search_dir(char* name, Node *sub) {

}

int add_dir_to_sub(Dir *dir, Node **sub) {

}

void print_tree(Node *sub) {

}

void print_path(Dir *dir) {

}

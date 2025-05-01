#ifndef RED_BLACK_TREE_H
#define RED_BLACK_TREE_H

#include <stdio.h>
#include <stdlib.h>

typedef enum { RED, BLACK } Color;

struct RBNode {
    void *data;
    Color color;
    struct RBNode *left, *right, *parent;
};

struct RBTree {
    int (*cmp)(void *, void *);
    struct RBNode *root;
    struct RBNode *TNULL; // Sentinel node
};

int initializeRBTree(struct RBTree **tree, int (*compare)(void *, void *));
int insertRBTree(struct RBTree *tree, void *data);
int removeminRBTree(struct RBTree *tree, void **data);

#endif // RED_BLACK_TREE_H
//
// Created by KH2174 on 09-10-2017.
//

#ifndef LL_TREEUTIL_H
#define LL_TREEUTIL_H
struct node{
    int data;
    struct node *left;
    struct node *right;
};
typedef struct node Tree;
void addNode(Tree **root,int data);
void inOrderTraversal(Tree *root);
void preOrderTraversal(Tree *root);
void postOrderTraversal(Tree *root);


#endif //LL_TREEUTIL_H

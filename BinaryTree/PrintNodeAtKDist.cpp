//
// Created by Abhishek Singh on 09-10-2017.
//
//
//Print nodes at k distance from root

//Given a root of a tree, and an integer k. Print all the nodes which are at k distance from root.
#include <cstdio>
#include "treeUtil.h"
void printNodeAtKDist(Tree *root,int k){
    if(!root){
        return ;
    }
    if(k==0){
        printf("%d ",root->data);
    }
    printNodeAtKDist(root->left,k-1);
    printNodeAtKDist(root->right,k-1);
}
int main(){
    Tree *root = nullptr;
    addNode(&root,1);
    addNode(&(root->left),2);
    addNode(&(root->right),3);
    addNode(&(root->left->left),4);
    addNode(&(root->left->right),5);
    addNode(&(root->right->left),8);
    printNodeAtKDist(root, 2);
    return 0;
}

//
// Created by Abhishek Singh on 09-10-2017.
//
// Write Code to Determine if Two Trees are Identical

#include <cstdio>
#include "treeUtil.h"

int checkIdenticalTree(Tree *root1,Tree *root2){
    if(root1==NULL && root2==NULL)
        return 1;
    if(root1!=NULL && root2!=NULL){
        return ((root1->data==root2->data) && checkIdenticalTree(root1->left,root2->left) &&checkIdenticalTree(root1->right,root2->right));
    }
    return 0;
}
int main(){
    Tree *root1 = nullptr,*root2 = nullptr;
    addNode(&root1,1);
    addNode(&(root1->left),2);
    addNode(&(root1->right),3);
    addNode(&(root1->left->left),4);
    addNode(&(root1->left->right),5);

    addNode(&root2,1);
    addNode(&(root2->left),2);
    addNode(&(root2->right),3);
    addNode(&(root2->left->left),4);
    addNode(&(root2->left->right),6);
    printf("%d",checkIdenticalTree(root1,root2));
    return 0;
}

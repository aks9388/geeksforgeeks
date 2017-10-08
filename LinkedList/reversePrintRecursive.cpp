//
// Created by Abhishek Singh on 05-10-2017.
//
// Write a recursive function to print reverse of a Linked List

#include <cstdio>
#include "LinkedListUtil.h"

void reversePrintRecursive(Node *head){
    if(!head){
        return;
    }
    reversePrintRecursive(head->next);
    printf("%d ",head->data);
}
int main(){
    Node *head = nullptr;
    int i = 0;
    while(i<5){
        addNodeAtTheEnd(&head,i++);
    }
    reversePrintRecursive(head);
    return 0;
}
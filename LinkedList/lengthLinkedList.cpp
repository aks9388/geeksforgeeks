//
// Created by Abhishek Singh on 05-10-2017.
//
//Find Length of a Linked List (Iterative and Recursive)

#include <cstdio>
#include "LinkedListUtil.h"

int lengthLinkedList_iterative(Node *head){
    Node *iterator = head;
    int length=0;
    if(!head){
        return length;
    }
    while(iterator){
        length++;
        iterator = iterator->next;
    }
    return length;
}
int lengthLinkedList_recursive(Node *head){
    if(!head){
        return 0;
    }
    else{
        return 1+lengthLinkedList_recursive(head->next);
    }
}

int main(){
    Node *head = nullptr;
    addNodeAtTheEnd(&head,1);
    addNodeAtTheEnd(&head,2);
    addNodeAtTheEnd(&head,1);
    addNodeAtTheEnd(&head,3);
    addNodeAtTheEnd(&head,1);
    printf("%d", lengthLinkedList_recursive(head));
    printLinkedList(head);
    return 0;
}
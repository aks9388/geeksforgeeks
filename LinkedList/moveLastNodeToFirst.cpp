//
// Created by Abhishek Singh on 05-10-2017.
//
//Move last element to front of a given Linked List
//Write a C function that moves last element to front in a given Singly Linked List. For example, if the given Linked List is 1->2->3->4->5, then the function should change the list to 5->1->2->3->4.

#include <malloc.h>
#include "LinkedListUtil.h"

void moveLastToFirst(Node **head){
    if(*head==NULL || (*head)->next==NULL)
        return;

    Node *curr, *prev= nullptr;
    curr = *head;
    while(curr->next){
        prev=curr;
        curr = curr->next;
    }
    prev->next = nullptr;
    curr->next = *head;
    *head = curr;
}
int main(){
    Node *head= nullptr;
    int i=0;
    while(i<5){
        addNodeAtTheEnd(&head,i++);
    }
    printLinkedList(head);
    moveLastToFirst(&head);
    printLinkedList(head);
    return 0;
}
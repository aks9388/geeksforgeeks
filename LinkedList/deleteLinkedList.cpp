#include <cstdlib>
#include "LinkedListUtil.h"

//
// Created by Abhishek Singh on 05-10-2017.
//
// Write a function to delete a Linked List
void deleteLinkedList(Node **head){
    Node *iterator = *head;
    Node *tempNode = nullptr;
    while(iterator){
        tempNode = iterator->next;
        free(iterator);
        iterator = tempNode;
    }
    *head = nullptr;
}
int main(){
    Node *head = nullptr;
    addNodeAtTheEnd(&head,1);
    addNodeAtTheEnd(&head,1);
    addNodeAtTheEnd(&head,1);
    addNodeAtTheEnd(&head,1);
    addNodeAtTheEnd(&head,1);
    printLinkedList(head);
    deleteLinkedList(&head);
    printLinkedList(head);
    return 0;
}

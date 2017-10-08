//
// Created by Abhishek Singh on 04-10-2017.
//
//Write a function that counts the number of times a given int occurs in a Linked List
#include <cstdio>
#include "LinkedListUtil.h"
int countInteger(Node *head,int number){
    Node *iterator = head;
    int count = 0;

    if(!head){
        return 0;
    }
    while(iterator){
        if(iterator->data == number){
            count++;
        }
        iterator = iterator->next;
    }
    return count;
}
int main(){
    Node *head = nullptr;
    addNodeAtTheEnd(&head,1);
    addNodeAtTheEnd(&head,3);
    addNodeAtTheEnd(&head,1);
    addNodeAtTheEnd(&head,2);
    addNodeAtTheEnd(&head,1);
    int count = countInteger(head,1);
    printf("%d",count);
    return 0;
}
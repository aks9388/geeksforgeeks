#include <cstdio>
#include "LinkedListUtil.h"
//
// Created by Abhishek Singh on 05-10-2017.
//
//Identical Linked Lists
//Two Linked Lists are identical when they have same data and arrangement of data is also same. For example Linked lists a (1->2->3) and b(1->2->3) are identical. . Write a function to check if the given two linked lists are identical.
bool matchLinkedList_iterative(Node *head1, Node *head2){
    while(head1 && head2){
        if(head1->data != head2->data){
            return false;
        }
        head1 = head1->next;
        head2 = head2->next;

    }
    if(!head1 && ! head2){
        return true;
    }
    return false;
}
bool matchLinkedList_recursive(Node *head1, Node *head2){
    if(!head1 && !head2){
        return true;
    }
    if(!head1 || !head2)
        return false;
    return head1->data==head2->data && matchLinkedList_recursive(head1->next,head2->next);
}

int main(){
    Node *head1= nullptr;
    Node *head2 = nullptr;
    addNodeAtTheEnd(&head1, 1);
    addNodeAtTheEnd(&head1, 2);
    addNodeAtTheEnd(&head1, 3);

    addNodeAtTheEnd(&head2, 1);
    addNodeAtTheEnd(&head2, 2);
    addNodeAtTheEnd(&head2, 3);
    addNodeAtTheEnd(&head2, 3);
    printf("%d ",matchLinkedList_recursive(head1,head2));
    return 0;
}
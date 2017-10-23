

//
// Created by Abhishek Singh on 10-10-2017.
//
//Remove duplicates from a sorted linked list
//Write a removeDuplicates() function which takes a list sorted in non-decreasing order and deletes any duplicate nodes from the list.
// The list should only be traversed once.

#include <cstdlib>
#include "LinkedListUtil.h"
void removeDuplicates(Node *head){
    if(!head)
        return;
    Node *curr = head,*temp;

    while(curr->next){
        if(curr->data==curr->next->data) {
            temp = curr->next->next;
            free(curr->next);
            curr->next = temp;
        }else{
            curr = curr->next;
        }
    }
}
int main(){
    Node *head = nullptr;
    addNodeAtTheEnd(&head,1);
    addNodeAtTheEnd(&head,2);
    addNodeAtTheEnd(&head,2);
    addNodeAtTheEnd(&head,3);
    addNodeAtTheEnd(&head,3);
    removeDuplicates(head);
    printLinkedList(head);
    return 0;
}

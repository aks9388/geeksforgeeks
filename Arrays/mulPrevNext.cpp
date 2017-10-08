//
// Created by Abhishek Singh on 03-10-2017.
//
//Given an array of integers, update every element with multiplication of previous and next elements with following exceptions.
//a) First element is replaced by multiplication of first and second.
//b) Last element is replaced by multiplication of last and second last.
#include <stdio.h>
#include <conio.h>
void mulPrevNext(int *arr,int len){
    if(len<1){
        return;
    }
    int prev = arr[0];
    arr[0] = arr[0]*arr[1];
    for(int i=1;i<len-1;i++){
        int curr = arr[i];
        arr[i] = prev * arr[i+1];
        prev = curr;
    }
    arr[len-1] = prev * arr[len-1];
}

void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);

    printf("\n");
}
int main(){
    int arr[] = {2, 3, 4, 5, 6};
    mulPrevNext(arr,5);
    printArray(arr,5);
}


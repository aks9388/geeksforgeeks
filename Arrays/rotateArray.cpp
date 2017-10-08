//
// Created by Abhishek Singh on 03-10-2017.
//
//Write a Program to cyclically rotate an array by one
#include <stdio.h>
#include <conio.h>
void rotateArray(int *arr,int len){
    int temp = arr[len-1];
    for(int i=len-1;i>0;i--){
        arr[i] = arr[i-1];
    }
    arr[0] = temp;
}
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);

    printf("\n");
}

int main(){
    int arr[] = {1, 2, 3};
    rotateArray(arr,3);
    printArray(arr,3);
}


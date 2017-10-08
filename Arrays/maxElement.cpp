//
// Created by Abhishek Singh on 03-10-2017.
//
//Write a Program to find largest element in an array
#include <stdio.h>
#include <conio.h>
int findMaxElement(int *arr,int len){
    int max = arr[0];
    for(int i=1;i<len;i++){
        if(max<arr[i]){
            max = arr[i];
        }
    }
    return max;
}


int main(){
    int arr[] = {1, 2, 105, 4, 208, 6, 7};
    printf("%d",findMaxElement(arr,7));
}


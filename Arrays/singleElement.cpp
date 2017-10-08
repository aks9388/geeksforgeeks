//
// Created by Abhishek on 04-Oct-17.
//
//Write a program to Find the element that appears once in an array where every other element appears twice

#include <stdio.h>
int singleElement(int *arr, int len){
    int element=arr[0];
    for(int i=1;i<len;i++){
        element = element ^ arr[i];
    }
    return element;
}

int main(){
    int arr[] = {2, 3, 5, 4, 5, 3, 4};
    printf("%d",singleElement(arr,7));
	return 0;
}
//
// Created by Abhishek on 04-Oct-17.
//
//Write a program to Find the Number Occurring Odd Number of Times

#include <stdio.h>
int numberOccuringOddTime(int *arr,int len){
    int element = arr[0];
    for(int i=1;i<len;i++){
        element = element ^arr[i];
    }
    return element;
}

int main(){
    int arr[] = {2, 3, 5, 4, 5, 2, 4, 3, 5, 2, 4, 4, 2};
    printf("%d",numberOccuringOddTime(arr,13));
	return 0;
}
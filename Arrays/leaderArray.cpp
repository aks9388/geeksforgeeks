//
// Created by Abhishek on 04-Oct-17.
//
//Write a program to print all the LEADERS in the array. An element is leader if it is greater than all the elements to its right side. And //the rightmost element is always a leader. For example int the array {16, 17, 4, 3, 5, 2}, leaders are 17, 5 and 2.

#include <stdio.h>

void leaderArray(int *arr,int len){
    int max = arr[len-1];
    printf("%d ",max);
    for (int i=len-2; i > 0; i--){
        if(arr[i]>max){
            max = arr[i];
            printf("%d ",max);
        }
    }
}

int main(){
    int arr[] =  {16, 17, 4, 3, 5, 2};
    leaderArray(arr,6);
	return 0;
}
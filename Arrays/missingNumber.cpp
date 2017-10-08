//
// Created by Abhishek on 04-Oct-17.
//
//Write a program to Find the Missing Number
//You are given a list of n-1 integers and these integers are in the range of 1 to n. There are no duplicates in list. One of the integers is missing in the list. Write an efficient code to find the missing integer.

#include <stdio.h>
int missingNumber(int *arr,int len){
    int sum =0;
    for(int i=0;i<len;i++){
        sum = sum + arr[i];
    }
    int actualSum = (len+1)*(len+2)/2;
    return  actualSum-sum;
}

int main(){
    int arr[] = {1, 2, 4, 5, 6};
    printf("%d",missingNumber(arr,5));
	return 0;
}
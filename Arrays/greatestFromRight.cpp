//
// Created by Abhishek on 04-Oct-17.
//
//Replace every element with the greatest element on right side
//Given an array of integers, replace every element with the next greatest element (greatest element on the right side) in the array. Since there is no element next to the last element, replace it with -1. For example, if the array is {16, 17, 4, 3, 5, 2}, then it should be modified to {17, 5, 5, 5, 2, -1}.
#include <stdio.h>

void greatestFromRight(int *arr, int len){
    int max = arr[len-1];
    arr[len-1]=-1;

    for(int i=len-2;i>=0;i--){
        int temp = arr[i];
        arr[i] = max;
        if(temp>max){
            max = temp;
        }
    }
}
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);

    printf("\n");
}
int main(){
    int arr[] = {16, 17, 4, 3, 5, 2};
    greatestFromRight(arr,6);
    printArray(arr,6);
	return 0;
}
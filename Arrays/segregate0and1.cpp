//
// Created by Abhishek on 04-Oct-17.
// 
//Write a progra to Segregate 0s and 1s in an array
#include <stdio.h>

void segregate01(int *arr, int len){
    int sum = 0, i=0;
    for(int i=0;i<len;i++){
        sum = sum+arr[i];
    }
    for(i=0;i<len-sum;i++){
        arr[i] = 0;
    }
    for(;i<len;i++){
        arr[i] = 1;
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
    int arr[] = { 0, 1, 0, 1, 1, 1 };
	segregate01(arr,6);
    printArray(arr,6);
	return 0;
}
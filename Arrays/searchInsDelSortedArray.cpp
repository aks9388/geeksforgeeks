//
// Created by Abhishek Singh on 04-10-2017.
//
//Search, insert and delete in a sorted array

//binarySearch
#include <stdio.h>
int searchArray(int *arr, int low,int high, int element){
    if(low>high)
        return -1;
    int mid = (low+high)/2;
    if(element==arr[mid]){
        return mid;
    }
    if(arr[mid]>element)
        return searchArray(arr,low,mid-1,element);
    else
        return searchArray(arr,mid+1,high,element);
}

int insertArray(int *arr, int currPos, int capacity, int element){
    if(currPos>=capacity) {
        return currPos;
    }
    int i=0;
    while(i<currPos && arr[i]<element){
        i++;
    }
    //int temp = arr[i];
    for(int j=currPos+1;j>i;j--){
        arr[j] = arr[j-1];
    }
    arr[i] = element;
}

int deleteArray(int *arr,int len, int element){
    int index = searchArray(arr,0,len-1,element);
    if(index==-1){
        return -1;
    }
    for(int i=index;i<len;i++){
        arr[i] = arr[i+1];
    }
    return len-1;

}


void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);

    printf("\n");
}
int main(){
    int arr[] = {5, 6, 7, 8, 9, 10};
    printf("%d \n",searchArray(arr,0,5,10));

    int arr1[20] = {12, 16, 20, 40, 50, 70};
    printArray(arr1,6);
    int temp = insertArray(arr1,6,20,26);
    printArray(arr1,7);

    printf("\n%d\n",deleteArray(arr,6,7));
    printArray(arr,5);
    return 0;
}
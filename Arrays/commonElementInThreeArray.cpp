//
// Created by Abhishek on 10-Oct-17.
//
//Find common elements in three sorted arrays
//Given three arrays sorted in non-decreasing order, print all common elements in these arrays.

#include <cstdio>

void commonElementInThreeArray(int * arr1, int *arr2, int *arr3, int len1, int len2, int len3){
    int i,j,k;
    i=j=k=0;
    while(i<len1 && j<len2 && k<len3){
        if(arr1[i]==arr2[j] && arr2[j]==arr3[k]){
            printf("%d ", arr1[i]);
            i++;
            j++;
            k++;
        }
        else if(arr1[i]<arr2[j]){
            i++;
        }
        else if(arr2[j]<arr3[k]){
            j++;
        }
        else{
            k++;
        }
    }
}
int main(){
    int arr1[] ={1,2,3,4,5};
    int arr2[] = {1,3,5,7,9};
    int arr3[] = {1,2,4,5,8};
    commonElementInThreeArray(arr1,arr2,arr3,5,5,5);
    return 0;
}
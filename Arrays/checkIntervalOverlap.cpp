#include <cstdlib>
#include <cstdio>

//
// Created by Abhishek Singh on 09-10-2017.
//
//
typedef struct Interval{
    int start;
    int end;
}Inteval;
int comparator(const void * a, const void * b){
    Interval *a1 = (Interval *)a;
    Interval *b1 = (Interval *)b;

    return (b1->start - a1->start);
}
bool checkIntervalOverlap(Interval *arr, int len){
    qsort(arr,len,sizeof(Interval),comparator);
    for(int i=1;i<len;i++){
        if(arr[i-1].start < arr[i].end){
            return true;
        }
    }
    return false;
}
int main(){
    Interval arr1[] =  {{1,3}, {7,9}, {4,6}, {10,13}};
    printf("%d ",checkIntervalOverlap(arr1,4));
    Interval arr2[] = { {6,8},{1,3},{2,4},{4,7} };
    printf("%d ",checkIntervalOverlap(arr2,4));
    return 0;
}
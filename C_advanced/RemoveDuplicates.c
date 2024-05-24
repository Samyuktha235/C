//
// Created by skarth597 on 5/22/2024.
//
#include <stdio.h>

void removeDuplicates(int *arr, int *size) {
    // TODO: Remove duplicates from the sorted array in-place
    int len=0,j=1;
    for(int i=1;i<*size;i++)
    {
        if(arr[i]!=arr[len])
        {
            arr[++len]=arr[i];
            //printf("arr[i]=%d,arr[len]=%d\n",arr[i],arr[len]);
        }
        //j++;
    }
    *size=len+1;
}

int main() {
    int nums[] = {1, 1, 2, 2, 2, 3, 4, 4, 5};

    // TODO: Call the removeDuplicates function and print the modified array
    int n = sizeof(nums)/sizeof(int);
    removeDuplicates(nums,&n);
    for(int i=0;i<n;i++)
    {
        printf("%d ",nums[i]);
    }
    return 0;
}
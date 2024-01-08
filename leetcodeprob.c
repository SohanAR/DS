/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
#include<stdio.h>
#include<stdlib.h>
  int* searchRange(int* nums, int numsSize, int target, int* returnSize) {
    int f = -1, l = -1;
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] == target) {
            if (f == -1) {
                f = i;
            }
            l = i;
        }
    }

    int* result = (int*)malloc(2 * sizeof(int));
    result[0] = f;
    result[1] = l;
    *returnSize = 2;//Update the return size
    return result;
  }

    int main ()
    {
        int a[]={5,7,7,8,8,10};
        int b;
        int * result = searchRange(a,6,8,&b);
        int i=0;
        while(i<b){
            printf("%d ",result[i]);
            i++;
        }
        free(result);
        return 0;
    }
    

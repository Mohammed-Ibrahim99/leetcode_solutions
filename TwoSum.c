#include <stdio.h>
#include <stdlib.h>
int* twoSum(int* nums, int numsSize, int target, int* returnSize);

int main()
{
    int nums[4] = {2,4,11,3};
    int numsSize = 4;
    int target = 6;
    int return_Size = 2;
    int *array_return;
    array_return = twoSum(nums, numsSize, target, &return_Size);

    for(int i=0; i<2; i++)
    {
        printf("%d\t", array_return[i]);
    }

    return 0;
}

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize)
{
    int* array_return;
    int flag = 1;
    array_return = (int*) malloc(2 * sizeof(*array_return));
    *returnSize = 2;

    for(int i=0; i< numsSize; i++)
    {   if (flag==0) break;
        for(int j=1; j< numsSize; j++)
        {
            if((nums[i] + nums[j]) == target && i != j)
            {
                array_return[0] = j;
                array_return[1] = i;
                flag = 0;
                break;
            }
        }
    }

    return array_return;
}

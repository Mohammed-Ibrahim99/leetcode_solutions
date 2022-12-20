#include <stdio.h>
#include <stdlib.h>
int* twoSum(int* nums, int numsSize, int target, int* returnSize);

int main()
{
    int nums[5] = {1, 3, 4, 5, 6};
    int numsSize = 5;
    int target = 5;
    int *return_Size;
    return_Size = twoSum(nums, numsSize, target, return_Size);

    for(int i=0; i<2; i++)
    {
        printf("%d\t", return_Size[i]);
    }

    return 0;
}

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize)
{
    int* array_return;
    array_return = (int*) malloc(2 * sizeof(int));

    for(int i=0; i< numsSize; i++)
    {
        for(int j=0; j< numsSize; j++)
        {
            if((nums[i] + nums[j]) == target)
            {
                array_return[0] = j;
                array_return[1] = i;
                returnSize = 2;
                break;
            }
            else
            {
                returnSize = 0;

            }
        }
    }

    return array_return;
}

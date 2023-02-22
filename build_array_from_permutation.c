int* buildArray(int* nums, int numsSize, int* returnSize)
{
    int *newNums;
    newNums = (int*)malloc(numsSize * sizeof(int));

    for(int i=0; i<numsSize; i++)
    {

        newNums[i] = nums[nums[i]];
    }

    *returnSize = numsSize;

    return newNums;

}
int* getConcatenation(int* nums, int numsSize, int* returnSize)
{

    int* newArray = (int *)malloc(numsSize * 2 * sizeof(int));
    *returnSize = 2 * numsSize;

    for(int i=0; i<numsSize; i++)
    {
        newArray[i] = nums[i];
        newArray[i + numsSize] = nums[i];

    }

    return newArray;

}
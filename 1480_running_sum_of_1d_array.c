/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* runningSum(int* nums, int numsSize, int* returnSize){
    
    int *retarray = (int *) malloc(sizeof(int) * numsSize);
    *returnSize = numsSize;

    for(int i=0; i<numsSize; i++)
    {
        retarray[i] = nums[i];
    }

    for(int i=1; i<numsSize; i++)
    {
        retarray[i] = retarray[i-1] + retarray[i];
    }
    
    
    return retarray;
}
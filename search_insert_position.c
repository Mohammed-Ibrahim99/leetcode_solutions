int searchInsert(int* nums, int numsSize, int target)
{
    int value_idx = 0;
    int low_idx = 0;
    int high_idx = numsSize - 1;

    while(low_idx<=high_idx)
    {
        int mid = (int)(low_idx + high_idx)/2;
        if(target == nums[mid])
        {   
            value_idx = mid;
            
            return value_idx;
        }
        else if (target > nums[mid])
        {
            low_idx = mid + 1;
        }
        else if (target < nums[mid])
        {
            high_idx = mid - 1;
        }

    }

    return low_idx;
}
int differenceOfSum(int* nums, int numsSize)
{
    int digitSum = 0;
    int elementSum = 0;

    for(int i=0; i<numsSize; i++)
    {
        elementSum+=nums[i];
        
        if(nums[i]/10 == 0)
        {
            digitSum += nums[i];
        }
        else if(nums[i]/10 != 0)
        {   
            int val = nums[i];
            while(val > 0)
            {
                
                digitSum += val%10;
                val/=10;

            }
        }
    }

    int absolute_sum = digitSum - elementSum; 
    return absolute_sum > 0? absolute_sum: -absolute_sum;
}
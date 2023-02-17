int climbStairs(int n)
{
        int count = 0;
        int n1 = 0;
        int num_of_ways = 1;

        while(count < n)
        {   int nth_term;
            nth_term = n1 + num_of_ways;
            n1 = num_of_ways;
            num_of_ways = nth_term;
            count += 1;
        }
        
        return num_of_ways;

}
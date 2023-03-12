int addDigits(int num)
{

    if(num/10 == 0) return num;

    int val = num;
    int digits_val = 0;

    while(val > 0)
    {
        digits_val += val%10;
        val /= 10;
    } 

    return digits_val/10 == 0? digits_val : addDigits(digits_val) ;

}
bool isHappy(int n)
{
    if(n < 7 && n != 1) return false;
    if(n == 1) return true;

    int val = n;
    int square_digits_sum = 0;

    while(val > 0)
    {    
        square_digits_sum += (val%10) * (val%10);
        val/=10;
    }
    
    return isHappy(square_digits_sum);
}
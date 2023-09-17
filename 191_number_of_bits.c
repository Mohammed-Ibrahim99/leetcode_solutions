int hammingWeight(uint32_t n) 
{
    int setBits = 0;  
     
   // Stores binary representation of number.
   int binaryNum[32]; // Assuming 32 bit integer.
   int i=0;
   
   for ( ;n > 0; )
   {
      binaryNum[i++] = n % 2;
      n /= 2;
   }
   
   // Printing array in reverse order.
   for (int j = i-1; j >= 0; j--) 
   {
       if (binaryNum[j] == 1)
       {
           setBits++;
       }

   }

    return setBits;
}
double* convertTemperature(double celsius, int* returnSize)
{
    double* temperatures;
    temperatures = (double*)malloc(2 * sizeof(double));
    *returnSize = 2;

    temperatures[0] = celsius + 273.15;
    temperatures[1] = celsius * 1.80 + 32.00;

    return temperatures;

}
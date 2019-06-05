#include <stdio.h>

   float multiply(float value1, float value2)
   {
     float product = (value1 * value2);
     return product;
   }

   float divide(float value1, float value2)
   {
     float quotient = (value1 / value2);
     return quotient;
   }

   float add(float value1, float value2)
   {
     float sum = (value1 + value2);
     return sum;
   }

   float subtract(float value1, float value2)
   {
     float difference = (value1 - value2);
     return difference;
   }

   int main(int argc, char* argv[])
   {
     float value1;
     int found = sscanf(argv[1], "%f", &value1);

     float value2;
     found = sscanf(argv[3], "%f", &value2);

     char symbol;
     found = sscanf(argv[2], "%c", &symbol);

     char str1[5] = {'x', '/', '+', '-', '\0'};

printf("%s\n", str1);

   if ("%c" == "x", symbol)
    {
     float result = multiply(value1, value2);
     printf("Product of %f and %f = %f\n", value1, value2, result);
    }
   if ("%c" == "-", symbol)
    {
     float result = subtract(value1, value2);
     printf("Difference of %f and %f = %f\n", value1, value2, result);
    }
}

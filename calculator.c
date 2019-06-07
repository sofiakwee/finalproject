#include <stdio.h>
#include <string.h>

   int main(int argc, char* argv[])
   {
     float value1;
     int found = sscanf(argv[1], "%f", &value1);

     float value2;
     found = sscanf(argv[3], "%f", &value2);

     char symbol;
     found = sscanf(argv[2], "%c", &symbol);

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

    char* s = "x/";
    for (int i = 0; i < strlen(s); i++)
{
    if (s[i] == symbol && symbol == 'x')
    {
     float result = multiply(value1, value2);
     printf("%f %c %f = ?\n", value1, symbol, value2);
     printf("Product of %f and %f = %f\n", value1, value2, result);
    };
    if (s[i] == symbol && symbol == '/')
    {
     float result = divide(value1, value2);
     printf("%f %c %f = ?\n", value1, symbol, value2);
     printf("Quotient of %f and %f = %f\n", value1, value2, result);
    };
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

    char* a = "+-";
    for (int i = 0; i < strlen(a); i++)
{
    if (a[i] == symbol && symbol == '+')
    {
     float result = add(value1, value2);
     printf("%f %c %f = ?\n", value1, symbol, value2);
     printf("Sum of %f and %f = %f\n", value1, value2, result);
    };
    if (a[i] == symbol && symbol == '-')
    {
     float result = subtract(value1, value2);
     printf("%f %c %f = ?\n", value1, symbol, value2);
     printf("Difference of %f and %f = %f\n", value1, value2, result);
    };
}
}

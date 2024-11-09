#include <stdio.h>
#include <stdlib.h>

int main()
{
   unsigned int hexavalue;
   printf("Enter a hexadecimal value:");
   scanf("%x",&hexavalue);
   printf("Decimal:%5u\n",hexavalue);
   printf("Octal:%5o\n",hexavalue);
   printf("Uppercase Hexadecimal value:%5x\n",hexavalue);
   return 0;
}

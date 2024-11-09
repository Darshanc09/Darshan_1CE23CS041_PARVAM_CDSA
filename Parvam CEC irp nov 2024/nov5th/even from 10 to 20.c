#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    printf("Enter a number:");
    scanf("%d",&number);
    if(number>=10 && number<=20 && number%2==0)
    {
        printf("valid\n");
    }
    else{
        printf("invalid\n");
    }
return 0;
}

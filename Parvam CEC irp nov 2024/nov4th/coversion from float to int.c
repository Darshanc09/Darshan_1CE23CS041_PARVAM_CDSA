#include<stdio.h>
#include<stdlib.h>
void main()
{
    int a;
    float b;
    printf("enter first value");
    scanf("%d",&a);
    printf("floating conversion into integer");
    b = ((int)a);
    printf("floating number %f",b);
    printf("integer number %d",a);
    return 0;
}

#include <stdio.h>
int main()
{
    int n,sq,r,sum=0;
    printf("Enter a number \n");
    scanf("%d",&n);
    sq=n*n;
    while(sq!=0)
    {
        r=sq%10;
        sum=sum+r;
        sq=sq/10;
    }
    if(sum==n)
        printf("neon number");
    else
        printf("not a neon number");
    return 0;
}

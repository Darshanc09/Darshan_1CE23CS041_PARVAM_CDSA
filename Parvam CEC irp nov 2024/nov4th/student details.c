#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name,branch;
    int sub1,sub2,sub3,total;
    float avg;
    char grade;
    printf("-----enter students details------\n");
    printf("student name:\n");
    scanf("%s",&name);
    printf("enter branch:\n");
    scanf("%s",&branch);
    printf("enter sub1 marks:");
    scanf("%d",&sub1);
    printf("enter sub2 marks:");
    scanf("%d",&sub2);
    printf("enter sub3 marks:");
    scanf("%d",&sub3);
    total=sub1+sub2+sub3;
    printf("total marks obtained %d:\n",total);
    avg=total/3;
    printf("average marks obtained %f\n:",avg);
    if(avg>=35)
    {
        printf("Pass");
    }
    else
    {
        printf("fail");
    }
    return 0;
}

#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter any two numbers a and b");
    scanf("%d%d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("The values after swapping are: a=%d b=%d",a,b);
    return 0;
}

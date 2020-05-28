#include<stdio.h>
int main()
{
    int lcm(int a,int b);
    int a,b,LCM;
    printf("Input first number:\n");
    scanf("%d",&a);
    printf("Input second number:\n");
    scanf("%d",&b);
    LCM=lcm(a,b);
    printf("LCM of %d and %d = %d",a,b,LCM);
    return 0;
}

int lcm(int a,int b)
{
    static int temp=1;
    if(temp%a == 0 && temp%b == 0)
        return temp;
    else
    {
        temp++;
        lcm(a,b);
        return temp;
    }
}

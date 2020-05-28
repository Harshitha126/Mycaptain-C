#include<stdio.h>
int main()
{
    int prime(int n,int i);
    int n,i=2;
    printf("Enter A Number:");
    scanf("%d",&n);
    if(prime(n,n/2))
        printf("The Entered Number Is A Prime Number");
    else
        printf("Not A Prime Number");
    return 0;
}
int prime(int n,int i)
{

    if(i==1)
        return 1;
    else if(n%i==0)
        return 0;
    else
        return prime(n,i-1);

}

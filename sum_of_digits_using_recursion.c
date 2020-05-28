#include<stdio.h>
 int main()
 {
     int sum_of_digits(int num);
     int n,c;
     printf("Enter a Number");
     scanf("%d",&n);
     c=sum_of_digits(n);
     printf("The Sum Of Digits Of The Entered Number=%d",c);
     return 0;
 }

int sum_of_digits(int num)
{
    int rem;
    if(num==0)
        return 0;
    else
        rem=num%10;
        return rem+sum_of_digits(num/10);
}

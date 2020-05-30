#include<stdio.h>
int main()
{
    int a[20][20],i,j,sum=0;
    int (*p)[20];
    p=&a[0];
    printf("Enter The Elements of The Matrix:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("element [%d][%d]:\n",i,j);
            scanf("%d",(*(p+i)+j));
        }
    }
    printf("The Matrix is:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
         printf("%d\t",*(*(p+i)+j));
        }
        printf("\n");
    }
    printf("The Sum Of Diagonal Elements Is:");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i==j)
                sum+=*(*(p+i)+j);
        }
    }
    printf("%d",sum);



}

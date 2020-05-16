#include<stdio.h>
 int main()
 {
  int n;
  printf("Enter the marks out of 100:");
  scanf("%d",&n);
  if(n>=85)
    printf("GRADE A");
  else if(n>=70)
    printf("GRADE B");
  else if(n>=55)
    printf("GRADE C");
  else if(n>=40)
    printf("GRADE D");
  else
    printf("GRADE F");
 }

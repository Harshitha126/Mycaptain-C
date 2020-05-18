#include<stdio.h>
 int main()
 {
     int n;
     printf("Enter A Number From 1 To 5\n ");
     scanf("%d",&n);
     switch(n)
     {
     case 1:
        printf("Food Item - Chilli Garlic Noodles \n Price - Rs 200 \n");
        break;
     case 2:
        printf("Food Item - Choco Lava Cake\n Price - Rs 160 \n");
        break;
     case 3:
        printf("Food Item - Peri Peri Fries \n Price - Rs 140 \n");
        break;
     case 4:
        printf("Food Item - Garlic Bread \n Price - Rs 150 \n" );
        break;
     case 5:
        printf("Food Item - Chocolate Mousse \n Price - Rs 160 \n");
        break;
     }
 }

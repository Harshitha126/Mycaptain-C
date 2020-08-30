import java.util.Scanner;
public class Matrix{
   public static void main(String[] args) {
    int a[][] ={{2,4,6},{3,5,7},{1,3,5}};
    int b[][] ={{1,3,5},{2,4,6},{3,5,7}};
  //display of matrices
   System.out.println("Array a");
    for(int i=0;i<3;i++){
      for(int j=0;j<3;j++){
        System.out.print(a[i][j]+" ");
      } System.out.println();
    }
     System.out.println("Array b");

    for(int i=0;i<3;i++){
      for(int j=0;j<3;j++){
        System.out.print(b[i][j]+" ");
      } System.out.println();
    }
     System.out.println("Array Addition");
     for(int i=0;i<3;i++){
       for(int j=0;j<3;j++){
         int[][] c=new int[3][3] ;
          c[i][j]=a[i][j]+b[i][j];
         System.out.print(c[i][j]+" ");
   }System.out.println();
 }
 //array multiplication
 System.out.println("Array Multiplication");
 for(int i=0;i<3;i++){
for(int j=0;j<3;j++){
  int[][] c=new int[3][3] ;
c[i][j]=0;
for(int k=0;k<3;k++)
{
c[i][j]+=a[i][k]*b[k][j];
}
System.out.print(c[i][j]+" ");
}
System.out.println();
}
}}

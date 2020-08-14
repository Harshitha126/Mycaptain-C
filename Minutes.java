//minutes into years and days
import java.util.Scanner;
public class Minutes{
  public static void main(String[] args){
    Scanner sc= new Scanner(System.in);
    System.out.println("Input the number of minutes:");
    int min=sc.nextInt();
    int years;
    int days;
    days=min/(60*24);
    years=days/365;
    System.out.println(min+" is approximately "+years+" years and"+days+" days");
  }
}

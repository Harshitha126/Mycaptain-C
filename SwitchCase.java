import java.util.Scanner;
public class SwitchCase{
   public static void main(String[] args) {

     int choice;
     System.out.println("Choose from the menu below:\n\t 1. Hey Siri, What's up?\n\t2. Hey Alexa, What's up?\n\t3. Hey Google, What's up?");
     Scanner s=new Scanner(System.in);
     choice=s.nextInt();
     switch(choice)
     {
       case 1: System.out.println("You said Hey Siri, What's up? ");
                 break;
       case 2: System.out.println("You said Hey Alexa, What's up? ");
                 break;
       case 3: System.out.println("You said Hey Google, What's up? ");
                 break;
      default :System.out.println("Invalid Choice");           

     }

     }

  }

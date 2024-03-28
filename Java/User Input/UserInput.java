import java.util.Scanner;

class UserInput
{
    public static void main(String[] args)
    {
        Scanner myInputObject = new Scanner(System.in);
        System.out.println("Enter Username: ");

        String userName = myInputObject.nextLine();
        System.out.println("Username is: " + userName);

        myInputObject.close();
    }
}
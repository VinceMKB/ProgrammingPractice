import java.util.Scanner;

class SimpleCalulator
{
    public static void main(String[] args)
    {
        Scanner input = new Scanner(System.in);

        System.out.println("Please enter first number: ");
        double numOne = input.nextDouble();

        System.out.println("Please enter second number: ");
        double numTwo = input.nextDouble();

        System.out.println("Please enter the operation: ");
        char operation = input.next().charAt(0);
        
        double answr;

        switch(operation)
        {
            case '+':
                answr = numOne + numTwo; 
                System.out.println("The answer is +: " + answr);
                break;
            case '-':
                answr = numOne + numTwo;
                System.out.println("This answer is -: " +  answr);
                break;
            case '*':
                answr = numOne * numTwo;
                System.out.println("The answer is *: " + answr);
                break;
            case '/':
                answr = numOne/numTwo;
                System.out.printf("The answer is /: %.2f\n", answr);
        }


        input.close();
    }

}
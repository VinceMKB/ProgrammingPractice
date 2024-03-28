abstract class  MainTestAbstract
{
    public String f2name = "John";
    public int age = 24;
    public abstract void study(); //Abstract Method
}

class Student extends MainTestAbstract
{
    public int graduationYear = 2017;
    public void study()
    {
        System.out.println("Studying all day long");
    }

}

public class MainTest
{
    // final int x = 10; | 'final' is used to keep the variable constant. For example if x was used to represent Pi(3.14)
    int x = 2;
    int y ; // Create a class attribute
    String fname = "Vincent";
    String lname = "Bossert";
    
    public MainTest()//Create a class constructor for the Main Class
    {
        y = 7; // Set the initial value for the class attribute y
    }

    public static void main(String[] args)
    {
        MainTest myObj3 = new MainTest();// Create an object of class MainTest(This will Call the Constructor)
        System.out.println("This is myObj3 : " + myObj3.y);

    }
    
}



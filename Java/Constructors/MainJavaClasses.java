public class  MainJavaClasses
{
    int x ;
    int modelYear;
    String modelName;

    public MainJavaClasses()
    {
        // Default Constructor
    }

    public MainJavaClasses(int y, int year, String name)
    {
        x = y;
        modelName = name;
        modelYear = year;
    }

    static void myStaticMethod()
    {
        System.out.println("Static methods can be called without creating objects.");
    }

    public void myPublicMethod()
    {
        System.out.println("Public methods must be called by creating objects");
    }

    public static void main(String[] args)
    {

        MainJavaClasses myObj5 = new MainJavaClasses(8, 2006, "Polo");
        System.out.println(myObj5.x);
        System.out.println(myObj5.modelName + " " + myObj5.modelYear);

        myStaticMethod();//A static method means that it can be accessed without creating an object of the class, unlike public which needs a object

        MainJavaClasses myObj6 = new MainJavaClasses();
        myObj6.myPublicMethod();

    }

}


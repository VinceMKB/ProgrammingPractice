public class MyFirstJavaApplication 
{
  static void primitiveDataVariables()
  {
        //Primitive Data Variables
        int five = 5, four = 4;//Has a Byte size of 4 and stores whole numbers from -2147483648 to 2147483647
        byte mybyte = 100; //Has a Byte size of 1 and stores whole numbers from -128 to 127
        short myshort = 4000; //Has a Byte size of 2 and stores whole numbers from -32768 to 32768
        long mylong = 1000000L; //Has a Byte size of 8 and stores whole numbers from -9223372036854775808 to 9223372036854775807. Needs a 'L' at the end
        float myfloat = 4.234f; //Has a Byte size of 4 and stores fractional numbers to 6 to 7 decimal digits. Needs a 'f' at the end
        double mydouble = 5.5949848545; //Has a Byte size of 8 and stores fractional numbers to 15 demical digits. Needs a 'd' at the end
        boolean mybool = true; //Has a Byte size of 1 and stores True or False values
        char mychar = 'A';// Has a Byte size of 2 and stores a single character/letter or ASCII values. Use a single quotation marks
  
        //Printing for primitive data types
        System.out.println("These are the Primitive Data Types: ");
        System.out.println(five*four);
        System.out.println(mybyte);
        System.out.println(myshort);
        System.out.println(mylong);
        System.out.println(myfloat);
        System.out.println(mydouble);
        System.out.println(mybool);
        System.out.println(mychar);
  
  
  }

  static void javaOperationsAndComparisons()
  {

       //Java operators AND Comparisons
       int x = 100; // Addition '+' | Division '/'| Subtaction '-' | Modulus '%'
       int y = 30; //Multiplication '*'| Increment '++' Increases the value by 1 | Decrement '--' Decreases the value by 1
       int z = x/y;
       int a = 5;
       int b = 2;
       a |= 2; //Converts 'a' and 2 to a binary representation then a bitwise AND operation
       b &= 4; //Converts 'b' and 4 to a binary representation then a bitwise OR operation
       int d = 12;
       int e = 6;
       int f = 8;
       d ^= 3; // Converts 'd' and 3 to binary representation then a bitwise XOR operation
       e >>= 1; //Converts 'e' to binary representation then it shifts the 1's in the binary code to the right by 1
       f <<= 4; // Converts 'f' to binary representation then it shifts the 1's in the binary code to the left by 4

       //Java operators
      System.out.println("This is Java operators being used is DIVIDE: ");
      System.out.println(z);

      //Java Binary operations
      System.out.println("This is Java operation being used is binary OR: ");
      System.out.println(a);
      System.out.println("This is Java operation being used is AND: ");
      System.out.println(b);
      System.out.println("This is Java operation being used is XOR: ");
      System.out.println(d);
      System.out.println("This is Java operation being used is binary shift to the right: ");
      System.out.println(e);
      System.out.println("This is Java operation being used is binary shift to the left: ");
      System.out.println(f);

  }
  
  static void narrowCasting()
  {
    
    //Narrow Casting
    double mydoublecast = 9.78d;
    int myInt = (int) mydoublecast;

    //Printing for narrow casting
    System.out.println("This narrowing casting in Java: ");
    System.out.println(mydoublecast);
    System.out.println(myInt);

  }

  static void stringOperations()
  {
    
    //Java String operations
    String myString1 = "ABCDEFGHI";
    String myString2 = "This doesn\'t work properly \n";// \n means a new line | \r means carriage return | \t means tab | \b means backspace | \f means form feed | \' adds ' to the string | \" adds " to the string | \\ adds \ to the string 
    String myUpperCase = "vince";
    String myLowerCase = "GHOST";
    String myLocatingString ="My interest in game development stems from a passion for blending creative storytelling with interactive technology.";
    String string1 = "Abi";
    String string2 = "Bossert";

    //Java String operations
    System.out.println("This is the length of the string , myString: " + myString1.length());
    System.out.println(myUpperCase.toUpperCase());
    System.out.println(myLowerCase.toLowerCase());
    System.out.println(myLocatingString.indexOf("blending"));
    System.out.println(string1.concat(string2));
    System.out.println(myString2);

  }

  static void javaMath()
  {
    //Java Math
    int randomNum = (int)(Math.random()*101);

    //Java Math
    System.out.println("This is what the max does for  the values 12 and 10 : " + Math.max(12, 10));//Gives you the largest value
    System.out.println("This is what the min does for the values 12 and 10 : " + Math.min(12, 10));//Gives you the smallest value
    System.out.println("This is what the sqrt does for the value 16 : " + Math.sqrt(16));//Gives you the square root of the value
    System.out.println("The abs returns the absolute positive of the value : " + Math.abs(-32));//Gives the positive value of the negative
    System.out.println("The random method returns a value between 0.0(including) and 1.0(excluding): " + Math.random());
    System.out.println("The random method returns a value between 0 and 100 : " + randomNum);

  }

  static void ifStatements()
  {

    // Boolean and 'if' statements variables
    int myAge = 25;
    int myVotingAge = 18;
    
    // Boolean and 'if...else' statements
    if(myAge >= myVotingAge)
    {
        System.out.println("Old enough to vote!");
    }
    else
    {
        System.out.println("Too young to vote!");
    }

  }

  static void switchCases()
  {

    // Switch Case variables
    int day = 6;

    // Switch Case
    switch (day) 
    {
      case 1:
        System.out.println("Monday");
        break;
      case 2:
        System.out.println("Tuesday");
        break;
      case 3:
        System.out.println("Wednesday");
        break;
      case 4:
        System.out.println("Thursday");
        break;
      case 5:
        System.out.println("Friday");
        break;
      case 6:
        System.out.println("Saturday");
        break;
      case 7:
        System.out.println("Sunday");
        break;
      default:
        System.out.print("We don\'t have they day yet.");
    }

  }

  static void whileLoop()
  {
    
    //'While...loop' variables
    int i = 0;

    //'While...loop'
    while (i < 5) 
    {
      System.out.println("This is part of the while loop : " + i);
      ++i;  
    }

  }

  static void forEachLoop()
  {

    //'For...Each loop' variables
    String [] cars = {"Volvo", "BMW", "Ford", "Mazada"};

    //'For...Each loop'
    for (String p : cars)
    {
      System.out.println(p);
    }

  }

  static void forLoop()
  {

    //'For...loop'
    for(int k = 0; k < 3; ++k)
    {
      System.out.println("This is part of the for loop : " + k );
    }

  }

  static void stringArray()
  {

    int [][] myNumArray = {{1, 2, 3, 4}, {5, 6, 7} };
    for(int r = 0; r < myNumArray.length; ++r)
    {
      for(int n = 0; n < myNumArray[r].length; ++n)
      {
        System.out.println(myNumArray[r][n]);
      }
    }

  }

  static void methodParameters(String f_name, int f_size)
  {
    
    System.out.println(f_name + " the SPIDER!" + "\nThe size of the spider is : " + f_size + "cm");
  
  }

  public static int sumReturn(int m_sumR)
  {
    
    if(m_sumR > 0)
    {
      return m_sumR + sumReturn(m_sumR-1);
    }
    else
    {
      return 0;
    }
    
  }

  public static int sumHaltReturn(int m_start, int m_end)
  {
    if(m_end > m_start)
    {
      return m_end + sumHaltReturn(m_start, m_end-1);
    }
    else
    {
      return m_end;
    }
    
    
  }

  public void fullThrottle()
  {
    System.out.println("The car is going as fast as possible");
  }

  public void speed(int maxSpeed)
  {
    System.out.println("Max speed is : " + maxSpeed);
  }

  public static void main(String[] args) 
  { 

    primitiveDataVariables();
    javaOperationsAndComparisons();
    narrowCasting();
    stringOperations();
    javaMath();
    switchCases();
    whileLoop();
    forEachLoop();
    forLoop();
    stringArray();
    methodParameters("Bob", 30);

    int result1 = sumReturn(20);
    System.out.println("The method sumReturn returns the following: "+ result1);
    int result2 = sumHaltReturn(5, 10);
    System.out.println("This method sumHaltReturn returns the following: " + result2);

    MyFirstJavaApplication myCar = new MyFirstJavaApplication();
    myCar.fullThrottle();
    myCar.speed(200);
  
  }
}
package Inheritance;

class Vehicle 
{
    protected String brand = "Audi";
    public void honk()
    {
        System.out.println("Honk");
    }

}

class Inheritance extends Vehicle //Extends is used for the class Inheritance to inherit from the class Vehicle
{

    private String car_model = "Q7";

    public static void main(String[]args)
    {

        Inheritance myCar = new Inheritance();
        myCar.honk();
        System.out.println(myCar.brand + " " + myCar.car_model);

    }


}


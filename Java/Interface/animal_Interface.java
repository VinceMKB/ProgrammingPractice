package Interface;
//Notes on Interfaces:
//-Like abstract classes, interfaces cannot be used to create objects (in the example above, it is not possible to create an "Animal" object in the MyMainClass)
//-Interface methods do not have a body - the body is provided by the "implement" class
//-On implementation of an interface, you must override all of its methods
//-Interface methods are by default abstract and public
//-Interface attributes are by default public, static and final
//-An interface cannot contain a constructor (as it cannot be used to create objects)

//Why and when to use interfaces?
//To achieve security - hide certain details and only show the important details of an object (interface).
//Java does not support "multiple inheritance" (a class can only inherit from one superclass). 
//However, it can be achieved with interfaces, because the class can implement multiple interfaces. Note: To implement multiple interfaces, separate them with a comma
interface Animal 
{
   public void animalSound();
   public void sleep(); 
}

class Cat implements Animal
{
    public void animalSound()
    {
        System.out.println("Meow!");
    }
    public void sleep()
    {
        System.out.println("Zzz");
    }
}

class animal_Interface
{
    public static void main(String[] args) 
    {
       Cat objCat = new Cat();
       objCat.animalSound();
       objCat.sleep(); 
    }
}
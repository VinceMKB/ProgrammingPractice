package AbstractClasses;
//Data abstraction is the process of hiding certain details and showing only essential information to the user.
//Why And When To Use Abstract Classes and Methods?
//To achieve security - hide certain details and only show the important details of an object.

abstract class Animal
{
    //Abstract Method: Does not have a body
    // Body is this part '{}' 
    public abstract void AnimalSounds();
    //Regular Method
    public void sleep()
    {
        System.out.println("Zzz");        
    }

}

class Cat extends Animal
{
    public void AnimalSounds()
    {
        System.out.println("The Cat meowed!");
    }
}

class AbstractZoo 
{
    public static void main(String[] args) 
    {
        Cat objCat = new Cat();
        objCat.AnimalSounds();
        objCat.sleep();
    }
}

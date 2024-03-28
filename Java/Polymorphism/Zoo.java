package Polymorphism;
//Polymorphism means "many forms", and it occurs when we have many classes that are related to each other by inheritance.

class Animal
{
    public void AnimalSounds()
    {
        System.out.println("The animal made a sound");
    }
}

class Cat extends Animal
{
    public void AnimalSounds()
    {
        System.out.println("The cat meowed!");
    }
}

class Dog extends Animal
{   
    public void AnimalSounds()
    {
        System.out.println("The dog barked!");
    }

}

public class Zoo 
{
    public static void main(String[]args)
    {
        Animal objAnimal = new Animal();
        Animal objCat = new Cat();
        Animal objDog = new Dog();

        objAnimal.AnimalSounds();
        objCat.AnimalSounds();
        objDog.AnimalSounds();
    }   

}

package Enum;
//Difference between Enums and Classes
//An enum can, just like a class, have attributes and methods. The only difference is that enum constants are public, static and final (unchangeable - cannot be overridden).
//An enum cannot be used to create objects, and it cannot extend other classes (but it can implement interfaces).

//Why And When To Use Enums?
//Use enums when you have values that you know aren't going to change, like month days, days, colors, deck of cards, etc.

enum Levels 
{
    LOW, MEDIUM, HIGH
}

public class Enum_SwitchCase 
{
    public static void main(String[] args) 
    {
        Levels varLevel = Levels.LOW;

        switch (varLevel) 
        {
            case LOW:
                System.out.println("The level is LOW!");
                break;
            case MEDIUM:
                System.out.println("The level is MEDIUM!");
                break;
            case HIGH:
                System.out.println("The level is HIGH!");
                break;
        
            default:
                break;
        }
    }
}

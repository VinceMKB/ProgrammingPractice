package Interface;

interface first_interface
{
    public void first_method();
}

interface second_interface
{
    public void second_method();
}

class interface_Class implements first_interface, second_interface
{
    public void first_method()
    {
        System.out.println("From first_method!");
    }
    public void second_method()
    {
        System.out.println("From second_method!");
    }
}

class multi_Interface 
{
    public static void main(String[] args) 
    {
        interface_Class objInterface_Class = new interface_Class();
        objInterface_Class.first_method();
        objInterface_Class.second_method();
    }    
}

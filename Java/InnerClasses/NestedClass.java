package InnerClasses;

class OuterClass
{
    int x = 10;

    class InnerClass
    {
        int y = 5;
    }

}

public class NestedClass 
{
    public static void main(String[] args) 
    {
        OuterClass objOuter = new OuterClass();
        OuterClass.InnerClass objInner = objOuter.new InnerClass();
        
        System.out.println("Sum of x and y is: ");
        System.out.println(objInner.y + objOuter.x);
    }    
}

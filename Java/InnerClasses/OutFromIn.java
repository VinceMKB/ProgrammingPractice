package InnerClasses;
//Something is wrong here. It can not find the innermethod when it runs


class OuterClass
{
    int x = 9;

    class InnerClass
    {
        public int innerMethod()
        {
            return x;
        }
    }
}



class OutFromIn
{
    public static void main(String[] args) 
    {
        OuterClass objOuter = new OuterClass();
        OuterClass.InnerClass objInner =  objOuter.new InnerClass();

        System.out.println(objInner.innerMethod());
    }
}

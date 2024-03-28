class SecondTest 
{
    public static void main(String[] args)
    {
        MainTest myObj = new MainTest();
        MainTest myObj2 = new MainTest();
        myObj2.x = myObj2.x * 22;
        System.out.println("Name : " + myObj.fname + " " + myObj.lname);
        System.out.println(myObj.x);
        System.out.println(myObj2.x);

        Student mySObj = new Student();

        System.out.println("Name: " + mySObj.f2name);
        System.out.println("Age: " + mySObj.age);
        System.out.println("Graduation Year: " + mySObj.graduationYear);
        mySObj.study();//Calls abstract method
    }
    
}
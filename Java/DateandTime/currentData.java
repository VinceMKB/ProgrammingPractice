package DateandTime;

import java.time.LocalTime;
import java.time.LocalDate;
import java.time.LocalDateTime;
//import java.time.format.DateTimeFormatter;

public class currentData 
{
    public static void main(String[] args) 
    {
        LocalDate objLocalDate = LocalDate.now();
        System.out.println(objLocalDate);

        LocalTime objLocalTime = LocalTime.now();
        System.out.println(objLocalTime);

        LocalDateTime objLocalDateTime = LocalDateTime.now();
        System.out.println(objLocalDateTime);
    }  
}

package main;

import system.Person;
import system.Student;
import system.Teacher;


public class Main {

    public static void main(String [] args){
        
    Person p = new Person("Lucas", 1, "casa", 22);
    p.becomeOlder();    
    Student s1 = new Student("Livia", 2, "casa", 20, "ADS");
    s1.becomeOlder();
    Teacher t1 = new Teacher("Pedro", 3, "casa", 10, "Superior");
    t1.becomeOlder();

    }

}

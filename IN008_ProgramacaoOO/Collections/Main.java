import java.util.Vector;
import java.util.LinkedList;

//Collections/Containers são um conjunto de classes e outras entidades que representam grupos de objetos.
// - Sequenciais;
//    - LinkedList vs Vector
// - Árvores;
// - Dicionários/Mapas;
//    - HashMap vs TreeMap

class Student
{
    private String name;
    private int age;

    public Student(String name, int age){
        this.name = name;
        this.age = age;
    }

    public void display(){
        System.out.println(name + " - " + age);
    }

    public static void main(String[] args){
        //Vetores de uma classe;
        Vector<Student> students = new Vector<Student>();
        //LinkedList:
        LinkedList<Student> studentsList = new LinkedList<Student>();
        students.add(new Student("João", 20));
        
    }
}
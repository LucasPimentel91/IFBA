package system;

public class Teacher extends Person
{
    private String degree;

    public Teacher(String name, int id, String address, int age, String degree){
        super(name, id, address, age);
        this.degree = degree;
    }
    
    public void publishGrades(){}
}
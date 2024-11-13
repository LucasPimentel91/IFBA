package system;

class Teacher extends Person
{
    private String degree;

    public Teacher(String name, int id, String address, int age){
        this.name = name;
        this.id = id;
        this.address = address;
        this.age=age;
    }
    
    public void publishGrades(){}
}
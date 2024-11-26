package system;

public class Person
{
    private String name;
    private int id;
    private String address;
    private int age;
    protected char sexo;

    public Person(String name, int id, String address, int age){
        this.name = name;
        this.id = id;
        this.address = address;
        this.age=age;
    }

    public void sleep(){
        System.out.println("Eu sou uma pessoa e durmo por 8 horas");
    }

    public void becomeOlder(){
        this.age++;
        System.out.println("Idade: " + this.age);
    }
}
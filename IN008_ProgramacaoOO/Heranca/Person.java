class Person
{
    private String name;
    private int id;
    private String address;
    private int age;
    protected char sexo;

    public void becomeOlder(){
        this.age++;
        System.out.println("Idade: " + this.age);
    }
}
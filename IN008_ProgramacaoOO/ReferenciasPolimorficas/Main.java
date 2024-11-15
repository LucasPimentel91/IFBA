import IN008_ProgramacaoOO.Heranca.system.Student;

public class Main{
    //É possivel referenciar esses tipos, pois Object é raiz para todas as classes.
    Object var = new Integer();

    //Quando é definido superclasses, é possível criar referêcias polimórficas para apontar diferentes classes. 
    //No exemplo da classe Student que herda de Person, Person newPeople = new Student() é compilável.

    //Ligação dinâmica:
    public static void execBirthday(Object person){
        person.becomeOlder(); // Late binding
    }

    //Acessar métodos de classes derivadas sendo uma referência polimórfica:
    if(s1 instanceof Student){
        Student s1Student = (Student)s1;
        (Student)
    }
}
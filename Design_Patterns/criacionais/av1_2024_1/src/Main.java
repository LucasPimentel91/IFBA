import abstratos.AbstractFactoryStarter;
import abstratos.Arma;
import abstratos.Personagem;
import concretos.ABCruzado;

//TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
public class Main {
    public static void main(String[] args) {
        AbstractFactoryStarter ABstarter = new ABCruzado();
        Personagem cruzado = ABstarter.criarPersonagem();
        Arma espada = ABstarter.criarArma();
    }
}
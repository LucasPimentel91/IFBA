import concretos.Carro;
import concretos.ConstrutorCarro;
import concretos.Director;

//TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
public class Main {
    public static void main(String[] args) {
        ConstrutorCarro construtorCarro = new ConstrutorCarro();
        Director diretor = new Director();
        diretor.listaBuilders.add(construtorCarro);
        diretor.fazerVeiculo(4,2,"Elétrico");
        Carro carro = construtorCarro.resultado();
        carro.renderCarro();
    }
}

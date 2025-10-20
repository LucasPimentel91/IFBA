import abstratos.Prototipavel;
import concretos.Botao;

//TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
public class Main {
    public static void main(String[] args) {
        Botao botao1 = new Botao(3,4);

        botao1.render();

        Botao botao2 = (Botao) botao1.clonar();

        botao2.render();

        System.out.println("botao2 é igual a botao1? R:" + botao1.ehIgual(botao2));

    }
}
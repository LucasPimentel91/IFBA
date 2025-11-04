import question1.ConstrutorListaPassagem;
import question1.Director;
import question1.ListaPassagem;
import question2.Clonavel;
import question2.PrototypeManager;

//TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
public class Main {
    public static void main(String[] args) {
        //Questão 1:
        ConstrutorListaPassagem construtorListaPassagem = new ConstrutorListaPassagem();
        Director director = new Director();
        director.listaConstrutores.add(construtorListaPassagem);
        director.chamadaConstrutores("D VIP N", 5, 0.000133333, -12.99759, -38.47413, 31);
        ListaPassagem listaPassagem = construtorListaPassagem.resultado();
        //Questão 2:
        PrototypeManager prototypeManager = PrototypeManager.getInstace();
        ListaPassagem cloneListaPassagem = listaPassagem.clonar();
        prototypeManager.adicionarListaPassagem("D VIP N", cloneListaPassagem);
    }
}
package question1;

import question2.Clonavel;

import java.util.ArrayList;

public class ListaPassagem {
    private ArrayList<TempoPassagem> tempos;

    public ListaPassagem(){}

    public ListaPassagem(ListaPassagem listaPassagem){
        tempos = listaPassagem.getTempos();
    }

    public ListaPassagem clonar() {
        return new ListaPassagem(this);
    }

    public ArrayList<TempoPassagem> getTempos(){
        return tempos;
    }
}

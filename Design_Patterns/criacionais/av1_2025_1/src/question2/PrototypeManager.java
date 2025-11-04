package question2;

import question1.ListaPassagem;

import java.util.HashMap;
import java.util.Map;

public class PrototypeManager {
    private static PrototypeManager prototypeManager;
    private Map<String, ListaPassagem> dicionario = new HashMap<>();

    private PrototypeManager(){}

    public static PrototypeManager getInstace(){
        if(prototypeManager == null){
            prototypeManager = new PrototypeManager();
            return  prototypeManager;
        }
        return prototypeManager;
    }

    public void adicionarListaPassagem(String categoria, ListaPassagem listaPassagem){
        dicionario.put(categoria, listaPassagem);
    }

    public ListaPassagem selecionarListaPassagem(String categoria){
        ListaPassagem resultado = dicionario.get(categoria);
        if(resultado == null){
            System.out.println("Essa lista passagem não existe");
            return null;
        }
        return resultado;
    }
}

package abstrato;

import java.util.ArrayList;
import java.util.List;

public abstract class Armazem {
    private String nome;
    private String path;
    private int tamanho;
    private ArrayList<Armazem> repositorioArmazem;

    public Armazem(String nome, String path, int tamanho){
        this.nome = nome;
        this.path = path;
        this.tamanho = tamanho;
        repositorioArmazem = new ArrayList<>();
    }


    public void addArmazem(Armazem armazem){
        repositorioArmazem.add(armazem);
    }

    public int getTamanho(){
        return tamanho;
    }

    public String getNome(){
        return nome;
    }

    public int totalizarTamanho(){
        int totalizador = 0;
        for(Armazem armazem : repositorioArmazem){
            totalizador += armazem.totalizarTamanho();
        }
        totalizador += this.tamanho;
        return totalizador;
    }

    public void abrir(){

    }
}

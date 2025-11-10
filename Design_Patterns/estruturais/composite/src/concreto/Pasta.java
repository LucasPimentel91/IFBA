package concreto;

import abstrato.Armazem;

public class Pasta extends Armazem {

    public Pasta(String nome, String path, int tamanho){
        super(nome, path, tamanho);
    }

    @Override
    public void abrir() {
        super.abrir();
        System.out.println("Abrindo pasta...");
    }

    @Override
    public void addArmazem(Armazem armazem) {
        super.addArmazem(armazem);
    }

    @Override
    public int totalizarTamanho() {
        return super.totalizarTamanho();
    }

    @Override
    public String getNome() {
        return super.getNome();
    }

    @Override
    public int getTamanho() {
        return super.getTamanho();
    }
}

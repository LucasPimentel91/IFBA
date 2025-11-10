package concreto;

import abstrato.Armazem;

public class Arquivo extends Armazem {

    public Arquivo(String nome, String path, int tamanho){
        super(nome, path, tamanho);
    }

    @Override
    public void abrir() {
        super.abrir();
        System.out.println("Abrindo arquivo...");
    }

    @Override
    public int getTamanho() {
        return super.getTamanho();
    }

    @Override
    public String getNome() {
        return super.getNome();
    }

    @Override
    public void addArmazem(Armazem armazem) {
        super.addArmazem(armazem);
    }

    @Override
    public int totalizarTamanho() {
        return super.totalizarTamanho();
    }
}

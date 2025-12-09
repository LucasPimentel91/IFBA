package abstracao;

public abstract class FormaColorida {
    public Forma inner;
    private String cor;

    public FormaColorida(Forma forma, String cor){
        this.inner = forma;
        this.cor = cor;
    }

    public void renderizar(){
        inner.redenrizar();
        System.out.print(" na cor " + cor);
    }
}

package concreto;

import abstracao.Forma;
import abstracao.FormaColorida;

public class FormaVermelha extends FormaColorida {
    private static String cor = "Vermelho";

    public FormaVermelha(Forma forma){
        super(forma, cor);
    }
}

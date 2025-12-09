package concreto;

import abstracao.Forma;

public class Triangulo implements Forma {
    private Integer lado1;
    private Integer lado2;
    private Integer lado3;

    public Triangulo(int lado1, int lado2, int lado3){
        this.lado1 = lado1;
        this.lado2 = lado2;
        this.lado3 = lado3;
    }

    @Override
    public void redenrizar() {
        System.out.print("Triangulo com lado " + lado1.toString() + ", " + lado2.toString() + " e " + lado3.toString() );
    }
}

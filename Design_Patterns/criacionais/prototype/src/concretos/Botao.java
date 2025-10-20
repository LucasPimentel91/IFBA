package concretos;

import abstratos.Prototipavel;

public class Botao implements Prototipavel {
    public int x;
    public int y;

    public Botao(int x, int y){
        this.x = x;
        this.y = y;
    }

    public Botao(Botao copy){
        if (copy != null){
            this.x = copy.x;
            this.y = copy.y;
        }
    }

    @Override
    public Prototipavel clonar() {
        return new Botao(this);
    }

    @Override
    public Boolean ehIgual(Object objeto2){
        if (!(objeto2 instanceof Botao)) return false;
        Botao botao2 = (Botao) objeto2;
        return botao2.x == x && botao2.y == y;
    }

    public void render(){
        System.out.println("X = " + x + "\nY = " + y);
    }
}

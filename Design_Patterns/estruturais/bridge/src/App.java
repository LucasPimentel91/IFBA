import concreto.FormaVermelha;
import concreto.Triangulo;

public class App {
    public void run(){
        Triangulo triangulo = new Triangulo(1,2,3);
        FormaVermelha formaVermelha = new FormaVermelha(triangulo);
        formaVermelha.renderizar();
    }
}

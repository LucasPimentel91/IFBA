import abstratros.Logistica;
import fabricas.setBarco;
import fabricas.setCaminhao;

public class App {

    public Logistica fabricBarco;
    public Logistica fabricCaminhao;

    public void run(){
        this.fabricBarco = new setBarco();
        this.fabricCaminhao = new setCaminhao();
    }
}

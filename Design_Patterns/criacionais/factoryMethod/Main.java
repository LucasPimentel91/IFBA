import abstratros.Logistica;
import abstratros.Marcas;
import abstratros.Transporte;

public class Main {

    public static void main(String[] args){
        App cliente = new App();

        cliente.run();

        Transporte distribuidoraSean = cliente.fabricBarco.createTransport("AT5TF6", Marcas.FORD, "Titanium");

        distribuidoraSean.coletarPacotes();
        distribuidoraSean.entregar();

        Transporte distribuidoraRoad = cliente.fabricCaminhao.createTransport("S4TFD3", Marcas.BYD, "Optimus");

        distribuidoraRoad.coletarPacotes();
        distribuidoraRoad.entregar();
    }


}

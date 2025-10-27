import java.util.ArrayList;

public class Director {
    public ArrayList<Builder> listaConstrutores = new ArrayList<>();

    public void chamadaConstrutores(String tipo, int medidaInt, double medidaDouble, double latitude, double longitude, int numero){
        for(Builder construtor : listaConstrutores){
            construtor.init();
            construtor.setCategoria(tipo);
            construtor.setCoordenadas(latitude, longitude);
            construtor.setEscala(medidaDouble);
            construtor.setMapaECN(medidaInt);
            construtor.setNumeroPrisms(numero);
        }
    }
}

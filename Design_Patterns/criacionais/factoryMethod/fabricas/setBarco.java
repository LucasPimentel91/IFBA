package fabricas;

import abstratros.Logistica;
import abstratros.Marcas;
import abstratros.Transporte;
import concretos.Barco;

public class setBarco implements Logistica {
    public void planoEntrega(){
        System.out.println("Segue as informações de envio dessa mercadoria...");
    }

    public Transporte createTransport(String placa, Marcas modelo, String marca){
        Transporte barcoSolicitado = new Barco(placa,modelo,marca);
        return barcoSolicitado;
    }
}

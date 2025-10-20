package fabricas;

import abstratros.Logistica;
import abstratros.Marcas;
import abstratros.Transporte;
import concretos.Caminhao;

public class setCaminhao implements Logistica {
    public void planoEntrega(){
        System.out.println("Segue as informações de envio dessa mercadoria...");
    }

    public Transporte createTransport(String placa, Marcas modelo, String marca){
        Transporte caminhaoSolicitado = new Caminhao(placa,modelo,marca);
        return caminhaoSolicitado;
    }
}

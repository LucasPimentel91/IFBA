package concretos;

import abstratros.Marcas;
import abstratros.Transporte;

public class Caminhao implements Transporte {
    private String placa;
    private Marcas modelo;
    private String marca;

    public Caminhao(String placa, Marcas modelo, String marca){
        this.placa = placa;
        this.modelo = modelo;
        this.marca = marca;
    }

    public void entregar(){
        System.out.println("Entregando por caminhão...");
    }

    public void coletarPacotes(){
        System.out.println("Colentando pacotes na distribuidora por caminhão");
    }
}

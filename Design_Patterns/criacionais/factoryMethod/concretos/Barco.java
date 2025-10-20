package concretos;

import abstratros.Marcas;
import abstratros.Transporte;

public class Barco implements Transporte {
    private String placa;
    private Marcas modelo;
    private String marca;

    public Barco(String placa, Marcas modelo, String marca){
        this.placa = placa;
        this.modelo = modelo;
        this.marca = marca;
    }

    public void entregar(){
        System.out.println("Entregando por barco...");
    }

    public void coletarPacotes(){
        System.out.println("Colentando pacotes na distribuidora por barco");
    }
}

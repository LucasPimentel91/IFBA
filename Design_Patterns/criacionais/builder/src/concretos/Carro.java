package concretos;

public class Carro {
    private boolean chaci;
    private boolean suspensao;
    private boolean transmissao;
    private boolean freios;
    private int rodas;
    private String motor;
    private int portas;

    public void setChaci(boolean var){
        this.chaci = var;
    }

    public void setSuspensao(boolean var){
        this.suspensao = var;
    }

    public void setTransmissao(boolean var){
        this.transmissao = var;
    }

    public void setFreios(boolean var){
        this.freios = var;
    }

    public void setRodas(int quantidade){
        this.rodas = quantidade;
    }

    public void setMotor(String nome){
        this.motor = nome;
    }

    public void setPortas(int quantidade){
        this.portas = quantidade;
    }

    public void renderCarro(){
        System.out.println("Chaci: " + chaci + "\nsuspensao: " + suspensao + "\ntransmissão: " + transmissao + "\nfreios: " + freios + "\nportas: " + portas + "\nrodas: " + rodas + "\nmotor: " + motor);
    }
}

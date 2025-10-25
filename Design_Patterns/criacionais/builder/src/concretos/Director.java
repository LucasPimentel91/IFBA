package concretos;

import abstratos.Builder;

public class Director {
    public Builder construtor;

    public Director(Builder construtor){
        this.construtor = construtor;
    }

    public void fazerVeiculo(){
        construtor.reset();
        construtor.adicionarRodas(4);
        construtor.adicionarPortas(2);
        construtor.adicionarMotor("Elétrico");
    }
}

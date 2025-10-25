package concretos;

import abstratos.Builder;

public class ConstrutorCarro implements Builder {
    public Carro carro;

    @Override
    public void reset() {
        this.carro = new Carro();
        carro.setChaci(true);
        carro.setSuspensao(true);
        carro.setFreios(true);
        carro.setTransmissao(true);
    }

    @Override
    public void adicionarMotor(String nome) {
        this.carro.setMotor(nome);
    }

    @Override
    public void adicionarRodas(int quantidade) {
        this.carro.setRodas(quantidade);
    }

    @Override
    public void adicionarPortas(int quantidade) {
        this.carro.setPortas(quantidade);
    }

    public Carro resultado(){
        return carro;
    }
}

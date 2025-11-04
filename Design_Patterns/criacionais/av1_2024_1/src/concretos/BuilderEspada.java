package concretos;

import abstratos.BuilderArma;

public class BuilderEspada implements BuilderArma {

    private Espada espada;

    @Override
    public void setAdicionalRapido(double quantidade) {

    }

    @Override
    public void setAdicionalForca(double quantidade) {

    }

    @Override
    public void setAdicionalEspecial(double quantidade) {

    }

    @Override
    public void setHabilidade(boolean valor) {

    }

    public Espada getObject(){
        return espada;
    }
}


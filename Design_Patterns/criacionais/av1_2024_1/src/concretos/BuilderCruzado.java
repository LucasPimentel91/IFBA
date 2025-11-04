package concretos;

import abstratos.BuilderPersonagem;
import abstratos.Personagem;

public class BuilderCruzado implements BuilderPersonagem {

    private Cruzado cruzado;

    @Override
    public void setAtaqueRapido(double quantidade) {

    }

    @Override
    public void setAtaqueForca(double quantidade) {

    }

    @Override
    public void setAtaqueEspecial(double quantidade) {

    }

    @Override
    public void setDefesa(double quantidade) {

    }

    @Override
    public void setMoedas(int quantidade) {

    }

    @Override
    public void setHabilidade(Boolean valor) {

    }

    public Cruzado getObject(){
        return cruzado;
    }
}

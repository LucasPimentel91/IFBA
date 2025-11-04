package concretos;

import abstratos.AbstractFactoryStarter;
import abstratos.Arma;
import abstratos.Personagem;

public class ABCruzado implements AbstractFactoryStarter {
    @Override
    public Personagem criarPersonagem() {
        return new BuilderCruzado().getObject();
    }

    @Override
    public Arma criarArma() {
        return new BuilderEspada().getObject();
    }
}

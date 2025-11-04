package concreto;

import abstrato.Calendario;
import abstrato.FactoryFabricCalendario;

public class FabricaCalendarioPessoal implements FactoryFabricCalendario {
    @Override
    public Calendario createCalendario() {
        return new CalendarioPEssoal();
    }
}

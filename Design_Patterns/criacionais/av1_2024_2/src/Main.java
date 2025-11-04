import abstrato.Calendario;
import abstrato.FactoryFabricCalendario;
import concreto.FabricaAbstrataCalendarioEsportivo;
import concreto.FabricaCalendarioPessoal;

import java.sql.Timestamp;

//TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
public class Main {
    public static void main(String[] args) {
        //...
        FactoryFabricCalendario fabricaCalendario = new FabricaCalendarioPessoal();
        Calendario calendario = fabricaCalendario.createCalendario();
        //...

        FabricaAbstrataCalendarioEsportivo fabricaEsportivo = new FabricaAbstrataCalendarioEsportivo();

        fabricaEsportivo.createCalendario().getClass();
        fabricaEsportivo.createPartida("titulo", "", "", "", "", "", "");
    }
}